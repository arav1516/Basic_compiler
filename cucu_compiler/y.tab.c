/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "cucu.y"

#include <stdio.h>
#include <string.h>
#include <math.h>
int yylex();
void yyerror(char const *s);
extern FILE *yyin,*yyout,*lexout;


#line 81 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    int_data = 258,                /* int_data  */
    string_data = 259,             /* string_data  */
    while_loop = 260,              /* while_loop  */
    if_statement = 261,            /* if_statement  */
    else_statement = 262,          /* else_statement  */
    return_command = 263,          /* return_command  */
    comma = 264,                   /* comma  */
    plus = 265,                    /* plus  */
    minus = 266,                   /* minus  */
    multiply = 267,                /* multiply  */
    divide = 268,                  /* divide  */
    assignment_or_equals = 269,    /* assignment_or_equals  */
    semicolon = 270,               /* semicolon  */
    less_than = 271,               /* less_than  */
    greater_than = 272,            /* greater_than  */
    less_than_equal = 273,         /* less_than_equal  */
    greater_than_equal = 274,      /* greater_than_equal  */
    open_curly = 275,              /* open_curly  */
    closed_curly = 276,            /* closed_curly  */
    open_square = 277,             /* open_square  */
    closed_square = 278,           /* closed_square  */
    open_paranthesis = 279,        /* open_paranthesis  */
    closed_paranthesis = 280,      /* closed_paranthesis  */
    check_equals = 281,            /* check_equals  */
    check_not_equals = 282,        /* check_not_equals  */
    bitwise_and = 283,             /* bitwise_and  */
    string = 284,                  /* string  */
    identifier = 285,              /* identifier  */
    integer = 286                  /* integer  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define int_data 258
#define string_data 259
#define while_loop 260
#define if_statement 261
#define else_statement 262
#define return_command 263
#define comma 264
#define plus 265
#define minus 266
#define multiply 267
#define divide 268
#define assignment_or_equals 269
#define semicolon 270
#define less_than 271
#define greater_than 272
#define less_than_equal 273
#define greater_than_equal 274
#define open_curly 275
#define closed_curly 276
#define open_square 277
#define closed_square 278
#define open_paranthesis 279
#define closed_paranthesis 280
#define check_equals 281
#define check_not_equals 282
#define bitwise_and 283
#define string 284
#define identifier 285
#define integer 286

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "cucu.y"

	char *str;
	int number;

#line 201 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_int_data = 3,                   /* int_data  */
  YYSYMBOL_string_data = 4,                /* string_data  */
  YYSYMBOL_while_loop = 5,                 /* while_loop  */
  YYSYMBOL_if_statement = 6,               /* if_statement  */
  YYSYMBOL_else_statement = 7,             /* else_statement  */
  YYSYMBOL_return_command = 8,             /* return_command  */
  YYSYMBOL_comma = 9,                      /* comma  */
  YYSYMBOL_plus = 10,                      /* plus  */
  YYSYMBOL_minus = 11,                     /* minus  */
  YYSYMBOL_multiply = 12,                  /* multiply  */
  YYSYMBOL_divide = 13,                    /* divide  */
  YYSYMBOL_assignment_or_equals = 14,      /* assignment_or_equals  */
  YYSYMBOL_semicolon = 15,                 /* semicolon  */
  YYSYMBOL_less_than = 16,                 /* less_than  */
  YYSYMBOL_greater_than = 17,              /* greater_than  */
  YYSYMBOL_less_than_equal = 18,           /* less_than_equal  */
  YYSYMBOL_greater_than_equal = 19,        /* greater_than_equal  */
  YYSYMBOL_open_curly = 20,                /* open_curly  */
  YYSYMBOL_closed_curly = 21,              /* closed_curly  */
  YYSYMBOL_open_square = 22,               /* open_square  */
  YYSYMBOL_closed_square = 23,             /* closed_square  */
  YYSYMBOL_open_paranthesis = 24,          /* open_paranthesis  */
  YYSYMBOL_closed_paranthesis = 25,        /* closed_paranthesis  */
  YYSYMBOL_check_equals = 26,              /* check_equals  */
  YYSYMBOL_check_not_equals = 27,          /* check_not_equals  */
  YYSYMBOL_bitwise_and = 28,               /* bitwise_and  */
  YYSYMBOL_string = 29,                    /* string  */
  YYSYMBOL_identifier = 30,                /* identifier  */
  YYSYMBOL_integer = 31,                   /* integer  */
  YYSYMBOL_YYACCEPT = 32,                  /* $accept  */
  YYSYMBOL_programs = 33,                  /* programs  */
  YYSYMBOL_program = 34,                   /* program  */
  YYSYMBOL_var_declaration = 35,           /* var_declaration  */
  YYSYMBOL_func_definition = 36,           /* func_definition  */
  YYSYMBOL_func_declaration = 37,          /* func_declaration  */
  YYSYMBOL_statements = 38,                /* statements  */
  YYSYMBOL_statement = 39,                 /* statement  */
  YYSYMBOL_func_args = 40,                 /* func_args  */
  YYSYMBOL_assignment_statement = 41,      /* assignment_statement  */
  YYSYMBOL_return_statement = 42,          /* return_statement  */
  YYSYMBOL_func_call_statement = 43,       /* func_call_statement  */
  YYSYMBOL_while_statement_statement = 44, /* while_statement_statement  */
  YYSYMBOL_if_else = 45,                   /* if_else  */
  YYSYMBOL_bunch_of_identifiers = 46,      /* bunch_of_identifiers  */
  YYSYMBOL_boolean_expression = 47,        /* boolean_expression  */
  YYSYMBOL_arithmetic_expression = 48,     /* arithmetic_expression  */
  YYSYMBOL_id = 49,                        /* id  */
  YYSYMBOL_STRING = 50,                    /* STRING  */
  YYSYMBOL_INT_DATA = 51,                  /* INT_DATA  */
  YYSYMBOL_STRING_DATA = 52                /* STRING_DATA  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   213

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  124

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   286


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    31,    31,    32,    35,    36,    37,    38,    39,    40,
      43,    44,    45,    46,    53,    54,    57,    58,    60,    61,
      64,    65,    66,    67,    68,    69,    72,    73,    74,    75,
      76,    79,    83,    84,    87,    91,    94,    97,    98,    99,
     103,   104,   105,   106,   107,   108,   109,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   125,   128,   131,
     134
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "int_data",
  "string_data", "while_loop", "if_statement", "else_statement",
  "return_command", "comma", "plus", "minus", "multiply", "divide",
  "assignment_or_equals", "semicolon", "less_than", "greater_than",
  "less_than_equal", "greater_than_equal", "open_curly", "closed_curly",
  "open_square", "closed_square", "open_paranthesis", "closed_paranthesis",
  "check_equals", "check_not_equals", "bitwise_and", "string",
  "identifier", "integer", "$accept", "programs", "program",
  "var_declaration", "func_definition", "func_declaration", "statements",
  "statement", "func_args", "assignment_statement", "return_statement",
  "func_call_statement", "while_statement_statement", "if_else",
  "bunch_of_identifiers", "boolean_expression", "arithmetic_expression",
  "id", "STRING", "INT_DATA", "STRING_DATA", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-85)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     127,   -85,   -85,   -14,    -8,    72,   -85,    60,   127,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,    59,    37,
      37,   182,   182,   -85,   182,   -85,   -85,   143,    46,    50,
     -85,   -85,   -85,   -85,   -85,   182,   182,    74,   139,   155,
     159,    69,   -85,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   128,    45,   183,   182,   -85,
      10,    49,   -85,    10,    66,    91,   -85,    46,    46,    46,
      46,    46,    46,    22,    22,   -85,   -85,    46,   171,   -85,
     182,    54,   137,   103,    37,    37,   101,   109,   -85,   -85,
     -85,   183,   -85,   -85,    -3,   135,   146,   -85,    21,    41,
      47,   -85,   -85,    10,    10,   -85,   -85,   -85,   -85,    37,
      37,   130,    87,   -85,   -85,   115,    61,    99,   126,   -85,
     -85,   -85,   121,   -85
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,    59,    60,     0,     0,     0,    57,     0,     3,    22,
       5,     6,     4,    20,    25,    21,    24,    23,     0,     0,
       0,     0,     0,    32,     0,    58,    53,     0,    46,    56,
      54,     1,     7,     8,     9,     0,    37,     0,     0,     0,
       0,     0,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,    11,
      26,     0,    13,    26,     0,     0,    47,    42,    43,    44,
      45,    40,    41,    49,    50,    51,    52,    48,     0,    31,
       0,     0,     0,     0,     0,     0,     0,     0,    18,    18,
      55,    39,    34,    10,     0,    27,    28,    12,     0,     0,
       0,    16,    18,    26,    26,    17,    18,    35,    19,     0,
       0,     0,     0,    29,    30,     0,     0,     0,     0,    14,
      15,    18,     0,    36
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -85,   -85,   -85,   -85,   156,   158,   -84,    40,   -61,   -85,
     -85,   -85,   -85,   -85,   -85,   -15,   -20,     0,   106,     1,
       3
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     7,     8,     9,    10,    11,    99,   108,    83,    13,
      14,    15,    16,    17,    56,    27,    28,    29,    30,   109,
     110
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      18,    19,    87,    20,    41,   100,    39,    40,    18,    19,
      21,    20,   101,     1,     2,    55,    22,   102,   112,    37,
      38,    57,   115,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    51,    52,   105,   122,    82,    78,
      12,   106,   113,   114,     1,     2,     3,     4,    34,     5,
       1,     2,     3,     4,    80,     5,    49,    50,    51,    52,
      31,    84,   107,    85,    84,    91,    85,     6,   111,    92,
      81,     6,    54,    35,    53,    58,    59,     6,    25,    49,
      50,    51,    52,    36,    95,    96,    88,    23,    58,    59,
       1,     2,     3,     4,    66,     5,    24,    53,    60,    18,
      18,    25,     6,    26,    84,    84,    85,    85,   119,   116,
     117,    89,    18,    61,    62,    18,    97,     6,     1,     2,
       3,     4,    18,     5,     1,     2,     3,     4,    94,     5,
       1,     2,     3,     4,    98,     5,   120,   118,    49,    50,
      51,    52,   123,    79,   103,     6,   121,    49,    50,    51,
      52,     6,    93,    61,    62,   104,    53,     6,    42,    43,
      44,    45,    46,    63,    32,    53,    33,    86,     0,    47,
      48,    43,    44,    45,    46,    43,    44,    45,    46,     0,
      64,    47,    48,     0,    65,    47,    48,    43,    44,    45,
      46,     0,     0,     0,    90,     0,     0,    47,    48,    43,
      44,    45,    46,     0,     0,     0,    24,     0,     0,    47,
      48,    25,     6,    26
};

static const yytype_int8 yycheck[] =
{
       0,     0,    63,     0,    24,    89,    21,    22,     8,     8,
      24,     8,    15,     3,     4,    35,    24,    20,   102,    19,
      20,    36,   106,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    12,    13,    15,   121,    58,    54,
       0,    20,   103,   104,     3,     4,     5,     6,     8,     8,
       3,     4,     5,     6,     9,     8,    10,    11,    12,    13,
       0,    60,    21,    60,    63,    80,    63,    30,    21,    15,
      25,    30,    22,    14,    28,    14,    15,    30,    29,    10,
      11,    12,    13,    24,    84,    85,    20,    15,    14,    15,
       3,     4,     5,     6,    25,     8,    24,    28,    24,    99,
     100,    29,    30,    31,   103,   104,   103,   104,    21,   109,
     110,    20,   112,    14,    15,   115,    15,    30,     3,     4,
       5,     6,   122,     8,     3,     4,     5,     6,    25,     8,
       3,     4,     5,     6,    25,     8,    21,     7,    10,    11,
      12,    13,    21,    15,     9,    30,    20,    10,    11,    12,
      13,    30,    15,    14,    15,     9,    28,    30,    15,    16,
      17,    18,    19,    24,     8,    28,     8,    61,    -1,    26,
      27,    16,    17,    18,    19,    16,    17,    18,    19,    -1,
      25,    26,    27,    -1,    25,    26,    27,    16,    17,    18,
      19,    -1,    -1,    -1,    23,    -1,    -1,    26,    27,    16,
      17,    18,    19,    -1,    -1,    -1,    24,    -1,    -1,    26,
      27,    29,    30,    31
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     8,    30,    33,    34,    35,
      36,    37,    39,    41,    42,    43,    44,    45,    49,    51,
      52,    24,    24,    15,    24,    29,    31,    47,    48,    49,
      50,     0,    36,    37,    39,    14,    24,    49,    49,    47,
      47,    48,    15,    16,    17,    18,    19,    26,    27,    10,
      11,    12,    13,    28,    22,    48,    46,    47,    14,    15,
      24,    14,    15,    24,    25,    25,    25,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    47,    15,
       9,    25,    48,    40,    51,    52,    50,    40,    20,    20,
      23,    47,    15,    15,    25,    49,    49,    15,    25,    38,
      38,    15,    20,     9,     9,    15,    20,    21,    39,    51,
      52,    21,    38,    40,    40,    38,    49,    49,     7,    21,
      21,    20,    38,    21
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    33,    34,    34,    34,    34,    34,    34,
      35,    35,    35,    35,    36,    36,    37,    37,    38,    38,
      39,    39,    39,    39,    39,    39,    40,    40,    40,    40,
      40,    41,    42,    42,    43,    44,    45,    46,    46,    46,
      47,    47,    47,    47,    47,    47,    47,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    49,    50,    51,
      52
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     1,     1,     1,     2,     2,     2,
       5,     3,     5,     3,     8,     8,     6,     6,     0,     2,
       1,     1,     1,     1,     1,     1,     0,     2,     2,     4,
       4,     4,     2,     3,     5,     7,    11,     0,     1,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     1,     1,     4,     1,     1,     1,     1,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 4: /* program: statement  */
