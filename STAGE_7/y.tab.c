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
#line 1 "expl.y"

 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>
 #include "expl.h"
 #include "expl.c"
 #include "code_gen.h"
 #include "code_gen.c"
 int yylex(void);
 extern FILE* yyin;
 void yyerror(const char* s);

#line 84 "y.tab.c"

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
    PLUS = 258,                    /* PLUS  */
    MINUS = 259,                   /* MINUS  */
    MUL = 260,                     /* MUL  */
    DIV = 261,                     /* DIV  */
    MOD = 262,                     /* MOD  */
    PBEGIN = 263,                  /* PBEGIN  */
    READ = 264,                    /* READ  */
    WRITE = 265,                   /* WRITE  */
    IF = 266,                      /* IF  */
    ELSE = 267,                    /* ELSE  */
    THEN = 268,                    /* THEN  */
    ENDIF = 269,                   /* ENDIF  */
    ENDWHILE = 270,                /* ENDWHILE  */
    WHILE = 271,                   /* WHILE  */
    OR = 272,                      /* OR  */
    AND = 273,                     /* AND  */
    LT = 274,                      /* LT  */
    GT = 275,                      /* GT  */
    LTE = 276,                     /* LTE  */
    GTE = 277,                     /* GTE  */
    EQUALS = 278,                  /* EQUALS  */
    NOTEQUALS = 279,               /* NOTEQUALS  */
    DO = 280,                      /* DO  */
    BREAK = 281,                   /* BREAK  */
    CONTINUE = 282,                /* CONTINUE  */
    DECL = 283,                    /* DECL  */
    ENDDECL = 284,                 /* ENDDECL  */
    INT = 285,                     /* INT  */
    STR = 286,                     /* STR  */
    MAIN = 287,                    /* MAIN  */
    RETURN = 288,                  /* RETURN  */
    BREAKPOINT = 289,              /* BREAKPOINT  */
    TYPE = 290,                    /* TYPE  */
    ENDTYPE = 291,                 /* ENDTYPE  */
    ALLOC = 292,                   /* ALLOC  */
    INITIALIZE = 293,              /* INITIALIZE  */
    FREE = 294,                    /* FREE  */
    CLASS = 295,                   /* CLASS  */
    ENDCLASS = 296,                /* ENDCLASS  */
    SELF = 297,                    /* SELF  */
    EXTENDS = 298,                 /* EXTENDS  */
    NEW = 299,                     /* NEW  */
    DELETE = 300,                  /* DELETE  */
    NUM = 301,                     /* NUM  */
    STRING = 302,                  /* STRING  */
    END = 303,                     /* END  */
    ID = 304,                      /* ID  */
    PNULL = 305                    /* PNULL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define PLUS 258
#define MINUS 259
#define MUL 260
#define DIV 261
#define MOD 262
#define PBEGIN 263
#define READ 264
#define WRITE 265
#define IF 266
#define ELSE 267
#define THEN 268
#define ENDIF 269
#define ENDWHILE 270
#define WHILE 271
#define OR 272
#define AND 273
#define LT 274
#define GT 275
#define LTE 276
#define GTE 277
#define EQUALS 278
#define NOTEQUALS 279
#define DO 280
#define BREAK 281
#define CONTINUE 282
#define DECL 283
#define ENDDECL 284
#define INT 285
#define STR 286
#define MAIN 287
#define RETURN 288
#define BREAKPOINT 289
#define TYPE 290
#define ENDTYPE 291
#define ALLOC 292
#define INITIALIZE 293
#define FREE 294
#define CLASS 295
#define ENDCLASS 296
#define SELF 297
#define EXTENDS 298
#define NEW 299
#define DELETE 300
#define NUM 301
#define STRING 302
#define END 303
#define ID 304
#define PNULL 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "expl.y"

  struct tnode *no;
  struct ParamList* plist;
  struct FuncArgs* arglist;
  struct Fieldlist* fieldlist;
  int integer;
  char* string;

#line 246 "y.tab.c"

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
  YYSYMBOL_PLUS = 3,                       /* PLUS  */
  YYSYMBOL_MINUS = 4,                      /* MINUS  */
  YYSYMBOL_MUL = 5,                        /* MUL  */
  YYSYMBOL_DIV = 6,                        /* DIV  */
  YYSYMBOL_MOD = 7,                        /* MOD  */
  YYSYMBOL_PBEGIN = 8,                     /* PBEGIN  */
  YYSYMBOL_READ = 9,                       /* READ  */
  YYSYMBOL_WRITE = 10,                     /* WRITE  */
  YYSYMBOL_IF = 11,                        /* IF  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_THEN = 13,                      /* THEN  */
  YYSYMBOL_ENDIF = 14,                     /* ENDIF  */
  YYSYMBOL_ENDWHILE = 15,                  /* ENDWHILE  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_OR = 17,                        /* OR  */
  YYSYMBOL_AND = 18,                       /* AND  */
  YYSYMBOL_LT = 19,                        /* LT  */
  YYSYMBOL_GT = 20,                        /* GT  */
  YYSYMBOL_LTE = 21,                       /* LTE  */
  YYSYMBOL_GTE = 22,                       /* GTE  */
  YYSYMBOL_EQUALS = 23,                    /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 24,                 /* NOTEQUALS  */
  YYSYMBOL_DO = 25,                        /* DO  */
  YYSYMBOL_BREAK = 26,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 27,                  /* CONTINUE  */
  YYSYMBOL_DECL = 28,                      /* DECL  */
  YYSYMBOL_ENDDECL = 29,                   /* ENDDECL  */
  YYSYMBOL_INT = 30,                       /* INT  */
  YYSYMBOL_STR = 31,                       /* STR  */
  YYSYMBOL_MAIN = 32,                      /* MAIN  */
  YYSYMBOL_RETURN = 33,                    /* RETURN  */
  YYSYMBOL_BREAKPOINT = 34,                /* BREAKPOINT  */
  YYSYMBOL_TYPE = 35,                      /* TYPE  */
  YYSYMBOL_ENDTYPE = 36,                   /* ENDTYPE  */
  YYSYMBOL_ALLOC = 37,                     /* ALLOC  */
  YYSYMBOL_INITIALIZE = 38,                /* INITIALIZE  */
  YYSYMBOL_FREE = 39,                      /* FREE  */
  YYSYMBOL_CLASS = 40,                     /* CLASS  */
  YYSYMBOL_ENDCLASS = 41,                  /* ENDCLASS  */
  YYSYMBOL_SELF = 42,                      /* SELF  */
  YYSYMBOL_EXTENDS = 43,                   /* EXTENDS  */
  YYSYMBOL_NEW = 44,                       /* NEW  */
  YYSYMBOL_DELETE = 45,                    /* DELETE  */
  YYSYMBOL_NUM = 46,                       /* NUM  */
  YYSYMBOL_STRING = 47,                    /* STRING  */
  YYSYMBOL_END = 48,                       /* END  */
  YYSYMBOL_ID = 49,                        /* ID  */
  YYSYMBOL_PNULL = 50,                     /* PNULL  */
  YYSYMBOL_51_ = 51,                       /* '{'  */
  YYSYMBOL_52_ = 52,                       /* '}'  */
  YYSYMBOL_53_ = 53,                       /* ';'  */
  YYSYMBOL_54_ = 54,                       /* '('  */
  YYSYMBOL_55_ = 55,                       /* ')'  */
  YYSYMBOL_56_ = 56,                       /* ','  */
  YYSYMBOL_57_ = 57,                       /* '['  */
  YYSYMBOL_58_ = 58,                       /* ']'  */
  YYSYMBOL_59_ = 59,                       /* '='  */
  YYSYMBOL_60_ = 60,                       /* '&'  */
  YYSYMBOL_61_ = 61,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 62,                  /* $accept  */
  YYSYMBOL_program = 63,                   /* program  */
  YYSYMBOL_TypeDefBlock = 64,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 65,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 66,                   /* TypeDef  */
  YYSYMBOL_FieldDeclList = 67,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 68,                 /* FieldDecl  */
  YYSYMBOL_TypeName = 69,                  /* TypeName  */
  YYSYMBOL_ClassDefBlock = 70,             /* ClassDefBlock  */
  YYSYMBOL_ClassDefList = 71,              /* ClassDefList  */
  YYSYMBOL_Classdef = 72,                  /* Classdef  */
  YYSYMBOL_Cname = 73,                     /* Cname  */
  YYSYMBOL_CFieldlists = 74,               /* CFieldlists  */
  YYSYMBOL_Cfield = 75,                    /* Cfield  */
  YYSYMBOL_MethodDecl = 76,                /* MethodDecl  */
  YYSYMBOL_Mdecl = 77,                     /* Mdecl  */
  YYSYMBOL_MethodDefns = 78,               /* MethodDefns  */
  YYSYMBOL_GDeclBlock = 79,                /* GDeclBlock  */
  YYSYMBOL_GdeclList = 80,                 /* GdeclList  */
  YYSYMBOL_Gdecl = 81,                     /* Gdecl  */
  YYSYMBOL_GidList = 82,                   /* GidList  */
  YYSYMBOL_Gid = 83,                       /* Gid  */
  YYSYMBOL_FdefBlock = 84,                 /* FdefBlock  */
  YYSYMBOL_Fdef = 85,                      /* Fdef  */
  YYSYMBOL_ParamList = 86,                 /* ParamList  */
  YYSYMBOL_Param = 87,                     /* Param  */
  YYSYMBOL_MainBlock = 88,                 /* MainBlock  */
  YYSYMBOL_LdeclBlock = 89,                /* LdeclBlock  */
  YYSYMBOL_LdecList = 90,                  /* LdecList  */
  YYSYMBOL_Ldecl = 91,                     /* Ldecl  */
  YYSYMBOL_IdList = 92,                    /* IdList  */
  YYSYMBOL_Lid = 93,                       /* Lid  */
  YYSYMBOL_Body = 94,                      /* Body  */
  YYSYMBOL_Type = 95,                      /* Type  */
  YYSYMBOL_Slist = 96,                     /* Slist  */
  YYSYMBOL_Stmt = 97,                      /* Stmt  */
  YYSYMBOL_InputStmt = 98,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 99,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 100,                  /* AsgStmt  */
  YYSYMBOL_BreakStmt = 101,                /* BreakStmt  */
  YYSYMBOL_BreakpointStmt = 102,           /* BreakpointStmt  */
  YYSYMBOL_ContinueStmt = 103,             /* ContinueStmt  */
  YYSYMBOL_Ifstmt = 104,                   /* Ifstmt  */
  YYSYMBOL_WhileStmt = 105,                /* WhileStmt  */
  YYSYMBOL_DoWhileStmt = 106,              /* DoWhileStmt  */
  YYSYMBOL_ReturnStmt = 107,               /* ReturnStmt  */
  YYSYMBOL_initializeStmt = 108,           /* initializeStmt  */
  YYSYMBOL_AllocStmt = 109,                /* AllocStmt  */
  YYSYMBOL_FreeStmt = 110,                 /* FreeStmt  */
  YYSYMBOL_NewStmt = 111,                  /* NewStmt  */
  YYSYMBOL_expr = 112,                     /* expr  */
  YYSYMBOL_ArgList = 113,                  /* ArgList  */
  YYSYMBOL_Identifier = 114,               /* Identifier  */
  YYSYMBOL_Field = 115,                    /* Field  */
  YYSYMBOL_FieldFunction = 116,            /* FieldFunction  */
  YYSYMBOL_index = 117                     /* index  */
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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   540

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  304

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


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
       2,     2,     2,     2,     2,     2,     2,     2,    60,     2,
      54,    55,     2,     2,    56,     2,    61,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    53,
       2,    59,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    57,     2,    58,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,    52,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    50,    50,    51,    52,    58,    59,    62,    63,    66,
      99,   100,   103,   115,   116,   117,   123,   124,   127,   128,
     131,   158,   165,   166,   168,   177,   178,   181,   184,   187,
     191,   197,   198,   200,   200,   202,   235,   243,   245,   249,
     253,   257,   261,   265,   274,   274,   276,   348,   408,   411,
     415,   420,   441,   468,   469,   470,   472,   472,   474,   510,
     518,   520,   523,   529,   530,   532,   533,   534,   543,   546,
     549,   550,   551,   552,   553,   554,   555,   556,   557,   558,
     559,   560,   561,   562,   569,   574,   576,   581,   583,   585,
     587,   592,   595,   597,   599,   601,   603,   605,   608,   622,
     623,   624,   625,   626,   627,   628,   629,   630,   631,   632,
     633,   634,   635,   654,   655,   656,   657,   658,   659,   664,
     667,   670,   672,   686,   698,   710,   732,   755,   762,   771,
     785,   795,   807,   821,   840,   856
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
  "\"end of file\"", "error", "\"invalid token\"", "PLUS", "MINUS", "MUL",
  "DIV", "MOD", "PBEGIN", "READ", "WRITE", "IF", "ELSE", "THEN", "ENDIF",
  "ENDWHILE", "WHILE", "OR", "AND", "LT", "GT", "LTE", "GTE", "EQUALS",
  "NOTEQUALS", "DO", "BREAK", "CONTINUE", "DECL", "ENDDECL", "INT", "STR",
  "MAIN", "RETURN", "BREAKPOINT", "TYPE", "ENDTYPE", "ALLOC", "INITIALIZE",
  "FREE", "CLASS", "ENDCLASS", "SELF", "EXTENDS", "NEW", "DELETE", "NUM",
  "STRING", "END", "ID", "PNULL", "'{'", "'}'", "';'", "'('", "')'", "','",
  "'['", "']'", "'='", "'&'", "'.'", "$accept", "program", "TypeDefBlock",
  "TypeDefList", "TypeDef", "FieldDeclList", "FieldDecl", "TypeName",
  "ClassDefBlock", "ClassDefList", "Classdef", "Cname", "CFieldlists",
  "Cfield", "MethodDecl", "Mdecl", "MethodDefns", "GDeclBlock",
  "GdeclList", "Gdecl", "GidList", "Gid", "FdefBlock", "Fdef", "ParamList",
  "Param", "MainBlock", "LdeclBlock", "LdecList", "Ldecl", "IdList", "Lid",
  "Body", "Type", "Slist", "Stmt", "InputStmt", "OutputStmt", "AsgStmt",
  "BreakStmt", "BreakpointStmt", "ContinueStmt", "Ifstmt", "WhileStmt",
  "DoWhileStmt", "ReturnStmt", "initializeStmt", "AllocStmt", "FreeStmt",
  "NewStmt", "expr", "ArgList", "Identifier", "Field", "FieldFunction",
  "index", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-166)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -14,   -16,   162,    69,   116,    17,  -166,  -166,   127,    65,
      -6,  -166,  -166,  -166,   -23,  -166,   131,   149,   159,    59,
    -166,  -166,  -166,  -166,    39,  -166,   160,  -166,  -166,   182,
    -166,  -166,  -166,  -166,   177,  -166,     9,   167,   159,    59,
    -166,  -166,   169,  -166,  -166,   163,    -6,  -166,  -166,   173,
      23,    44,  -166,   176,  -166,  -166,   174,  -166,   183,    -6,
    -166,  -166,    52,   191,  -166,     9,   193,    55,   189,   196,
    -166,   217,    -6,  -166,    72,  -166,    11,   192,  -166,   221,
     200,    76,  -166,    87,    81,   203,  -166,  -166,    81,   208,
    -166,   201,   184,   254,   221,   216,   108,   213,    81,   236,
    -166,  -166,   222,  -166,   205,  -166,    18,   286,   241,   254,
     221,   245,   100,  -166,   242,  -166,  -166,   252,  -166,    73,
    -166,   255,   240,   249,   251,   253,   286,   256,   261,   316,
     262,   263,   247,   -42,     5,   286,  -166,  -166,  -166,  -166,
    -166,  -166,  -166,  -166,  -166,  -166,   258,  -166,  -166,  -166,
    -166,   257,   265,  -166,   270,   254,  -166,   271,  -166,  -166,
    -166,    18,  -166,     5,   316,   316,   316,   322,  -166,  -166,
    -166,   268,  -166,  -166,    42,  -166,   316,   449,  -166,   269,
    -166,  -166,     5,   274,   316,   285,  -166,  -166,   288,  -166,
       2,   290,  -166,   289,  -166,  -166,   282,   130,   374,   382,
     264,   291,   316,   293,   404,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,  -166,   294,
     295,  -166,   494,   287,  -166,  -166,   297,   298,   299,   457,
    -166,  -166,   301,   304,   331,   334,   316,   306,   494,   109,
     313,  -166,   164,   164,  -166,  -166,  -166,   485,   516,   275,
     275,   275,   275,   266,   266,   314,   319,   -19,   318,   320,
      81,  -166,  -166,  -166,   286,   286,   427,   316,  -166,   316,
     316,   316,  -166,   316,   325,   330,   337,   329,   178,   214,
     -12,   141,   494,   144,   146,   311,  -166,  -166,  -166,   359,
     286,   360,   361,  -166,  -166,  -166,  -166,  -166,  -166,   250,
    -166,  -166,   362,  -166
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     0,    17,     0,     0,     8,     1,     0,     0,
       0,     5,     7,    21,     0,    19,     0,     0,     0,     0,
       4,    13,    14,    15,     0,    11,     0,    16,    18,     0,
      32,    65,    66,    67,     0,    34,     0,     0,    65,     0,
      45,     3,     0,     9,    10,     0,     0,    31,    33,     0,
      38,     0,    37,     0,    44,     2,     0,    12,     0,    26,
      23,    41,     0,     0,    35,     0,     0,     0,     0,     0,
      22,     0,    26,    43,     0,    49,     0,     0,    36,    55,
       0,     0,    24,     0,    30,     0,    25,    42,     0,     0,
      50,    39,     0,     0,    55,     0,     0,     0,    29,     0,
      48,    51,     0,    54,     0,    57,     0,     0,     0,     0,
      55,     0,     0,    20,     0,    53,    56,     0,    61,     0,
      60,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,     0,     0,    69,    70,    71,    72,
      76,    79,    77,    73,    74,    75,    78,    80,    81,    82,
      83,     0,   127,    52,     0,     0,    28,     0,    40,    62,
      58,     0,   125,     0,     0,     0,     0,     0,    78,    87,
      89,     0,   114,   115,   122,   117,     0,     0,   116,   127,
     118,    88,     0,     0,     0,     0,   126,    68,    78,    64,
       0,     0,    47,     0,    27,    59,     0,     0,     0,     0,
       0,     0,   121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,   131,   135,     0,   130,    63,     0,     0,     0,     0,
     128,    46,     0,     0,     0,     0,     0,   131,   120,     0,
     130,   113,    99,   100,   101,   102,   103,   111,   110,   104,
     106,   105,   107,   108,   109,   128,     0,   123,     0,     0,
       0,    86,    84,    85,     0,     0,     0,   121,   112,     0,
     121,   121,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,     0,     0,     0,   129,    96,    95,     0,
       0,     0,     0,    93,   133,   132,   134,   124,    98,     0,
      91,    92,     0,    90
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -166,  -166,  -166,  -166,   411,  -166,   393,    22,  -166,  -166,
     405,  -166,  -166,   376,   346,  -166,  -166,  -166,  -166,   386,
    -166,   371,   354,   -34,   -61,   351,    -7,   -83,  -166,   336,
    -166,   280,  -100,   -17,  -122,  -133,  -166,  -166,  -166,  -166,
    -166,  -166,  -166,  -166,  -166,   -99,  -166,  -166,  -166,  -166,
     -92,  -165,  -106,  -104,  -166,   170
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     5,     6,    24,    25,    26,     9,    14,
      15,    16,    59,    60,    71,    72,    97,    19,    34,    35,
      51,    52,    39,    40,    74,    75,    20,    93,   104,   105,
     119,   120,   108,    42,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   168,   147,   148,   149,   150,
     238,   239,   178,   179,   180,   223
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,   151,   187,   152,   167,    54,    81,   121,   146,   154,
     121,   109,    41,   265,    49,   184,    89,    36,    27,   185,
     151,     1,   152,   117,    21,    22,    13,   155,   186,   151,
     152,   152,    55,     4,   187,   112,   188,   177,   273,   226,
     227,   293,   274,    23,   171,    76,   228,   132,   172,   173,
      76,   174,   175,    11,   133,   193,   176,   196,    50,   152,
      90,   151,   134,   152,    54,   134,     4,   118,    58,    21,
      22,    76,   197,   198,   199,   106,   220,    62,   152,    76,
      63,    69,    31,    32,   204,    31,    32,   106,    23,    38,
      32,    43,   222,    17,    85,    18,   202,    64,   229,   184,
      65,    33,   281,   203,    33,   283,   284,    73,    33,     8,
      80,    31,    32,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   160,    87,    88,   161,
      33,    95,    88,   205,   206,   207,   208,   209,    31,    32,
      82,    96,   278,   279,   266,   187,   187,   210,   211,   212,
     213,   214,   215,   216,   217,   157,    88,    33,   151,   151,
     152,   152,     7,   111,   268,   269,   187,    10,   299,   207,
     208,   209,   151,   151,   152,   152,    13,   282,    30,    31,
      32,   222,    29,   121,   151,   233,   152,   122,   123,   124,
     290,    37,   291,   151,   125,   152,   294,   269,    33,   295,
     269,   296,   269,   126,   127,   128,    47,    31,    32,    45,
      46,   129,   130,   103,    31,    32,    57,   131,    56,   121,
     132,    53,    61,   122,   123,   124,    33,   133,    67,   292,
     125,    66,    68,    33,   115,    31,    32,    77,   134,   126,
     127,   128,    82,   277,    79,    83,    84,   129,   130,    92,
      91,    94,    99,   131,    33,   121,   132,   101,   102,   122,
     123,   124,   107,   133,   302,   113,   125,   110,   114,   205,
     206,   207,   208,   209,   134,   126,   127,   128,   205,   206,
     207,   208,   209,   129,   130,   212,   213,   214,   215,   131,
      96,   121,   132,   153,   163,   122,   123,   124,   156,   133,
     158,   159,   125,   164,   162,   165,   189,   166,   183,   169,
     134,   126,   127,   128,   170,   181,   190,   182,   236,   129,
     130,   121,   192,   221,   194,   131,   191,   121,   132,   201,
     219,   122,   123,   124,   224,   133,   225,   232,   200,   230,
     237,   231,   240,   255,   264,   257,   134,   126,   127,   128,
     256,   258,   259,   260,   262,   129,   130,   263,   171,   265,
     267,   131,   172,   173,   132,   174,   175,   270,   271,   297,
     176,   133,   272,   275,   286,   276,   134,   205,   206,   207,
     208,   209,   134,   287,   289,   205,   206,   207,   208,   209,
     288,   210,   211,   212,   213,   214,   215,   216,   217,   210,
     211,   212,   213,   214,   215,   216,   217,   205,   206,   207,
     208,   209,   298,   300,   301,   303,    12,    44,    86,    28,
      48,   210,   211,   212,   213,   214,   215,   216,   217,   234,
     205,   206,   207,   208,   209,    70,    78,   235,    98,   100,
     116,   195,     0,   285,   210,   211,   212,   213,   214,   215,
     216,   217,   205,   206,   207,   208,   209,     0,     0,   241,
     205,   206,   207,   208,   209,     0,   210,   211,   212,   213,
     214,   215,   216,   217,   210,   211,   212,   213,   214,   215,
     216,   217,   280,     0,     0,     0,     0,     0,   205,   206,
     207,   208,   209,     0,     0,     0,     0,   205,   206,   207,
     208,   209,   218,   211,   212,   213,   214,   215,   216,   217,
     261,   210,   211,   212,   213,   214,   215,   216,   217,   205,
     206,   207,   208,   209,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   212,   213,   214,   215,   216,
     217
};

