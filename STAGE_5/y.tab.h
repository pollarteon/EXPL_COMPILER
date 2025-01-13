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
    STRING = 259,                  /* STRING  */
    PLUS = 260,                    /* PLUS  */
    MINUS = 261,                   /* MINUS  */
    MUL = 262,                     /* MUL  */
    DIV = 263,                     /* DIV  */
    MOD = 264,                     /* MOD  */
    END = 265,                     /* END  */
    PBEGIN = 266,                  /* PBEGIN  */
    READ = 267,                    /* READ  */
    WRITE = 268,                   /* WRITE  */
    ID = 269,                      /* ID  */
    IF = 270,                      /* IF  */
    ELSE = 271,                    /* ELSE  */
    THEN = 272,                    /* THEN  */
    ENDIF = 273,                   /* ENDIF  */
    ENDWHILE = 274,                /* ENDWHILE  */
    WHILE = 275,                   /* WHILE  */
    OR = 276,                      /* OR  */
    AND = 277,                     /* AND  */
    LT = 278,                      /* LT  */
    GT = 279,                      /* GT  */
    LTE = 280,                     /* LTE  */
    GTE = 281,                     /* GTE  */
    EQUALS = 282,                  /* EQUALS  */
    NOTEQUALS = 283,               /* NOTEQUALS  */
    DO = 284,                      /* DO  */
    BREAK = 285,                   /* BREAK  */
    CONTINUE = 286,                /* CONTINUE  */
    DECL = 287,                    /* DECL  */
    ENDDECL = 288,                 /* ENDDECL  */
    INT = 289,                     /* INT  */
    STR = 290,                     /* STR  */
    MAIN = 291,                    /* MAIN  */
    RETURN = 292,                  /* RETURN  */
    BREAKPOINT = 293               /* BREAKPOINT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NUM 258
#define STRING 259
#define PLUS 260
#define MINUS 261
#define MUL 262
#define DIV 263
#define MOD 264
#define END 265
#define PBEGIN 266
#define READ 267
#define WRITE 268
#define ID 269
#define IF 270
#define ELSE 271
#define THEN 272
#define ENDIF 273
#define ENDWHILE 274
#define WHILE 275
#define OR 276
#define AND 277
#define LT 278
#define GT 279
#define LTE 280
#define GTE 281
#define EQUALS 282
#define NOTEQUALS 283
#define DO 284
#define BREAK 285
#define CONTINUE 286
#define DECL 287
#define ENDDECL 288
#define INT 289
#define STR 290
#define MAIN 291
#define RETURN 292
#define BREAKPOINT 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "expl.y"

  struct tnode *no;
  struct ParamList* plist;
  struct FuncArgs* arglist;
  int integer;

#line 150 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
