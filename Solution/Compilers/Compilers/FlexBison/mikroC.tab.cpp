#define _CRT_SECURE_NO_WARNINGS
/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "mikroC.y"


#include  "MikroC.h"

int yylex();
void yyerror(const char *);

extern Uzel *Koren;

bool Konst(const Uzel *);

bool Konst(const Uzel *,const Uzel *);


/* Line 371 of yacc.c  */
#line 83 "mikroC.tab.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "mikroC.tab.hpp".  */
#ifndef YY_YY_MIKROC_TAB_HPP_INCLUDED
# define YY_YY_MIKROC_TAB_HPP_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CISLO = 258,
     RETEZ = 259,
     PROMENNA = 260,
     IF = 261,
     ELSE = 262,
     FOR = 263,
     WHILE = 264,
     DO = 265,
     PRINT = 266,
     SCAN = 267,
     P_OR = 268,
     P_XOR = 269,
     P_AND = 270,
     P_POSUNVPRAVO = 271,
     P_POSUNVLEVO = 272,
     P_ODECT = 273,
     P_PRICT = 274,
     P_MODUL = 275,
     P_DELEN = 276,
     P_NASOB = 277,
     OR = 278,
     AND = 279,
     NENIROVNO = 280,
     ROVNO = 281,
     VETSIROVNO = 282,
     MENSIROVNO = 283,
     POSUNVPRAVO = 284,
     POSUNVLEVO = 285,
     UPLUS = 286,
     UMINUS = 287,
     DEKREM = 288,
     INKREM = 289
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_MIKROC_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 182 "mikroC.tab.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  25
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   513

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  8
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNRULES -- Number of states.  */
#define YYNSTATES  145

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,     2,     2,    41,    28,     2,
      51,    52,    39,    37,    53,    38,     2,    40,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    50,
      31,    13,    32,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    27,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,    26,    49,    43,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      29,    30,    33,    34,    35,    36,    44,    45,    46,    47
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     7,    10,    11,    15,    18,    20,    26,
      34,    44,    50,    58,    63,    66,    68,    69,    75,    81,
      89,    95,    97,   100,   103,   106,   109,   112,   115,   119,
     123,   127,   131,   135,   139,   143,   147,   151,   155,   159,
     163,   167,   171,   175,   179,   183,   187,   191,   195,   199,
     203,   207,   211,   215,   219,   223,   227,   231,   234,   237,
     241,   243,   245,   249
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      55,     0,    -1,    48,    56,    49,    -1,    57,    56,    -1,
      -1,    48,    56,    49,    -1,    60,    50,    -1,    50,    -1,
       6,    51,    60,    52,    57,    -1,     6,    51,    60,    52,
      57,     7,    57,    -1,     8,    51,    58,    50,    60,    50,
      58,    52,    57,    -1,     9,    51,    60,    52,    57,    -1,
      10,    57,     9,    51,    60,    52,    50,    -1,    48,    56,
       1,    49,    -1,     1,    50,    -1,    60,    -1,    -1,    11,
      51,    60,    52,    50,    -1,    11,    51,    59,    52,    50,
      -1,    11,    51,    59,    53,    60,    52,    50,    -1,    12,
      51,    61,    52,    50,    -1,     4,    -1,    47,    61,    -1,
      46,    61,    -1,    61,    47,    -1,    61,    46,    -1,    42,
      60,    -1,    43,    60,    -1,    60,    39,    60,    -1,    60,
      40,    60,    -1,    60,    41,    60,    -1,    60,    37,    60,
      -1,    60,    38,    60,    -1,    60,    36,    60,    -1,    60,
      35,    60,    -1,    60,    31,    60,    -1,    60,    32,    60,
      -1,    60,    34,    60,    -1,    60,    33,    60,    -1,    60,
      30,    60,    -1,    60,    29,    60,    -1,    60,    28,    60,
      -1,    60,    27,    60,    -1,    60,    26,    60,    -1,    60,
      25,    60,    -1,    60,    24,    60,    -1,    61,    13,    60,
      -1,    61,    23,    60,    -1,    61,    22,    60,    -1,    61,
      21,    60,    -1,    61,    20,    60,    -1,    61,    19,    60,
      -1,    61,    18,    60,    -1,    61,    17,    60,    -1,    61,
      16,    60,    -1,    61,    15,    60,    -1,    61,    14,    60,
      -1,    38,    60,    -1,    37,    60,    -1,    51,    60,    52,
      -1,    61,    -1,     3,    -1,    51,     1,    52,    -1,     5,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    40,    40,    42,    43,    45,    47,    49,    51,    53,
      55,    57,    59,    61,    63,    65,    66,    68,    70,    72,
      74,    76,    78,    80,    82,    84,    86,    89,    92,    95,
     100,   105,   108,   111,   114,   117,   120,   123,   126,   129,
     132,   135,   138,   141,   144,   147,   150,   152,   154,   156,
     158,   160,   162,   164,   166,   168,   170,   172,   175,   177,
     179,   181,   183,   185
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CISLO", "RETEZ", "PROMENNA", "IF",
  "ELSE", "FOR", "WHILE", "DO", "PRINT", "SCAN", "'='", "P_OR", "P_XOR",
  "P_AND", "P_POSUNVPRAVO", "P_POSUNVLEVO", "P_ODECT", "P_PRICT",
  "P_MODUL", "P_DELEN", "P_NASOB", "OR", "AND", "'|'", "'^'", "'&'",
  "NENIROVNO", "ROVNO", "'<'", "'>'", "VETSIROVNO", "MENSIROVNO",
  "POSUNVPRAVO", "POSUNVLEVO", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'",
  "'~'", "UPLUS", "UMINUS", "DEKREM", "INKREM", "'{'", "'}'", "';'", "'('",
  "')'", "','", "$accept", "program", "prikazy", "prikaz", "vyrazf",
  "retez", "vyraz", "promenna", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,    61,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   124,    94,    38,   280,
     281,    60,    62,   282,   283,   284,   285,    43,    45,    42,
      47,    37,    33,   126,   286,   287,   288,   289,   123,   125,
      59,    40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    56,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    58,    58,    57,    57,    57,
      57,    59,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    61
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     0,     3,     2,     1,     5,     7,
       9,     5,     7,     4,     2,     1,     0,     5,     5,     7,
       5,     1,     2,     2,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     3,
       1,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    61,    63,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       0,     0,     0,     0,    60,     1,    14,     0,    16,     0,
       0,     0,     0,    58,    57,    26,    27,    23,    22,     0,
       0,     0,     2,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,    24,     0,     0,    15,     0,
       0,    21,     0,     0,     0,     0,     5,    62,    59,    45,
      44,    43,    42,    41,    40,    39,    35,    36,    38,    37,
      34,    33,    31,    32,    28,    29,    30,    46,    56,    55,
      54,    53,    52,    51,    50,    49,    48,    47,     0,     0,
       0,     0,     0,     0,     0,     0,    13,     8,     0,    11,
       0,    18,     0,    17,    20,     0,    16,     0,     0,     9,
       0,    12,    19,     0,    10
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    21,    22,    77,    82,    23,    24
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -44
static const yytype_int16 yypact[] =
{
     -43,    81,     8,   -35,   -44,   -44,   -25,   -23,   -21,   132,
     -19,     0,   117,   117,   117,   117,    60,    60,    81,   -44,
      26,    17,    81,   346,   171,   -44,   -44,   117,   117,   117,
      61,   110,    60,   -44,   -44,   -44,   -44,   -44,   -44,    18,
      19,   172,   -44,   -44,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   -44,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   -44,   -44,   201,    28,   400,   230,
      29,   -44,   -29,   259,    27,    32,   -44,   -44,   -44,   417,
     433,   448,    66,   461,   472,   472,   208,   208,   208,   208,
     -27,   -27,    35,    35,   -44,   -44,   -44,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   132,   117,
     132,   117,    33,   117,    38,    67,   -44,    78,   373,   -44,
     288,   -44,   317,   -44,   -44,   132,   117,    71,    86,   -44,
      64,   -44,   -44,   132,   -44
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -44,   -44,     3,    -9,     9,   -44,   -11,   -10
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -5
static const yytype_int16 yytable[] =
{
      30,    33,    34,    35,    36,     1,    37,    38,    25,    41,
      57,    58,    59,    60,    61,    26,    76,    78,    79,    85,
      83,    39,    84,   122,   123,    43,    27,    40,    28,     4,
      29,     5,    31,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,    32,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,    12,    13,     5,    42,    86,    14,    15,
      80,    87,    16,    17,    59,    60,    61,    20,   119,   125,
     121,   126,     3,   131,     4,   135,     5,     6,   133,     7,
       8,     9,    10,    11,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,   128,   127,
     130,   129,   132,     4,    81,     5,   143,   134,    12,    13,
       4,   141,     5,    14,    15,    78,   139,    16,    17,    18,
      -4,    19,    20,     3,   144,     4,   142,     5,     6,     0,
       7,     8,     9,    10,    11,   140,     0,    12,    13,     0,
       0,     0,    14,    15,    12,    13,    16,    17,     0,    14,
      15,    20,     0,    16,    17,     0,     0,     0,    20,    12,
      13,     0,     0,     0,    14,    15,     0,     0,    16,    17,
      18,     0,    19,    20,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,     0,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,     0,     0,     0,    74,    75,     0,
       0,     0,     0,     0,    88,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,   118,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   120,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   124,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     137,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   138,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,     0,     0,
       0,     0,     0,     0,     0,     0,    62,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,     0,     0,     0,     0,     0,
       0,     0,     0,   136,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-44)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       9,    12,    13,    14,    15,    48,    16,    17,     0,    20,
      37,    38,    39,    40,    41,    50,    27,    28,    29,     1,
      31,    18,    32,    52,    53,    22,    51,     1,    51,     3,
      51,     5,    51,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    51,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    37,    38,     5,    49,    49,    42,    43,
       9,    52,    46,    47,    39,    40,    41,    51,    50,    52,
      51,    49,     1,    50,     3,     7,     5,     6,    50,     8,
       9,    10,    11,    12,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,   119,   118,
     121,   120,   123,     3,     4,     5,    52,    50,    37,    38,
       3,    50,     5,    42,    43,   136,   135,    46,    47,    48,
      49,    50,    51,     1,   143,     3,    50,     5,     6,    -1,
       8,     9,    10,    11,    12,   136,    -1,    37,    38,    -1,
      -1,    -1,    42,    43,    37,    38,    46,    47,    -1,    42,
      43,    51,    -1,    46,    47,    -1,    -1,    -1,    51,    37,
      38,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,    47,
      48,    -1,    50,    51,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,    -1,    52,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    52,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    48,    55,     1,     3,     5,     6,     8,     9,    10,
      11,    12,    37,    38,    42,    43,    46,    47,    48,    50,
      51,    56,    57,    60,    61,     0,    50,    51,    51,    51,
      57,    51,    51,    60,    60,    60,    60,    61,    61,    56,
       1,    60,    49,    56,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    50,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    46,    47,    60,    58,    60,    60,
       9,     4,    59,    60,    61,     1,    49,    52,    52,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    52,    50,
      52,    51,    52,    53,    52,    52,    49,    57,    60,    57,
      60,    50,    60,    50,    50,     7,    50,    52,    52,    57,
      58,    50,    50,    52,    57
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
/* Line 1792 of yacc.c  */
#line 40 "mikroC.y"
    { Koren=(yyvsp[(2) - (3)].u); return 0; }
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 42 "mikroC.y"
    { (yyval.u)= (yyvsp[(2) - (2)].u) ? GenUzel(0,(yyvsp[(1) - (2)].u),(yyvsp[(2) - (2)].u)) : (yyvsp[(1) - (2)].u); }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 43 "mikroC.y"
    { (yyval.u)=0; }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 45 "mikroC.y"
    { (yyval.u)=(yyvsp[(2) - (3)].u); }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 47 "mikroC.y"
    { (yyval.u)=(yyvsp[(1) - (2)].u); }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 49 "mikroC.y"
    { (yyval.u)=0; }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 51 "mikroC.y"
    { (yyval.u)=GenUzel(IF,(yyvsp[(3) - (5)].u),(yyvsp[(5) - (5)].u)); }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 53 "mikroC.y"
    { (yyval.u)=GenUzel(IF,(yyvsp[(3) - (7)].u),(yyvsp[(5) - (7)].u),(yyvsp[(7) - (7)].u)); }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 55 "mikroC.y"
    { (yyval.u)=GenUzel(FOR,(yyvsp[(3) - (9)].u),(yyvsp[(5) - (9)].u),(yyvsp[(7) - (9)].u),(yyvsp[(9) - (9)].u)); }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 57 "mikroC.y"
    { (yyval.u)=GenUzel(WHILE,(yyvsp[(3) - (5)].u),(yyvsp[(5) - (5)].u)); }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 59 "mikroC.y"
    { (yyval.u)=GenUzel(DO,(yyvsp[(2) - (7)].u),(yyvsp[(5) - (7)].u)); }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 61 "mikroC.y"
    { (yyval.u)=0; }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 63 "mikroC.y"
    { (yyval.u)=0; }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 65 "mikroC.y"
    { (yyval.u)=(yyvsp[(1) - (1)].u); }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 66 "mikroC.y"
    { (yyval.u)=0; }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 68 "mikroC.y"
    { (yyval.u)=GenUzel(PRINT,(yyvsp[(3) - (5)].u)); }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 70 "mikroC.y"
    { (yyval.u)=GenUzel(PRINT,(yyvsp[(3) - (5)].u)); }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 72 "mikroC.y"
    { (yyval.u)=GenUzel(PRINT,(yyvsp[(3) - (7)].u),(yyvsp[(5) - (7)].u)); }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 74 "mikroC.y"
    { (yyval.u)=GenUzel(SCAN,(yyvsp[(3) - (5)].u)); }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 76 "mikroC.y"
    { (yyval.u)=GenRetez((yyvsp[(1) - (1)].r)); }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 78 "mikroC.y"
    { (yyval.u)=GenUzel(INKREM,(yyvsp[(2) - (2)].u)); }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 80 "mikroC.y"
    { (yyval.u)=GenUzel(DEKREM,(yyvsp[(2) - (2)].u)); }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 82 "mikroC.y"
    { (yyval.u)=GenUzel(INKREM,0,(yyvsp[(1) - (2)].u)); }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 84 "mikroC.y"
    { (yyval.u)=GenUzel(DEKREM,0,(yyvsp[(1) - (2)].u)); }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 86 "mikroC.y"
    { if (Konst((yyvsp[(2) - (2)].u))) { (yyvsp[(2) - (2)].u)->z.Cislo=!(yyvsp[(2) - (2)].u)->z.Cislo; (yyval.u)=(yyvsp[(2) - (2)].u); }
                                else (yyval.u)=GenUzel('!',(yyvsp[(2) - (2)].u)); }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 89 "mikroC.y"
    { if (Konst((yyvsp[(2) - (2)].u))) { (yyvsp[(2) - (2)].u)->z.Cislo=~(yyvsp[(2) - (2)].u)->z.Cislo; (yyval.u)=(yyvsp[(2) - (2)].u); }
                                else (yyval.u)=GenUzel('~',(yyvsp[(2) - (2)].u)); }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 92 "mikroC.y"
    { if (Konst((yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u))) { (yyvsp[(1) - (3)].u)->z.Cislo*=(yyvsp[(3) - (3)].u)->z.Cislo; (yyval.u)=(yyvsp[(1) - (3)].u); }
                                else (yyval.u)=GenUzel('*',(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 95 "mikroC.y"
    { if (Konst((yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u))) { if ((yyvsp[(3) - (3)].u)->z.Cislo!=0) (yyvsp[(1) - (3)].u)->z.Cislo/=(yyvsp[(3) - (3)].u)->z.Cislo;
                                                    else Chyba("Deleni nulou");
                                                    (yyval.u)=(yyvsp[(1) - (3)].u); }
                                else (yyval.u)=GenUzel('/',(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 100 "mikroC.y"
    { if (Konst((yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u))) { if ((yyvsp[(3) - (3)].u)->z.Cislo!=0) (yyvsp[(1) - (3)].u)->z.Cislo%=(yyvsp[(3) - (3)].u)->z.Cislo;
                                                    else Chyba("Deleni nulou");
                                                    (yyval.u)=(yyvsp[(1) - (3)].u); }
                                else (yyval.u)=GenUzel('%',(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 105 "mikroC.y"
    { if (Konst((yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u))) { (yyvsp[(1) - (3)].u)->z.Cislo+=(yyvsp[(3) - (3)].u)->z.Cislo; (yyval.u)=(yyvsp[(1) - (3)].u); }
                                else (yyval.u)=GenUzel('+',(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 108 "mikroC.y"
    { if (Konst((yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u))) { (yyvsp[(1) - (3)].u)->z.Cislo-=(yyvsp[(3) - (3)].u)->z.Cislo; (yyval.u)=(yyvsp[(1) - (3)].u); }
                                else (yyval.u)=GenUzel('-',(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 111 "mikroC.y"
    { if (Konst((yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u))) { (yyvsp[(1) - (3)].u)->z.Cislo<<=(yyvsp[(3) - (3)].u)->z.Cislo; (yyval.u)=(yyvsp[(1) - (3)].u); }
                                     else (yyval.u)=GenUzel(POSUNVLEVO,(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 114 "mikroC.y"
    { if (Konst((yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u))) { (yyvsp[(1) - (3)].u)->z.Cislo>>=(yyvsp[(3) - (3)].u)->z.Cislo; (yyval.u)=(yyvsp[(1) - (3)].u); }
                                     else (yyval.u)=GenUzel(POSUNVPRAVO,(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 117 "mikroC.y"
    { if (Konst((yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u))) { (yyvsp[(1) - (3)].u)->z.Cislo= (yyvsp[(1) - (3)].u)->z.Cislo<(yyvsp[(3) - (3)].u)->z.Cislo; (yyval.u)=(yyvsp[(1) - (3)].u); }
                                else (yyval.u)=GenUzel('<',(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 120 "mikroC.y"
    { if (Konst((yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u))) { (yyvsp[(1) - (3)].u)->z.Cislo= (yyvsp[(1) - (3)].u)->z.Cislo>(yyvsp[(3) - (3)].u)->z.Cislo; (yyval.u)=(yyvsp[(1) - (3)].u); }
                                else (yyval.u)=GenUzel('>',(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 123 "mikroC.y"
    { if (Konst((yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u))) { (yyvsp[(1) - (3)].u)->z.Cislo= (yyvsp[(1) - (3)].u)->z.Cislo<=(yyvsp[(3) - (3)].u)->z.Cislo; (yyval.u)=(yyvsp[(1) - (3)].u); }
                                    else (yyval.u)=GenUzel(MENSIROVNO,(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 126 "mikroC.y"
    { if (Konst((yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u))) { (yyvsp[(1) - (3)].u)->z.Cislo= (yyvsp[(1) - (3)].u)->z.Cislo>=(yyvsp[(3) - (3)].u)->z.Cislo; (yyval.u)=(yyvsp[(1) - (3)].u); }
                                    else (yyval.u)=GenUzel(VETSIROVNO,(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 129 "mikroC.y"
    { if (Konst((yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u))) { (yyvsp[(1) - (3)].u)->z.Cislo= (yyvsp[(1) - (3)].u)->z.Cislo==(yyvsp[(3) - (3)].u)->z.Cislo; (yyval.u)=(yyvsp[(1) - (3)].u); }
                                else (yyval.u)=GenUzel(ROVNO,(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 132 "mikroC.y"
    { if (Konst((yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u))) { (yyvsp[(1) - (3)].u)->z.Cislo= (yyvsp[(1) - (3)].u)->z.Cislo!=(yyvsp[(3) - (3)].u)->z.Cislo; (yyval.u)=(yyvsp[(1) - (3)].u); }
                                   else (yyval.u)=GenUzel(NENIROVNO,(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 135 "mikroC.y"
    { if (Konst((yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u))) { (yyvsp[(1) - (3)].u)->z.Cislo&=(yyvsp[(3) - (3)].u)->z.Cislo; (yyval.u)=(yyvsp[(1) - (3)].u); }
                                else (yyval.u)=GenUzel('&',(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 138 "mikroC.y"
    { if (Konst((yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u))) { (yyvsp[(1) - (3)].u)->z.Cislo^=(yyvsp[(3) - (3)].u)->z.Cislo; (yyval.u)=(yyvsp[(1) - (3)].u); }
                                else (yyval.u)=GenUzel('^',(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 141 "mikroC.y"
    { if (Konst((yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u))) { (yyvsp[(1) - (3)].u)->z.Cislo|=(yyvsp[(3) - (3)].u)->z.Cislo; (yyval.u)=(yyvsp[(1) - (3)].u); }
                                else (yyval.u)=GenUzel('|',(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 144 "mikroC.y"
    { if (Konst((yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u))) { (yyvsp[(1) - (3)].u)->z.Cislo= (yyvsp[(1) - (3)].u)->z.Cislo && (yyvsp[(3) - (3)].u)->z.Cislo; (yyval.u)=(yyvsp[(1) - (3)].u); }
                                else (yyval.u)=GenUzel(AND,(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 147 "mikroC.y"
    { if (Konst((yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u))) { (yyvsp[(1) - (3)].u)->z.Cislo= (yyvsp[(1) - (3)].u)->z.Cislo || (yyvsp[(3) - (3)].u)->z.Cislo; (yyval.u)=(yyvsp[(1) - (3)].u); }
                                else (yyval.u)=GenUzel(OR,(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 150 "mikroC.y"
    { (yyval.u)=GenUzel('=',(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 152 "mikroC.y"
    { (yyval.u)=GenUzel(P_NASOB,(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 154 "mikroC.y"
    { (yyval.u)=GenUzel(P_DELEN,(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 156 "mikroC.y"
    { (yyval.u)=GenUzel(P_MODUL,(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 158 "mikroC.y"
    { (yyval.u)=GenUzel(P_PRICT,(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 160 "mikroC.y"
    { (yyval.u)=GenUzel(P_ODECT,(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 162 "mikroC.y"
    { (yyval.u)=GenUzel(P_POSUNVLEVO,(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 164 "mikroC.y"
    { (yyval.u)=GenUzel(P_POSUNVPRAVO,(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 166 "mikroC.y"
    { (yyval.u)=GenUzel(P_AND,(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 168 "mikroC.y"
    { (yyval.u)=GenUzel(P_XOR,(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 170 "mikroC.y"
    { (yyval.u)=GenUzel(P_OR,(yyvsp[(1) - (3)].u),(yyvsp[(3) - (3)].u)); }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 172 "mikroC.y"
    { if (Konst((yyvsp[(2) - (2)].u))) { (yyvsp[(2) - (2)].u)->z.Cislo=-(yyvsp[(2) - (2)].u)->z.Cislo; (yyval.u)=(yyvsp[(2) - (2)].u); }
                                    else (yyval.u)=GenUzel('-',(yyvsp[(2) - (2)].u)); }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 175 "mikroC.y"
    { (yyval.u)=(yyvsp[(2) - (2)].u); }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 177 "mikroC.y"
    { (yyval.u)=(yyvsp[(2) - (3)].u); }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 179 "mikroC.y"
    { (yyval.u)=(yyvsp[(1) - (1)].u); }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 181 "mikroC.y"
    { (yyval.u)=GenCislo((yyvsp[(1) - (1)].c)); }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 183 "mikroC.y"
    { (yyval.u)=0; }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 185 "mikroC.y"
    { (yyval.u)=GenPromen((yyvsp[(1) - (1)].r)); }
    break;


/* Line 1792 of yacc.c  */
#line 1962 "mikroC.tab.cpp"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 187 "mikroC.y"


static bool Konst(const Uzel *u)
{ return u && u->Typ==CISLO; }

static bool Konst(const Uzel *u1,const Uzel *u2)
{ return u1 && u1->Typ==CISLO && u2 && u2->Typ==CISLO; }