static const yytype_int16 yycheck[] =
{
      17,   107,   135,   107,   126,    39,    67,     5,   107,   109,
       5,    94,    19,    25,     5,    57,     5,    34,    41,    61,
     126,    35,   126,     5,    30,    31,    49,   110,   134,   135,
     134,   135,    39,    49,   167,    96,   135,   129,    57,    37,
      38,    53,    61,    49,    42,    62,    44,    42,    46,    47,
      67,    49,    50,    36,    49,   155,    54,   163,    49,   163,
      49,   167,    60,   167,    98,    60,    49,    49,    46,    30,
      31,    88,   164,   165,   166,    92,   182,    54,   182,    96,
      57,    59,    30,    31,   176,    30,    31,   104,    49,    30,
      31,    52,   184,    28,    72,    30,    54,    53,   190,    57,
      56,    49,   267,    61,    49,   270,   271,    55,    49,    40,
      55,    30,    31,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,    53,    55,    56,    56,
      49,    55,    56,     3,     4,     5,     6,     7,    30,    31,
      53,    54,   264,   265,   236,   278,   279,    17,    18,    19,
      20,    21,    22,    23,    24,    55,    56,    49,   264,   265,
     264,   265,     0,    55,    55,    56,   299,    51,   290,     5,
       6,     7,   278,   279,   278,   279,    49,   269,    29,    30,
      31,   273,    51,     5,   290,    55,   290,     9,    10,    11,
      12,    32,    14,   299,    16,   299,    55,    56,    49,    55,
      56,    55,    56,    25,    26,    27,    29,    30,    31,    49,
      28,    33,    34,    29,    30,    31,    53,    39,    49,     5,
      42,    54,    49,     9,    10,    11,    49,    49,    54,    15,
      16,    55,    49,    49,    29,    30,    31,    46,    60,    25,
      26,    27,    53,   260,    51,    49,    29,    33,    34,    28,
      58,    51,    49,    39,    49,     5,    42,    49,    57,     9,
      10,    11,     8,    49,    14,    52,    16,    51,    46,     3,
       4,     5,     6,     7,    60,    25,    26,    27,     3,     4,
       5,     6,     7,    33,    34,    19,    20,    21,    22,    39,
      54,     5,    42,    52,    54,     9,    10,    11,    53,    49,
      58,    49,    16,    54,    49,    54,    48,    54,    61,    53,
      60,    25,    26,    27,    53,    53,    59,    54,    54,    33,
      34,     5,    52,    49,    53,    39,    61,     5,    42,    61,
      61,     9,    10,    11,    49,    49,    48,    55,    16,    49,
      49,    52,    49,    49,    13,    58,    60,    25,    26,    27,
      55,    54,    54,    54,    53,    33,    34,    53,    42,    25,
      54,    39,    46,    47,    42,    49,    50,    54,    54,    58,
      54,    49,    53,    55,    49,    55,    60,     3,     4,     5,
       6,     7,    60,    53,    55,     3,     4,     5,     6,     7,
      53,    17,    18,    19,    20,    21,    22,    23,    24,    17,
      18,    19,    20,    21,    22,    23,    24,     3,     4,     5,
       6,     7,    53,    53,    53,    53,     5,    24,    72,    14,
      34,    17,    18,    19,    20,    21,    22,    23,    24,    55,
       3,     4,     5,     6,     7,    59,    65,    55,    84,    88,
     104,   161,    -1,   273,    17,    18,    19,    20,    21,    22,
      23,    24,     3,     4,     5,     6,     7,    -1,    -1,    55,
       3,     4,     5,     6,     7,    -1,    17,    18,    19,    20,
      21,    22,    23,    24,    17,    18,    19,    20,    21,    22,
      23,    24,    55,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    53,    18,    19,    20,    21,    22,    23,    24,
      53,    17,    18,    19,    20,    21,    22,    23,    24,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      24
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    35,    63,    64,    49,    65,    66,     0,    40,    70,
      51,    36,    66,    49,    71,    72,    73,    28,    30,    79,
      88,    30,    31,    49,    67,    68,    69,    41,    72,    51,
      29,    30,    31,    49,    80,    81,    95,    32,    30,    84,
      85,    88,    95,    52,    68,    49,    28,    29,    81,     5,
      49,    82,    83,    54,    85,    88,    49,    53,    69,    74,
      75,    49,    54,    57,    53,    56,    55,    54,    49,    69,
      75,    76,    77,    55,    86,    87,    95,    46,    83,    51,
      55,    86,    53,    49,    29,    69,    76,    55,    56,     5,
      49,    58,    28,    89,    51,    55,    54,    78,    84,    49,
      87,    49,    57,    29,    90,    91,    95,     8,    94,    89,
      51,    55,    86,    52,    46,    29,    91,     5,    49,    92,
      93,     5,     9,    10,    11,    16,    25,    26,    27,    33,
      34,    39,    42,    49,    60,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   114,   115,    52,    94,    89,    53,    55,    58,    49,
      53,    56,    49,    54,    54,    54,    54,    96,   107,    53,
      53,    42,    46,    47,    49,    50,    54,   112,   114,   115,
     116,    53,    54,    61,    57,    61,   114,    97,   107,    48,
      59,    61,    52,    94,    53,    93,   114,   112,   112,   112,
      16,    61,    54,    61,   112,     3,     4,     5,     6,     7,
      17,    18,    19,    20,    21,    22,    23,    24,    53,    61,
     114,    49,   112,   117,    49,    48,    37,    38,    44,   112,
      49,    52,    55,    55,    55,    55,    54,    49,   112,   113,
      49,    55,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,    49,    55,    58,    54,    54,
      54,    53,    53,    53,    13,    25,   112,    54,    55,    56,
      54,    54,    53,    57,    61,    55,    55,    95,    96,    96,
      55,   113,   112,   113,   113,   117,    49,    53,    53,    55,
      12,    14,    15,    53,    55,    55,    55,    58,    53,    96,
      53,    53,    14,    53
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    63,    63,    64,    64,    65,    65,    66,
      67,    67,    68,    69,    69,    69,    70,    70,    71,    71,
      72,    73,    74,    74,    75,    76,    76,    77,    77,    78,
      78,    79,    79,    80,    80,    81,    82,    82,    83,    83,
      83,    83,    83,    83,    84,    84,    85,    85,    86,    86,
      87,    87,    88,    89,    89,    89,    90,    90,    91,    92,
      92,    93,    93,    94,    94,    95,    95,    95,    96,    96,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    98,    99,   100,   101,   102,   103,
     104,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   113,
     113,   113,   114,   114,   114,   114,   114,   114,   115,   115,
     115,   115,   116,   116,   116,   117
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     4,     3,     3,     0,     2,     1,     4,
       2,     1,     3,     1,     1,     1,     3,     0,     2,     1,
       8,     1,     2,     1,     3,     2,     0,     6,     5,     1,
       0,     3,     2,     2,     1,     3,     3,     1,     1,     4,
       7,     2,     4,     3,     2,     1,     9,     8,     3,     1,
       2,     3,     8,     3,     2,     0,     2,     1,     3,     3,
       1,     1,     2,     4,     3,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     5,     4,     2,     2,     2,
      10,     8,     8,     7,     3,     6,     6,     5,     7,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     4,     3,     1,     1,     1,     1,     1,     3,
       1,     0,     1,     4,     7,     2,     2,     1,     3,     6,
       3,     3,     6,     6,     6,     1
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
  case 2: /* program: TypeDefBlock ClassDefBlock GDeclBlock FdefBlock MainBlock  */
#line 50 "expl.y"
                                                                  {printf("Program Finished\n");exit(1);}
#line 1596 "y.tab.c"
    break;

  case 3: /* program: TypeDefBlock ClassDefBlock GDeclBlock MainBlock  */
#line 51 "expl.y"
                                                    {printf("Program Finished\n");exit(1);}
#line 1602 "y.tab.c"
    break;

  case 4: /* program: TypeDefBlock ClassDefBlock MainBlock  */
#line 52 "expl.y"
                                        {printf("Program Finished\n");exit(1);}
#line 1608 "y.tab.c"
    break;

  case 5: /* TypeDefBlock: TYPE TypeDefList ENDTYPE  */
#line 58 "expl.y"
                                        {PrintTypeTable();}
#line 1614 "y.tab.c"
    break;

  case 7: /* TypeDefList: TypeDefList TypeDef  */
#line 62 "expl.y"
                                  {}
#line 1620 "y.tab.c"
    break;

  case 8: /* TypeDefList: TypeDef  */
#line 63 "expl.y"
            {}
#line 1626 "y.tab.c"
    break;

  case 9: /* TypeDef: ID '{' FieldDeclList '}'  */
#line 66 "expl.y"
                                   {
  char* type_name = (yyvsp[-3].no)->varname;
  Tinstall(type_name,0,(yyvsp[-1].fieldlist));
  struct Typetable* declared_type = TLookup(type_name);
  struct Fieldlist* fields = (declared_type)->fields;
  struct Fieldlist* temp = fields;
  int fieldIndex = 0;
  int total_size =0;
  while(temp!=NULL){
    if(fieldIndex>7){
      printf("ERROR: no more than 8 member fields for a user-defined type is allowed %s \n",type_name);
      return -1;
    }
    temp->fieldIndex = fieldIndex++;
    if(temp->type->size==-1){
     if(strcmp(temp->type->name,type_name)==0){
        free(temp->type->name); //freeing the temporoary type and making 
        free(temp->type); //temp->type point to the type table entry
        temp->type = declared_type;
     }
     else{
      printf("ERROR: type not defined earlier %s",temp->name);
      return -1;
     }
    }
    total_size += GetSize(temp->type);
    temp=temp->next;
  }
  declared_type->size = total_size;
  PrintFieldlist(fields);

}
#line 1663 "y.tab.c"
    break;

  case 10: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 99 "expl.y"
                                        {(yyval.fieldlist) =Finstall((yyvsp[-1].fieldlist),(yyvsp[0].fieldlist));}
#line 1669 "y.tab.c"
    break;

  case 11: /* FieldDeclList: FieldDecl  */
#line 100 "expl.y"
              {(yyval.fieldlist)=(yyvsp[0].fieldlist);}
#line 1675 "y.tab.c"
    break;

  case 12: /* FieldDecl: TypeName ID ';'  */
#line 103 "expl.y"
                            {
  struct Typetable* type = TLookup((yyvsp[-2].string));
  if(type==NULL){
    type = (struct Typetable*)malloc(sizeof(struct Typetable));
    type->name = strdup((yyvsp[-2].string));
    type->size = -1; //to  indicate that the type was not present in the type table
    type->fields=NULL;
    type->next=NULL;
  }
  (yyval.fieldlist) = Fcreate((yyvsp[-1].no)->varname,0,type,NULL);
}
#line 1691 "y.tab.c"
    break;

  case 13: /* TypeName: INT  */
#line 115 "expl.y"
               {(yyval.string)="int";}
#line 1697 "y.tab.c"
    break;

  case 14: /* TypeName: STR  */
#line 116 "expl.y"
        {(yyval.string)="str";}
#line 1703 "y.tab.c"
    break;

  case 15: /* TypeName: ID  */
#line 117 "expl.y"
       {(yyval.string)=(yyvsp[0].no)->varname;}
#line 1709 "y.tab.c"
    break;

  case 16: /* ClassDefBlock: CLASS ClassDefList ENDCLASS  */
#line 123 "expl.y"
                                            {Print_Classtable();}
#line 1715 "y.tab.c"
    break;

  case 17: /* ClassDefBlock: %empty  */
#line 124 "expl.y"
  {}
#line 1721 "y.tab.c"
    break;

  case 18: /* ClassDefList: ClassDefList Classdef  */
#line 127 "expl.y"
                                     {}
#line 1727 "y.tab.c"
    break;

  case 19: /* ClassDefList: Classdef  */
#line 128 "expl.y"
           {}
#line 1733 "y.tab.c"
    break;

  case 20: /* Classdef: Cname '{' DECL CFieldlists MethodDecl ENDDECL MethodDefns '}'  */
#line 131 "expl.y"
                                                                         {
    struct Classtable* class = Clookup((yyvsp[-7].string));

    if(TLookup((yyvsp[-7].string))){
      printf("ERROR:class and userdefined type must not have the same name: %s\n",(yyvsp[-7].string));
      return -1;
    }
    class->memberField = cptr->memberField;
    struct Fieldlist* field_traverser = class->memberField;
    int field_index =0;
    while(field_traverser!=NULL){
     
      if(field_index>7){
        printf("ERROR: not more than 8 member Fields allowed for a Class %s\n",(yyvsp[-7].string));
        return -1;
      }
      field_traverser->fieldIndex = field_index++;
      field_traverser=field_traverser->next;
    }
    class->field_count = field_index;
    PrintFieldlist(class->memberField);
    // Print_VirtFuncTable(cptr);
    cptr=NULL;
    
  }
#line 1763 "y.tab.c"
    break;

  case 21: /* Cname: ID  */
#line 158 "expl.y"
           {
    cptr =CInstall((yyvsp[0].no)->varname,NULL);
    (yyval.string)=(yyvsp[0].no)->varname;
  }
#line 1772 "y.tab.c"
    break;

  case 22: /* CFieldlists: CFieldlists Cfield  */
#line 165 "expl.y"
                                 {Class_Finstall(cptr,(yyvsp[0].fieldlist));}
#line 1778 "y.tab.c"
    break;

  case 23: /* CFieldlists: Cfield  */
#line 166 "expl.y"
         {Class_Finstall(cptr,(yyvsp[0].fieldlist));}
#line 1784 "y.tab.c"
    break;

  case 24: /* Cfield: TypeName ID ';'  */
#line 168 "expl.y"
                         {
  struct Typetable* type = TLookup((yyvsp[-2].string));
  struct Classtable* class = Clookup((yyvsp[-2].string));
  if(type==NULL && class==NULL){
    printf("ERROR: Type/Class is undefined %s\n",(yyvsp[-2].string));
  }
  (yyval.fieldlist) = Fcreate((yyvsp[-1].no)->varname,0,type,class);
}
#line 1797 "y.tab.c"
    break;

  case 25: /* MethodDecl: Mdecl MethodDecl  */
#line 177 "expl.y"
                              {L_cleanup();local_binding=1;param_binding=1;}
#line 1803 "y.tab.c"
    break;

  case 26: /* MethodDecl: %empty  */
#line 178 "expl.y"
  {}
#line 1809 "y.tab.c"
    break;

  case 27: /* Mdecl: TypeName ID '(' ParamList ')' ';'  */
#line 181 "expl.y"
                                         {
  Class_Minstall(cptr,(yyvsp[-4].no)->varname,TLookup((yyvsp[-5].string)),(yyvsp[-2].plist));
}
#line 1817 "y.tab.c"
    break;

  case 28: /* Mdecl: TypeName ID '(' ')' ';'  */
#line 184 "expl.y"
                          {
  Class_Minstall(cptr,(yyvsp[-3].no)->varname,TLookup((yyvsp[-4].string)),NULL);
}
#line 1825 "y.tab.c"
    break;

  case 29: /* MethodDefns: FdefBlock  */
#line 187 "expl.y"
                        {
    Print_Classtable();
    PrintFieldlist(cptr->memberField);
  }
#line 1834 "y.tab.c"
    break;

  case 30: /* MethodDefns: %empty  */
#line 191 "expl.y"
  {}
#line 1840 "y.tab.c"
    break;

  case 31: /* GDeclBlock: DECL GdeclList ENDDECL  */
#line 197 "expl.y"
                                    {print_GSymbolTable();L_cleanup();local_binding=1;param_binding=1;}
#line 1846 "y.tab.c"
    break;

  case 32: /* GDeclBlock: DECL ENDDECL  */
#line 198 "expl.y"
               {}
#line 1852 "y.tab.c"
    break;

  case 33: /* GdeclList: GdeclList Gdecl  */
#line 200 "expl.y"
                            {}
#line 1858 "y.tab.c"
    break;

  case 34: /* GdeclList: Gdecl  */
#line 200 "expl.y"
                                       {}
#line 1864 "y.tab.c"
    break;

  case 35: /* Gdecl: Type GidList ';'  */
#line 202 "expl.y"
                         {
  char* declaration_type = (yyvsp[-2].string);
  struct Typetable* declaration_type_entry = TLookup(declaration_type);
  struct Classtable* class_table_entry = Clookup(declaration_type);
  struct tnode* varList = (yyvsp[-1].no); //varList contains List of variables
  
  int isClassType =0;//to check whether the global declaration was a class or user defined type
  if(declaration_type_entry==NULL)isClassType=1;
  
  while(varList!=NULL){
    struct Gsymbol* Gentry = GLookUp(varList->varname);
    if(isClassType && Gentry->flabel!=-1){
      printf("ERROR:function return type cannot be a Class: %s\n",varList->varname);
      return -1;
    }
    if( (Gentry->type!=NULL) && strcmp(Gentry->type->name,"pointer")==0){ //if variable inserted as a pointer type
      if(strcmp(declaration_type,"int")==0){
        Gentry->type = TLookup("pointer(int)");
      }
      else if(strcmp(declaration_type,"str")==0){
        Gentry->type =TLookup("pointer(str)");
      }
      else{
        printf("ERROR: pointers are not reserved for user-defined type: %s\n",declaration_type);
        return -1;
      }
    }
    Gentry->type = declaration_type_entry;
    Gentry->Ctype = class_table_entry;
    varList=varList->right;
  }
}
#line 1901 "y.tab.c"
    break;

  case 36: /* GidList: GidList ',' Gid  */
#line 235 "expl.y"
                          {
  struct tnode* IDNode = (yyvsp[0].no);
  struct tnode* temp = (yyvsp[-2].no);
  while (temp->right != NULL) {  
      temp = temp->right;
  }
  temp->right = IDNode;  
  (yyval.no) = (yyvsp[-2].no); 
}
#line 1915 "y.tab.c"
    break;

  case 38: /* Gid: ID  */
#line 245 "expl.y"
        {
  G_Install((yyvsp[0].no)->varname,NULL,1,-1,NULL,-1);
   (yyval.no)=createNode(-1,1,-1,NULL,NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
}
#line 1924 "y.tab.c"
    break;

  case 39: /* Gid: ID '[' NUM ']'  */
#line 249 "expl.y"
                {
  G_Install((yyvsp[-3].no)->varname,NULL,(yyvsp[-1].no)->val,-1,NULL,-1);
  (yyval.no)=createNode(-1,(yyvsp[-1].no)->val,1,NULL,NULL,(yyvsp[-3].no)->varname,-1,NULL,NULL);
}
#line 1933 "y.tab.c"
    break;

  case 40: /* Gid: ID '[' NUM ']' '[' NUM ']'  */
#line 253 "expl.y"
                            {
  G_Install((yyvsp[-6].no)->varname,NULL,(yyvsp[-4].no)->val,(yyvsp[-1].no)->val,NULL,-1);
   (yyval.no) = createNode(-1,(yyvsp[-4].no)->val,(yyvsp[-1].no)->val,NULL,NULL,(yyvsp[-6].no)->varname,-1,NULL,NULL);
}
#line 1942 "y.tab.c"
    break;

  case 41: /* Gid: MUL ID  */
#line 257 "expl.y"
         { //this is for Pointer
  G_Install((yyvsp[0].no)->varname,TLookup("pointer"),1,-1,NULL,-1);
  (yyval.no) = createNode(-1,1,-1,TLookup("pointer"),NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
}
#line 1951 "y.tab.c"
    break;

  case 42: /* Gid: ID '(' ParamList ')'  */
#line 261 "expl.y"
                       {
  G_Install((yyvsp[-3].no)->varname,NULL,1,-1,(yyvsp[-1].plist),flabel++);
  (yyval.no) = createNode(-1,1,-1,NULL,NULL,(yyvsp[-3].no)->varname,-1,NULL,NULL);
}
#line 1960 "y.tab.c"
    break;

  case 43: /* Gid: ID '(' ')'  */
#line 265 "expl.y"
            {
  G_Install((yyvsp[-2].no)->varname,NULL,1,-1,NULL,flabel++);
  (yyval.no) = createNode(-1,1,-1,NULL,NULL,(yyvsp[-2].no)->varname,-1,NULL,NULL);
}
#line 1969 "y.tab.c"
    break;

  case 46: /* Fdef: Type ID '(' ParamList ')' '{' LdeclBlock Body '}'  */
#line 276 "expl.y"
                                                         {
  char* definition_type = (yyvsp[-8].string);
  struct ParamList* defintion_param_list = (yyvsp[-5].plist);
  struct Gsymbol* Gentry = (yyvsp[-7].no)->Gentry;
  struct Memberfunclist* member_function ;
  int is_member_function =0;
  if(cptr){
     member_function = Class_Mlookup(cptr,(yyvsp[-7].no)->varname);
     if(member_function==NULL){
      printf("ERROR: member function (%s) not declared in class %s\n",(yyvsp[-7].no)->varname,cptr->name);
      return -1;
     }
     is_member_function =1;
  }
  if(!is_member_function && Gentry==NULL){
    printf("ERROR: FUNCTION NOT DECLARED %s\n",(yyvsp[-7].no)->varname);
    return -1;
  }
  //checking return type equivalence
  if(!is_member_function && strcmp(definition_type,Gentry->type->name)!=0){
    printf("ERROR: FUNCTION RETURN TYPE NOT MATCHING WITH DECLARATION\n");
    return -1;
  }
  else if(is_member_function && strcmp(definition_type,member_function->type->name)!=0){
    printf("ERROR: FUNCTION RETURN TYPE NOT MATCHING WITH DECLARATION\n");
    return -1;
  }

  //checking param equivalence
  struct ParamList* temp1 = defintion_param_list;
  struct ParamList* temp2;
  if(!is_member_function){
    temp2 = Gentry->param_list;
  }else{
    temp2 = member_function->paramlist;
  }
  while(temp1!=NULL && temp2!=NULL){
    if(strcmp(temp1->name,temp2->name)!=0 || strcmp(temp1->type->name,temp2->type->name)!=0){
      printf("ERROR: FUNCTION MISMATCH %s\n",(yyvsp[-7].no)->varname);
      return -1;
    }
    temp1=temp1->next;
    temp2=temp2->next;
  }
  if(temp1!=NULL || temp2!=NULL){
    printf("ERROR: FUNCTION DECLARATION MISMATCHED: %s\n",(yyvsp[-7].no)->varname);
    return -1;
  }
  //Generating Header and Cleaning Up Local Symbol Table
  FILE* target_file = fopen("code.xsm","a");
  if(!begin_flag){ //if we are generating the first function the header generated
      fclose(target_file);
      target_file = fopen("code.xsm","w");
      header_code_gen(target_file);
      begin_flag=1;
    }
    print_Ltable();
    printf("Preorder of Syntax Tree : ");
    preorder((yyvsp[-1].no));
    printf("\n\n");
    returnStmt_checker((yyvsp[-1].no),TLookup(definition_type)); //return statement checker..............
    if(!is_member_function)
      fprintf(target_file,"F%d:\n",Gentry->flabel);
    else
      fprintf(target_file,"F%d:\n",member_function->Flabel);
    function_begin_code_gen(target_file,Ltable);
    code_gen((yyvsp[-1].no),target_file);
    L_cleanup();
    local_binding=1;
    param_binding=1;
    fclose(target_file);
}
#line 2046 "y.tab.c"
    break;

  case 47: /* Fdef: Type ID '(' ')' '{' LdeclBlock Body '}'  */
#line 348 "expl.y"
                                         {
  char* definition_type = (yyvsp[-7].string);
  struct Gsymbol* Gentry = GLookUp((yyvsp[-6].no)->varname);
  struct Memberfunclist* member_function;
  int is_member_function =0;
  if(cptr){
     member_function = Class_Mlookup(cptr,(yyvsp[-6].no)->varname);
     if(member_function==NULL){
      printf("ERROR: member function (%s) not declared in class %s\n",(yyvsp[-6].no)->varname,cptr->name);
      return -1;
     }
     is_member_function =1;
  }
  if(!is_member_function && Gentry==NULL){
    printf("ERROR: FUNCTION NOT DECLARED %s\n",(yyvsp[-6].no)->varname);
    return -1;
  }
  //checking return type equivalence
  if(!is_member_function && strcmp(definition_type,Gentry->type->name)!=0){
    printf("ERROR: FUNCTION RETURN TYPE NOT MATCHING WITH DECLARATION\n");
    return -1;
  }
  else if(is_member_function && strcmp(definition_type,member_function->type->name)!=0){
    printf("ERROR: FUNCTION RETURN TYPE NOT MATCHING WITH DECLARATION\n");
    return -1;
  }

  //checking param equivalence
  if((!is_member_function && Gentry->param_list==NULL)|| (is_member_function && member_function->paramlist==NULL)){
    FILE* target_file = fopen("code.xsm","a");
    if(!begin_flag){ //if we are generating the first function the header generated
        fclose(target_file);
        target_file = fopen("code.xsm","w");
        header_code_gen(target_file);
        begin_flag=1;
      }
      print_Ltable();
      printf("Preorder of Syntax Tree : ");
      preorder((yyvsp[-1].no));
      printf("\n\n");
      returnStmt_checker((yyvsp[-1].no),TLookup(definition_type)); //return statement checker..............
      if(!is_member_function)
      fprintf(target_file,"F%d:\n",Gentry->flabel);
    else
      fprintf(target_file,"F%d:\n",member_function->Flabel);
      function_begin_code_gen(target_file,Ltable);
      code_gen((yyvsp[-1].no),target_file);
      L_cleanup();
      local_binding=1;
      param_binding=1;
      fclose(target_file);
  }else{
    printf("ERROR: FUNCTION DECLARATION UNMATCHED\n");
    return -1;
  }



}
#line 2110 "y.tab.c"
    break;

  case 48: /* ParamList: ParamList ',' Param  */
#line 408 "expl.y"
                                {
  (yyval.plist) = append_param_list((yyvsp[-2].plist),(yyvsp[0].plist));
}
#line 2118 "y.tab.c"
    break;

  case 49: /* ParamList: Param  */
#line 411 "expl.y"
         {
  (yyval.plist) = (yyvsp[0].plist);
}
#line 2126 "y.tab.c"
    break;

  case 50: /* Param: Type ID  */
#line 415 "expl.y"
                {
  Typetable* param_type = TLookup((yyvsp[-1].string));
  L_Install((yyvsp[0].no)->varname,param_type,1);
  (yyval.plist) = create_param_list(param_type,(yyvsp[0].no)->varname);
}
#line 2136 "y.tab.c"
    break;

  case 51: /* Param: Type MUL ID  */
#line 420 "expl.y"
             {
  char* declaration_type = (yyvsp[-2].string);
  Typetable* Lentry_type;
  if(strcmp(declaration_type,"int")==0){
    Lentry_type = TLookup("pointer(int)");
  }
  else if(strcmp(declaration_type,"str")){
    Lentry_type = TLookup("pointer(str)");
  }
  else{
    printf("ERROR: pointers not reserved for user-defined type : %s\n",declaration_type);
    return -1;
  }
  L_Install((yyvsp[0].no)->varname,Lentry_type,1);
  (yyval.plist) = create_param_list(Lentry_type,(yyvsp[0].no)->varname);
}
#line 2157 "y.tab.c"
    break;

  case 52: /* MainBlock: INT MAIN '(' ')' '{' LdeclBlock Body '}'  */
#line 441 "expl.y"
                                                     {
  FILE* target_file = fopen("code.xsm","a");
  if(!begin_flag){
      fclose(target_file);
      target_file = fopen("code.xsm","w");
      header_code_gen(target_file);
      begin_flag=1;
    }
    print_Ltable();
    entry_code_gen(target_file);
    printf("Preorder of Syntax Tree : ");
    preorder((yyvsp[-1].no));
    printf("\n\n");
    returnStmt_checker((yyvsp[-1].no),TLookup("int"));
    fprintf(target_file,"MAIN:\n");
    function_begin_code_gen(target_file,Ltable);
    int result_reg =code_gen((yyvsp[-1].no),target_file);
    L_cleanup();
    local_binding=1;
    fclose(target_file);
}
#line 2183 "y.tab.c"
    break;

  case 53: /* LdeclBlock: DECL LdecList ENDDECL  */
#line 468 "expl.y"
                                   {local_binding=1;}
#line 2189 "y.tab.c"
    break;

  case 54: /* LdeclBlock: DECL ENDDECL  */
#line 469 "expl.y"
               {local_binding=1;}
#line 2195 "y.tab.c"
    break;

  case 55: /* LdeclBlock: %empty  */
#line 470 "expl.y"
             {}
#line 2201 "y.tab.c"
    break;

  case 56: /* LdecList: LdecList Ldecl  */
#line 472 "expl.y"
                           {}
#line 2207 "y.tab.c"
    break;

  case 57: /* LdecList: Ldecl  */
#line 472 "expl.y"
                                      {}
#line 2213 "y.tab.c"
    break;

  case 58: /* Ldecl: Type IdList ';'  */
#line 474 "expl.y"
                        {
  char* declaration_type = (yyvsp[-2].string);
  struct Typetable* declaration_type_entry = TLookup(declaration_type);
  if(declaration_type_entry==NULL){
    printf("ERROR:Class cannot be declared locally %s\n",declaration_type);
    return -1;
  }
  struct tnode* varList = (yyvsp[-1].no); //varList contains List of variables

  while(varList!=NULL){
    struct Lsymbol* Lentry = LLookUp(varList->varname);
    if(Lentry==NULL){
      if(varList->type!=NULL && strcmp(varList->type->name,"pointer")==0){
        if(strcmp(declaration_type,"int")==0){
          L_Install(varList->varname,TLookup("pointer(int)"),0);
        }
        else if(strcmp(declaration_type,"str")==0){
          L_Install(varList->varname,TLookup("pointer(str)"),0);
        }
        else{
          printf("ERROR: pointers not reserved for user-defined variables: %s\n",declaration_type);
          return -1;
        }
      }
      else
      L_Install(varList->varname,declaration_type_entry,0);
    }
    else{
      printf("ERROR: REDECLARATION OF LOCAL VARIABLE IN %s\n",Lentry->name);
      exit(1);
    }
    varList=varList->right;
  }
  
}
#line 2253 "y.tab.c"
    break;

  case 59: /* IdList: IdList ',' Lid  */
#line 510 "expl.y"
                        {
  struct tnode* IDNode = (yyvsp[0].no);
  struct tnode* temp = (yyvsp[-2].no);
  while (temp->right != NULL) {  
      temp = temp->right;
  }
  temp->right = IDNode;  
  (yyval.no) = (yyvsp[-2].no); 
}
#line 2267 "y.tab.c"
    break;

  case 61: /* Lid: ID  */
#line 520 "expl.y"
        {
   (yyval.no)=createNode(-1,1,-1,NULL,NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
}
#line 2275 "y.tab.c"
    break;

  case 62: /* Lid: MUL ID  */
#line 523 "expl.y"
         { //this is for Pointer
  (yyval.no) = createNode(-1,1,-1,TLookup("pointer"),NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
}
#line 2283 "y.tab.c"
    break;

  case 63: /* Body: PBEGIN Slist ReturnStmt END  */
#line 529 "expl.y"
                                  {(yyval.no) = createNode(-1,1,1,NULL,NULL,NULL,CONNECTOR_NODE,(yyvsp[-2].no),(yyvsp[-1].no));}
#line 2289 "y.tab.c"
    break;

  case 64: /* Body: PBEGIN ReturnStmt END  */
#line 530 "expl.y"
                        {(yyval.no)=(yyvsp[-1].no);}
#line 2295 "y.tab.c"
    break;

  case 65: /* Type: INT  */
#line 532 "expl.y"
           {(yyval.string) = "int";}
#line 2301 "y.tab.c"
    break;

  case 66: /* Type: STR  */
#line 533 "expl.y"
      {(yyval.string) = "str";}
#line 2307 "y.tab.c"
    break;

  case 67: /* Type: ID  */
#line 534 "expl.y"
     {
    char* type_name = (yyvsp[0].no)->varname;
    if(TLookup((yyvsp[0].no)->varname)==NULL && Clookup((yyvsp[0].no)->varname)==NULL){
      printf("ERROR : The Following type/class is not user-defined %s\n",type_name);
      return -1;
    }
    (yyval.string)=(yyvsp[0].no)->varname;
  }
#line 2320 "y.tab.c"
    break;

  case 68: /* Slist: Slist Stmt  */
#line 543 "expl.y"
                   {
  (yyval.no)=createNode(-1,1,1,NULL,NULL,NULL,CONNECTOR_NODE,(yyvsp[-1].no),(yyvsp[0].no));
}
#line 2328 "y.tab.c"
    break;

  case 69: /* Slist: Stmt  */
#line 546 "expl.y"
       {(yyval.no)=(yyvsp[0].no);}
#line 2334 "y.tab.c"
    break;

  case 70: /* Stmt: InputStmt  */
#line 549 "expl.y"
                 {(yyval.no)=(yyvsp[0].no);}
#line 2340 "y.tab.c"
    break;

  case 71: /* Stmt: OutputStmt  */
#line 550 "expl.y"
             {(yyval.no)=(yyvsp[0].no);}
#line 2346 "y.tab.c"
    break;

  case 72: /* Stmt: AsgStmt  */
#line 551 "expl.y"
         {(yyval.no)=(yyvsp[0].no);}
#line 2352 "y.tab.c"
    break;

  case 73: /* Stmt: Ifstmt  */
#line 552 "expl.y"
        {(yyval.no)=(yyvsp[0].no);}
#line 2358 "y.tab.c"
    break;

  case 74: /* Stmt: WhileStmt  */
#line 553 "expl.y"
           {(yyval.no)=(yyvsp[0].no);}
#line 2364 "y.tab.c"
    break;

  case 75: /* Stmt: DoWhileStmt  */
#line 554 "expl.y"
             {(yyval.no)=(yyvsp[0].no);}
#line 2370 "y.tab.c"
    break;

  case 76: /* Stmt: BreakStmt  */
#line 555 "expl.y"
           {(yyval.no)=(yyvsp[0].no);}
#line 2376 "y.tab.c"
    break;

  case 77: /* Stmt: ContinueStmt  */
#line 556 "expl.y"
              {(yyval.no)=(yyvsp[0].no);}
#line 2382 "y.tab.c"
    break;

  case 78: /* Stmt: ReturnStmt  */
#line 557 "expl.y"
            {(yyval.no)=(yyvsp[0].no);}
#line 2388 "y.tab.c"
    break;

  case 79: /* Stmt: BreakpointStmt  */
#line 558 "expl.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 2394 "y.tab.c"
    break;

  case 80: /* Stmt: initializeStmt  */
#line 559 "expl.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 2400 "y.tab.c"
    break;

  case 81: /* Stmt: AllocStmt  */
#line 560 "expl.y"
           {(yyval.no)=(yyvsp[0].no);}
#line 2406 "y.tab.c"
    break;

  case 82: /* Stmt: FreeStmt  */
#line 561 "expl.y"
          {(yyval.no)=(yyvsp[0].no);}
#line 2412 "y.tab.c"
    break;

  case 83: /* Stmt: NewStmt  */
#line 562 "expl.y"
         {(yyval.no)=(yyvsp[0].no);}
#line 2418 "y.tab.c"
    break;

  case 84: /* InputStmt: READ '(' Identifier ')' ';'  */
#line 569 "expl.y"
                                        {
    // printf("Reading");
    (yyval.no) = makeNonLeafNode((yyvsp[-2].no),NULL,READ_NODE,"_");
  }
#line 2427 "y.tab.c"
    break;

  case 85: /* OutputStmt: WRITE '(' expr ')' ';'  */
#line 574 "expl.y"
                                    {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),NULL,WRITE_NODE,"_");}
#line 2433 "y.tab.c"
    break;

  case 86: /* AsgStmt: Identifier '=' expr ';'  */
#line 576 "expl.y"
                                  {
  // printf("%s\n",$1->Gentry->name);
  (yyval.no) = makeNonLeafNode((yyvsp[-3].no),(yyvsp[-1].no),OPERATOR_NODE,"=");
  }
#line 2442 "y.tab.c"
    break;

  case 87: /* BreakStmt: BREAK ';'  */
#line 581 "expl.y"
                      {(yyval.no)=makeNonLeafNode(NULL,NULL,BREAK_NODE,"_");}
#line 2448 "y.tab.c"
    break;

  case 88: /* BreakpointStmt: BREAKPOINT ';'  */
#line 583 "expl.y"
                                {(yyval.no)=makeNonLeafNode(NULL,NULL,BREAKPOINT_NODE,"_");}
#line 2454 "y.tab.c"
    break;

  case 89: /* ContinueStmt: CONTINUE ';'  */
#line 585 "expl.y"
                            {(yyval.no)=makeNonLeafNode(NULL,NULL,CONTINUE_NODE,"_");}
#line 2460 "y.tab.c"
    break;

  case 90: /* Ifstmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF ';'  */
#line 587 "expl.y"
                                                         {
  struct tnode* if_else_node = makeNonLeafNode((yyvsp[-7].no),(yyvsp[-4].no),IF_ELSE_NODE,"_");
  if_else_node->middle = (yyvsp[-2].no);
  (yyval.no) = if_else_node;
}
#line 2470 "y.tab.c"
    break;

  case 91: /* Ifstmt: IF '(' expr ')' THEN Slist ENDIF ';'  */
#line 592 "expl.y"
                                       {(yyval.no) = makeNonLeafNode((yyvsp[-5].no),(yyvsp[-2].no),IF_NODE,"_");}
#line 2476 "y.tab.c"
    break;

  case 92: /* WhileStmt: WHILE '(' expr ')' DO Slist ENDWHILE ';'  */
#line 595 "expl.y"
                                                     {(yyval.no) = makeNonLeafNode((yyvsp[-5].no),(yyvsp[-2].no),WHILE_NODE,"_");}
#line 2482 "y.tab.c"
    break;

  case 93: /* DoWhileStmt: DO Slist WHILE '(' expr ')' ';'  */
#line 597 "expl.y"
                                              {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[-5].no),DO_WHILE_NODE,"_");}
#line 2488 "y.tab.c"
    break;

  case 94: /* ReturnStmt: RETURN expr ';'  */
#line 599 "expl.y"
                             {(yyval.no) = makeNonLeafNode((yyvsp[-1].no),NULL,RETURN_NODE,"_");}
#line 2494 "y.tab.c"
    break;

  case 95: /* initializeStmt: Identifier '=' INITIALIZE '(' ')' ';'  */
#line 601 "expl.y"
                                                       {(yyval.no) = makeNonLeafNode((yyvsp[-5].no),NULL,INITIALIZE_NODE,"_");}
#line 2500 "y.tab.c"
    break;

  case 96: /* AllocStmt: Identifier '=' ALLOC '(' ')' ';'  */
#line 603 "expl.y"
                                             {(yyval.no)=makeNonLeafNode((yyvsp[-5].no),NULL,ALLOC_NODE,"_");}
#line 2506 "y.tab.c"
    break;

  case 97: /* FreeStmt: FREE '(' Identifier ')' ';'  */
#line 605 "expl.y"
                                       {(yyval.no)=makeNonLeafNode((yyvsp[-2].no),NULL,FREE_NODE,"_");}
#line 2512 "y.tab.c"
    break;

  case 98: /* NewStmt: Identifier '=' NEW '(' Type ')' ';'  */
#line 608 "expl.y"
                                              {
    if((yyvsp[-6].no)->Ctype==NULL){
      printf("ERROR: syntax error NEW assignment to non-class type\n");
      return -1;
    }
    if(strcmp((yyvsp[-6].no)->Ctype->name,(yyvsp[-2].string))!=0){
      printf("ERROR: class type mismatch in NEW statement\n");
      return -1;
    }
    (yyval.no)=makeNonLeafNode((yyvsp[-6].no),NULL,NEW_NODE,"_");
  }
#line 2528 "y.tab.c"
    break;

  case 99: /* expr: expr PLUS expr  */
#line 622 "expl.y"
                       {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"+");}