#line 35 "cucu.y"
                                  {fprintf(yyout,"\n");}
#line 1332 "y.tab.c"
    break;

  case 5: /* program: func_definition  */
#line 36 "cucu.y"
                                        {fprintf(yyout,"\n");}
#line 1338 "y.tab.c"
    break;

  case 6: /* program: func_declaration  */
#line 37 "cucu.y"
                                         {fprintf(yyout,"\n");}
#line 1344 "y.tab.c"
    break;

  case 7: /* program: program func_definition  */
#line 38 "cucu.y"
                                                {fprintf(yyout,"\n");}
#line 1350 "y.tab.c"
    break;

  case 8: /* program: program func_declaration  */
#line 39 "cucu.y"
                                                 {fprintf(yyout,"\n");}
#line 1356 "y.tab.c"
    break;

  case 9: /* program: program statement  */
#line 40 "cucu.y"
                                          {fprintf(yyout,"\n");}
#line 1362 "y.tab.c"
    break;

  case 10: /* var_declaration: INT_DATA id assignment_or_equals arithmetic_expression semicolon  */
#line 43 "cucu.y"
                                                                                         {fprintf(yyout,"Assignment : =\n");}
#line 1368 "y.tab.c"
    break;

  case 12: /* var_declaration: STRING_DATA id assignment_or_equals STRING semicolon  */
