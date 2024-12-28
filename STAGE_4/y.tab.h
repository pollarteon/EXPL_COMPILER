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
    NUM = 258,                     /* NUM  */
    PLUS = 259,                    /* PLUS  */
    MINUS = 260,                   /* MINUS  */
    MUL = 261,                     /* MUL  */
    DIV = 262,                     /* DIV  */
    MOD = 263,                     /* MOD  */
    END = 264,                     /* END  */
    PBEGIN = 265,                  /* PBEGIN  */
    READ = 266,                    /* READ  */
    WRITE = 267,                   /* WRITE  */
    ID = 268,                      /* ID  */
    IF = 269,                      /* IF  */
    ELSE = 270,                    /* ELSE  */
    THEN = 271,                    /* THEN  */
    ENDIF = 272,                   /* ENDIF  */
    ENDWHILE = 273,                /* ENDWHILE  */
    WHILE = 274,                   /* WHILE  */
    OR = 275,                      /* OR  */
    AND = 276,                     /* AND  */
    LT = 277,                      /* LT  */
    GT = 278,                      /* GT  */
    LTE = 279,                     /* LTE  */
    GTE = 280,                     /* GTE  */
    EQUALS = 281,                  /* EQUALS  */
    NOTEQUALS = 282,               /* NOTEQUALS  */
    DO = 283,                      /* DO  */
    BREAK = 284,                   /* BREAK  */
    CONTINUE = 285,                /* CONTINUE  */
    DECL = 286,                    /* DECL  */
    ENDDECL = 287,                 /* ENDDECL  */
    INT = 288,                     /* INT  */
    STR = 289                      /* STR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NUM 258
#define PLUS 259
#define MINUS 260
#define MUL 261
#define DIV 262
#define MOD 263
#define END 264
#define PBEGIN 265
#define READ 266
#define WRITE 267
#define ID 268
#define IF 269
#define ELSE 270
#define THEN 271
#define ENDIF 272
#define ENDWHILE 273
#define WHILE 274
#define OR 275
#define AND 276
#define LT 277
#define GT 278
#define LTE 279
#define GTE 280
#define EQUALS 281
#define NOTEQUALS 282
#define DO 283
#define BREAK 284
#define CONTINUE 285
#define DECL 286
#define ENDDECL 287
#define INT 288
#define STR 289

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "expl.y"

  struct tnode *no;
  int integer;

#line 140 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
