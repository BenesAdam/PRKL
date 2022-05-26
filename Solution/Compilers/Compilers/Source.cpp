/* TODO:
*		- doplnit kod pro funkce v mikroC.cpp
*		- doplnit kod do funkce Interpr
*/

//---------------------------------------------------
// Inlcudes
//---------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include "FlexBison/mikroC.h"

//---------------------------------------------------
// Variables
//---------------------------------------------------
extern FILE* yyin;
Uzel* Koren = 0;

//---------------------------------------------------
// Functions
//---------------------------------------------------
int Interpr(const Uzel* u)
{
	if (u == NULL) return 0;
#define prvni u->z.z.prvni
#define druhy u->z.z.druhy
#define treti u->z.z.treti
#define ctvrty u->z.z.ctvrty
	switch (u->Typ) {
	case 0: Interpr(prvni); Interpr(druhy);
		return 0;
	case '=': return *prvni->z.Adresa = Interpr(druhy);
	case P_DELEN: { int d = Interpr(druhy);
		if (d == 0) { printf("\nDeleni nulou\n"); abort(); }
		return *prvni->z.Adresa /= d; }
	case PRINT: if (prvni->Typ != RETEZ)
		printf("%i", Interpr(prvni));
						else if (druhy)
		printf(prvni->z.Retez, Interpr(druhy));
						else printf(prvni->z.Retez);
		return 0;
	case FOR: Interpr(prvni);
		while (Interpr(druhy)) {
			Interpr(ctvrty);
			Interpr(treti);
		}
		return 0;
	case IF: if (Interpr(prvni)) Interpr(druhy);
				 else Interpr(treti);
		return 0;
	case INKREM: if (prvni) return ++ * prvni->z.Adresa;
		return (*druhy->z.Adresa)++;
	case '!': return !Interpr(prvni);
	case '<': return Interpr(prvni) < Interpr(druhy);
	case OR: return Interpr(prvni) || Interpr(druhy);
	case '-': if (druhy) return Interpr(prvni) - Interpr(druhy);
		return -Interpr(prvni);
	case '/': { int d = Interpr(druhy); if (d == 0) { printf("\nDeleni nulou\n"); abort(); }
					return Interpr(prvni) / d; }
	case CISLO: return u->z.Cislo;
	case PROMENNA: return *u->z.Adresa;
	default: printf("\nNeznama operace: %i\n", u->Typ); abort();
	}
}

int main(int argc, char* argv[])
{
	const bool debug = true;

	// processing of input
	const char* path;
	if (debug)
	{
		path = "Programs/test.mC";
	}
	else
	{
		if (argc < 2)
		{
			printf("Cesta k souboru nebyla vyplnena.\n");
			exit(0);
		}
		path = argv[1];
	}

	// reading of file
	if (!(yyin = fopen(path, "rt")))
	{
		printf("Soubor %s nelze otevrit.\n", path);
		exit(0);
	}

	// flex/bison calls
	Flush();
	LexInit();
	int parse = yyparse();
	fclose(yyin);
	if (parse) exit(0);

	// interpretation of internal form
	Interpr(Koren);
}