#line 2534 "y.tab.c"
    break;

  case 100: /* expr: expr MINUS expr  */
#line 623 "expl.y"
                      {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"-");}
#line 2540 "y.tab.c"
    break;

  case 101: /* expr: expr MUL expr  */
#line 624 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"*");}
#line 2546 "y.tab.c"
    break;

  case 102: /* expr: expr DIV expr  */
#line 625 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"/");}
#line 2552 "y.tab.c"
    break;

  case 103: /* expr: expr MOD expr  */
#line 626 "expl.y"
                  {(yyval.no)=makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"%");}
#line 2558 "y.tab.c"
    break;

  case 104: /* expr: expr LT expr  */
#line 627 "expl.y"
                 {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"<");}
#line 2564 "y.tab.c"
    break;

  case 105: /* expr: expr LTE expr  */
#line 628 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"<=");}
#line 2570 "y.tab.c"
    break;

  case 106: /* expr: expr GT expr  */
#line 629 "expl.y"
                 {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,">");}
#line 2576 "y.tab.c"
    break;

  case 107: /* expr: expr GTE expr  */
#line 630 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,">=");}
#line 2582 "y.tab.c"
    break;

  case 108: /* expr: expr EQUALS expr  */
#line 631 "expl.y"
                     {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"==");}