#line 45 "cucu.y"
                                                                             {fprintf(yyout,"Assignment : =\n");}
#line 1374 "y.tab.c"
    break;

  case 14: /* func_definition: INT_DATA id open_paranthesis func_args closed_paranthesis open_curly statements closed_curly  */
#line 53 "cucu.y"
                                                                                                                             {fprintf(yyout,"Function declared above\n\n");}
#line 1380 "y.tab.c"
    break;

  case 15: /* func_definition: STRING_DATA id open_paranthesis func_args closed_paranthesis open_curly statements closed_curly  */
#line 54 "cucu.y"
                                                                                                                                {fprintf(yyout,"Function declared above\n\n");}
#line 1386 "y.tab.c"
    break;

  case 16: /* func_declaration: INT_DATA id open_paranthesis func_args closed_paranthesis semicolon  */
#line 57 "cucu.y"
                                                                                                    {fprintf(yyout,"Function declared above\n\n");}
#line 1392 "y.tab.c"
    break;

  case 17: /* func_declaration: STRING_DATA id open_paranthesis func_args closed_paranthesis semicolon  */
#line 58 "cucu.y"
                                                                                                       {fprintf(yyout,"Function declared above\n\n");}
#line 1398 "y.tab.c"
    break;

  case 21: /* statement: func_call_statement  */
