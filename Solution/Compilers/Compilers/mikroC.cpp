#include "FlexBison/mikroC.h"
#include <cstdlib>
#include <cstdio>
#include <string>
#include <map>

struct cmp_str
{
	bool operator()(char const* a, char const* b) const
	{
		return std::strcmp(a, b) < 0;
	}
};

std::map<char*, Uzel*, cmp_str> variables;

Uzel* GenUzel(int type, Uzel* first, Uzel* second, Uzel* third, Uzel* fourth)
{
	Uzel* uzel = new Uzel;
	uzel->Typ = type;
	uzel->z.z.prvni = first;
	uzel->z.z.druhy = second;
	uzel->z.z.treti = third;
	uzel->z.z.ctvrty = fourth;

	return uzel;
}

Uzel* GenCislo(int number)
{
	Uzel* uzel = new Uzel;
	uzel->Typ = CISLO;
	uzel->z.Cislo = number;

	return uzel;
}

char* GetStr(const char* arg_str)
{
	unsigned int len = strlen(arg_str);
	char* str = new char[len + 1];
	str[len] = '\0';
	strcpy(str, arg_str);
	return str;
}

Uzel* GenRetez(const char* str)
{
	Uzel* uzel = new Uzel;
	uzel->Typ = RETEZ;
	uzel->z.Retez = GetStr(str);

	return uzel;
}

Uzel* GenPromen(const char* nameOfVariable)
{
	Uzel* result;
	char* key = GetStr(nameOfVariable);
	if (variables.count(key) == 0)
	{
		Uzel* newVariable = new Uzel;
		newVariable->Typ = PROMENNA;
		newVariable->z.Adresa = new int;
		variables.emplace(key, newVariable);
		result = newVariable;
	}
	else
	{
		result = variables[key];
		delete key;
	}
	return result;
}

void Chyba(const char* errorMessage, Pozice position)
{
	printf("%s\n", errorMessage);
}

void yyerror(const char* message)
{
	printf("%s\n", message);
}