#line 2588 "y.tab.c"
    break;

  case 109: /* expr: expr NOTEQUALS expr  */
#line 632 "expl.y"
                        {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"!=");}
#line 2594 "y.tab.c"
    break;

  case 110: /* expr: expr AND expr  */
#line 633 "expl.y"
                  {(yyval.no)=makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"&&");}
#line 2600 "y.tab.c"
    break;

  case 111: /* expr: expr OR expr  */
#line 634 "expl.y"
                 {(yyval.no)=makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"||");}
#line 2606 "y.tab.c"
    break;

  case 112: /* expr: ID '(' ArgList ')'  */
#line 635 "expl.y"
                      {
    struct tnode* function_node = makeNonLeafNode((yyvsp[-3].no),NULL,FUNCTION_NODE,"_");
    function_node->argList = (yyvsp[-1].arglist);
    function_node->varname = strdup((yyvsp[-3].no)->varname);
    struct Gsymbol* Gentry = (yyvsp[-3].no)->Gentry;
    if(Gentry==NULL){
      printf("ERROR: NO SUCH FUNCTION HAS BEEN DECLARED!!: %s\n",(yyvsp[-3].no)->varname);
      exit(1);
    }
    struct ParamList* param_list = Gentry->param_list;
    struct FuncArgs* arg_list = (yyvsp[-1].arglist);
    if(verify_func_signature(arg_list,param_list)==0){
      printf("ERROR:FUNCTION SIGNATURE MISMATCH: %s\n",(yyvsp[-3].no)->varname);
      exit(1);
    }
    function_node->Gentry = Gentry;
    function_node->type = Gentry->type;
    (yyval.no)=function_node;
  }