#line 65 "cucu.y"
                                                    {fprintf(yyout,"Function call ends \n\n");}
#line 1404 "y.tab.c"
    break;

  case 23: /* statement: if_else  */
#line 67 "cucu.y"
                                        {fprintf(yyout,"If Condition Ends \n\n");}
#line 1410 "y.tab.c"
    break;

  case 24: /* statement: while_statement_statement  */
#line 68 "cucu.y"
                                                          {fprintf(yyout,"While Loop Ends \n\n");}
#line 1416 "y.tab.c"
    break;

  case 25: /* statement: return_statement  */
#line 69 "cucu.y"
                                                 {fprintf(yyout,"Return statement \n\n");}
#line 1422 "y.tab.c"
    break;

  case 27: /* func_args: INT_DATA id  */
#line 73 "cucu.y"
                                            {fprintf(yyout,"Function Arguments Passed Above\n\n");}
#line 1428 "y.tab.c"
    break;

  case 28: /* func_args: STRING_DATA id  */
#line 74 "cucu.y"
                                               {fprintf(yyout,"Function Arguments Passed Above\n\n");}
#line 1434 "y.tab.c"
    break;

  case 40: /* boolean_expression: boolean_expression check_equals arithmetic_expression  */
#line 103 "cucu.y"
                                                                                      {fprintf(yyout,"operation : == \n");}
