/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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

#line 134 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