#line 2630 "y.tab.c"
    break;

  case 113: /* expr: '(' expr ')'  */
#line 654 "expl.y"
                  {(yyval.no) = (yyvsp[-1].no);}
#line 2636 "y.tab.c"
    break;

  case 114: /* expr: NUM  */
#line 655 "expl.y"
          {(yyval.no) = (yyvsp[0].no);}
#line 2642 "y.tab.c"
    break;

  case 115: /* expr: STRING  */
#line 656 "expl.y"
           {(yyval.no)=(yyvsp[0].no);}
#line 2648 "y.tab.c"
    break;

  case 116: /* expr: Identifier  */
#line 657 "expl.y"
               {(yyval.no)=(yyvsp[0].no);}
#line 2654 "y.tab.c"
    break;

  case 117: /* expr: PNULL  */
#line 658 "expl.y"
          {(yyval.no)=(yyvsp[0].no);}
#line 2660 "y.tab.c"
    break;

  case 118: /* expr: FieldFunction  */
#line 659 "expl.y"
                  {
    (yyval.no) = (yyvsp[0].no);
  }
#line 2668 "y.tab.c"
    break;

  case 119: /* ArgList: ArgList ',' expr  */
#line 664 "expl.y"
                           {
  (yyval.arglist)=append_arglist((yyvsp[-2].arglist),(yyvsp[0].no));
}
#line 2676 "y.tab.c"
    break;

  case 120: /* ArgList: expr  */