#line 1440 "y.tab.c"
    break;

  case 41: /* boolean_expression: boolean_expression check_not_equals arithmetic_expression  */
#line 104 "cucu.y"
                                                                                          {fprintf(yyout,"operation : != \n");}
#line 1446 "y.tab.c"
    break;

  case 42: /* boolean_expression: boolean_expression less_than arithmetic_expression  */
#line 105 "cucu.y"
                                                                                   {fprintf(yyout,"operation : < \n");}
#line 1452 "y.tab.c"
    break;

  case 43: /* boolean_expression: boolean_expression greater_than arithmetic_expression  */
#line 106 "cucu.y"
                                                                                      {fprintf(yyout,"operation : > \n");}
#line 1458 "y.tab.c"
    break;

  case 44: /* boolean_expression: boolean_expression less_than_equal arithmetic_expression  */
#line 107 "cucu.y"
                                                                                         {fprintf(yyout,"operation : <= \n");}
#line 1464 "y.tab.c"
    break;

  case 45: /* boolean_expression: boolean_expression greater_than_equal arithmetic_expression  */
#line 108 "cucu.y"
                                                                                            {fprintf(yyout,"operation : >= \n");}
#line 1470 "y.tab.c"
    break;

  case 48: /* arithmetic_expression: arithmetic_expression bitwise_and arithmetic_expression  */
#line 114 "cucu.y"
                                                                                        {fprintf(yyout,"operation : & \n");}
#line 1476 "y.tab.c"
    break;

  case 49: /* arithmetic_expression: arithmetic_expression plus arithmetic_expression  */
#line 115 "cucu.y"
                                                                                 {fprintf(yyout,"operation : + \n");}
#line 1482 "y.tab.c"
    break;

  case 50: /* arithmetic_expression: arithmetic_expression minus arithmetic_expression  */
#line 116 "cucu.y"
                                                                                  {fprintf(yyout,"operation : - \n");}
#line 1488 "y.tab.c"
    break;

  case 51: /* arithmetic_expression: arithmetic_expression multiply arithmetic_expression  */
#line 117 "cucu.y"
                                                                                     {fprintf(yyout,"operation : * \n");}
#line 1494 "y.tab.c"
    break;

  case 52: /* arithmetic_expression: arithmetic_expression divide arithmetic_expression  */
#line 118 "cucu.y"
                                                                                   {fprintf(yyout,"operation : / \n");}
#line 1500 "y.tab.c"
    break;

  case 53: /* arithmetic_expression: integer  */
#line 119 "cucu.y"
                                        {fprintf(yyout,"Integer : %d \n", (yyvsp[0].number));}
#line 1506 "y.tab.c"
    break;

  case 55: /* arithmetic_expression: id open_square boolean_expression closed_square  */
#line 121 "cucu.y"
                                                                                 {fprintf(yyout,"SQUARE BRACKET USED : [] \n");}
#line 1512 "y.tab.c"
    break;

  case 57: /* id: identifier  */
#line 125 "cucu.y"
                                           {fprintf(yyout,"IDENTIFIER : %s \n",(yyvsp[0].str));}
#line 1518 "y.tab.c"
    break;

  case 58: /* STRING: string  */
#line 128 "cucu.y"
                                        {fprintf(yyout,"STRING : %s \n",(yyvsp[0].str));}
#line 1524 "y.tab.c"
    break;

  case 59: /* INT_DATA: int_data  */
#line 131 "cucu.y"
                                         {fprintf(yyout,"datatype : int\n");}
#line 1530 "y.tab.c"
    break;

  case 60: /* STRING_DATA: string_data  */
#line 134 "cucu.y"
                                            {fprintf(yyout,"datatype : char pointer\n");}
#line 1536 "y.tab.c"
    break;


#line 1540 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 136 "cucu.y"



int main()
{
	yyin=fopen("sample1.cu","r");
	//yyin=fopen("sample2.cu","r");
	yyout=fopen("parser.txt","w");
	lexout=fopen("lexer.txt","w");
	yyparse();
	return 0;
}

void yyerror(char const *s)
{
	printf("Syntax Error\n");
}


	