#line 667 "expl.y"
       {
  (yyval.arglist)=create_arglist((yyvsp[0].no));
}
#line 2684 "y.tab.c"
    break;

  case 121: /* ArgList: %empty  */
#line 670 "expl.y"
  {(yyval.arglist)=NULL;}
#line 2690 "y.tab.c"
    break;

  case 122: /* Identifier: ID  */
#line 672 "expl.y"
                {
    struct tnode* IDNode = (yyvsp[0].no);
  
    int table_type = check_identifier(IDNode);
    // printf("%d\n",table_type);
    if (table_type==1) { //GLOBAL variable
        // Global variable-specific checks
        if (IDNode->Gentry->row>1) {
            printf("ERROR: ACCESSING ARRAY WITHOUT INDEX %s\n", IDNode->varname);
            exit(1);
        }
    }
    (yyval.no) = IDNode;
}
#line 2709 "y.tab.c"
    break;

  case 123: /* Identifier: ID '[' index ']'  */
#line 686 "expl.y"
                   {
    struct tnode* IDNode = (yyvsp[-3].no);
    int table_type = check_identifier(IDNode);
    if (table_type==1) {//GLOBAL variable
        // Array-specific checks
        if (IDNode->Gentry->col != -1) {
            printf("ERROR: ACCESSING A 2D-ARRAY VARIABLE %s\n", IDNode->varname);
            exit(1);
        }
    }
    (yyval.no) = makeNonLeafNode((yyvsp[-3].no), (yyvsp[-1].no), ARRAY_NODE, "_");
}
#line 2726 "y.tab.c"
    break;

  case 124: /* Identifier: ID '[' index ']' '[' index ']'  */
#line 698 "expl.y"
                                 {
    struct tnode* IDNode = (yyvsp[-6].no);
    int table_type = check_identifier(IDNode);
    if (table_type==1) {//GLOBAL variable
        if (IDNode->Gentry->col == -1) {
            printf("ERROR: THIS IS NOT A 2-D ARRAY %s\n", IDNode->varname);
            exit(1);
        }
    }
    struct tnode* _2d_array_node = makeNonLeafNode((yyvsp[-4].no), (yyvsp[-1].no), _2D_ARRAY_NODE, "_");
    (yyval.no) = makeNonLeafNode((yyvsp[-6].no), _2d_array_node, ARRAY_NODE, "_");
}
#line 2743 "y.tab.c"
    break;

  case 125: /* Identifier: MUL ID  */
#line 710 "expl.y"
         {
    struct tnode* IDNode = (yyvsp[0].no);
    int table_type = check_identifier(IDNode);
    if (table_type == 1) {//GLOBAL variable
        // Pointer dereferencing checks
        if (strcmp(IDNode->Gentry->type->name,"pointer(int)")!=0 && strcmp(IDNode->Gentry->type->name,"pointer(str)")!=0) {
            printf("ERROR: DEREFERENCING A NON-POINTER VARIABLE %s\n", IDNode->Gentry->name);
            exit(1);
        }
        IDNode->type = (strcmp(IDNode->Gentry->type->name,"pointer(int)")==0) ? TLookup("int") : TLookup("str");
    }else{//LOCAL variable
      if (strcmp(IDNode->Lentry->type->name,"pointer(int)")!=0 && strcmp(IDNode->Lentry->type->name,"pointer(str)")!=0 ) {
            printf("ERROR: DEREFERENCING A NON-POINTER VARIABLE %s\n", IDNode->Lentry->name);
            exit(1);
        }
      IDNode->type = (strcmp(IDNode->Lentry->type->name,"pointer(int)")==0) ? TLookup("int") : TLookup("str");
    }

    struct tnode* dereference_node = makeNonLeafNode(IDNode, NULL, DEREFERENCE_NODE, "_");
    dereference_node->type = IDNode->type;
    (yyval.no) = dereference_node;
}
#line 2770 "y.tab.c"
    break;

  case 126: /* Identifier: '&' Identifier  */
#line 732 "expl.y"
                 {
    struct tnode* IDNode = (yyvsp[0].no);
   
    int table_type = check_identifier(IDNode);
    if (table_type == 1) {//GLOBAL variable
        struct tnode* addressNode = makeNonLeafNode(IDNode, NULL, ADDRESS_NODE, "_");
        struct Gsymbol* Gentry = IDNode->Gentry;
        if(IDNode->nodetype==ARRAY_NODE){
          Gentry=IDNode->left->Gentry;
          printf("%d\n",IDNode->right->nodetype);
        }
        addressNode->type = (strcmp(Gentry->type->name,"int")==0 || strcmp(Gentry->type->name,"pointer(int)")==0 )
                                ? TLookup("pointer(int)")
                                : TLookup("pointer(str)");
        (yyval.no) = addressNode;
    }else{//LOCAL variable
      struct tnode* addressNode = makeNonLeafNode(IDNode, NULL, ADDRESS_NODE, "_");
        addressNode->type = (strcmp(IDNode->Lentry->type->name,"int")==0 || strcmp(IDNode->Lentry->type->name,"pointer(int)")==0 )
                                ? TLookup("pointer(int)")
                                : TLookup("pointer(str)");
        (yyval.no) = addressNode;
    }
}
#line 2798 "y.tab.c"
    break;

  case 127: /* Identifier: Field  */
#line 755 "expl.y"
        {
  struct tnode* field_node = makeNonLeafNode((yyvsp[0].no), NULL, FIELD_NODE, "_");
  field_validifier(field_node);  
  (yyval.no) = field_node;
}
#line 2808 "y.tab.c"
    break;

  case 128: /* Field: Field '.' ID  */
#line 762 "expl.y"
                     {
  struct tnode* temp = (yyvsp[-2].no);
  while(temp->left!=NULL){
    temp=temp->left;
  }
  temp->left=(yyvsp[0].no);
  (yyval.no)=(yyvsp[-2].no);
}
#line 2821 "y.tab.c"
    break;

  case 129: /* Field: ID '[' index ']' '.' ID  */
#line 771 "expl.y"
                           {
  // printf("Array field\n");
  (yyvsp[-5].no)->left =(yyvsp[0].no);
  (yyvsp[-5].no)->right = (yyvsp[-3].no); //stores the size of the 1-D array
 
  check_identifier((yyvsp[-5].no));
  if((yyvsp[-3].no)->nodetype==CONST_NODE){
    if((yyvsp[-3].no)->val>=(yyvsp[-5].no)->Gentry->row){
      printf("ERROR:Array Out of bounds:%s\n ",(yyvsp[-5].no)->Gentry->name);
      return -1;
    }
  }
  (yyval.no) =  (yyvsp[-5].no);
}
#line 2840 "y.tab.c"
    break;

  case 130: /* Field: ID '.' ID  */
#line 785 "expl.y"
            {
  // printf("re");
  check_identifier((yyvsp[-2].no));
  if((yyvsp[-2].no)->Gentry!=NULL && (yyvsp[-2].no)->Gentry->row>1){
    printf("ERROR: accessing an Array value without indexing %s\n",(yyvsp[-2].no)->Gentry->name);
    return -1;
  }
  (yyvsp[-2].no)->left = (yyvsp[0].no);
  (yyval.no)=(yyvsp[-2].no);
}
#line 2855 "y.tab.c"
    break;

  case 131: /* Field: SELF '.' ID  */
#line 795 "expl.y"
              {
  if(!cptr){//self is called outside the class definition
    printf("ERROR: \"self\" keyword is used under class definition\n");
    return -1;
  }

  struct tnode* self_node= makeNonLeafNode((yyvsp[0].no),NULL,SELF_NODE,"_");
  self_node->Ctype = cptr;
  (yyval.no)=self_node;
}
#line 2870 "y.tab.c"
    break;

  case 132: /* FieldFunction: ID '.' ID '(' ArgList ')'  */
#line 807 "expl.y"
                                         {
  struct tnode* function_node = makeNonLeafNode((yyvsp[-3].no),(yyvsp[-5].no),FUNCTION_NODE,"_");

  check_identifier((yyvsp[-5].no));
  struct Memberfunclist* member_function = Class_Mlookup((yyvsp[-5].no)->Ctype,(yyvsp[-3].no)->varname);
  if(member_function==NULL){
    printf("ERROR: no such method exists for class %s\n",(yyvsp[-5].no)->Ctype->name);
    return -1;
  }
  function_node->argList =(yyvsp[-1].arglist);
  function_node->type = member_function->type; 
  function_node->varname = strdup((yyvsp[-3].no)->varname);
  (yyval.no)=function_node;
}
#line 2889 "y.tab.c"
    break;

  case 133: /* FieldFunction: SELF '.' ID '(' ArgList ')'  */
#line 821 "expl.y"
                             {
  if(!cptr){
    printf("ERROR: \"self\" keyword is used under class definition\n");
    return -1;
  }
  struct tnode* class_node = makeNonLeafNode(NULL,NULL,SELF_NODE,"_");
  class_node->Ctype = cptr;
  struct tnode* function_node = makeNonLeafNode((yyvsp[-3].no),class_node,FUNCTION_NODE,"_");
  struct Memberfunclist* member_function = Class_Mlookup(cptr,(yyvsp[-3].no)->varname);
  if(member_function==NULL){
    printf("ERROR: no such method exists for class %s\n",cptr->name);
    return -1;
  }
  function_node->argList =(yyvsp[-1].arglist);
  function_node->Ctype = NULL;
  function_node->type = member_function->type;
  function_node->varname = strdup((yyvsp[-3].no)->varname);
  (yyval.no)=function_node;
}
#line 2913 "y.tab.c"
    break;

  case 134: /* FieldFunction: Field '.' ID '(' ArgList ')'  */
#line 840 "expl.y"
                              {
  struct tnode* field_node = makeNonLeafNode((yyvsp[-5].no), NULL, FIELD_NODE, "_");
  field_validifier(field_node);  
  struct tnode* function_node = makeNonLeafNode((yyvsp[-3].no),field_node,FUNCTION_NODE,"_");
 
  struct Memberfunclist* member_function = Class_Mlookup(field_node->Ctype,(yyvsp[-3].no)->varname);
  // Print_VirtFuncTable($1->Ctype);
  if(member_function==NULL){
    printf("ERROR: no such method exists for class %s\n",field_node->Ctype->name);
    return -1;
  }
  function_node->argList =(yyvsp[-1].arglist);
  function_node->type = member_function->type; 
  function_node->varname = strdup((yyvsp[-3].no)->varname);
  (yyval.no)=function_node;
}
#line 2934 "y.tab.c"
    break;

  case 135: /* index: expr  */
#line 856 "expl.y"
             {
    if(strcmp((yyvsp[0].no)->type->name,"int")!=0){
      printf("ERROR:indexing by a non-int type \n");
      return -1;
    }
    (yyval.no)=(yyvsp[0].no);
  }
#line 2946 "y.tab.c"
    break;


#line 2950 "y.tab.c"

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

#line 865 "expl.y"


void yyerror(char const *s)
{
    printf("yyerror %s",s);
}


int main(void) {
  FILE* input_file = fopen("input.expl","r");
  yyin = input_file;
  TypeTableCreate();
  yyparse();

 return 0;
}
