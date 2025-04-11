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
#define YYLAST   535

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  136
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  303

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
     131,   161,   165,   173,   174,   176,   188,   189,   192,   197,
     201,   204,   210,   211,   213,   213,   215,   260,   268,   270,
     274,   278,   282,   286,   290,   299,   299,   301,   375,   437,
     440,   444,   449,   470,   498,   499,   500,   502,   502,   504,
     540,   548,   550,   553,   559,   560,   562,   563,   564,   573,
     576,   579,   580,   581,   582,   583,   584,   585,   586,   587,
     588,   589,   590,   591,   592,   599,   604,   606,   612,   614,
     616,   618,   623,   626,   628,   630,   632,   634,   636,   639,
     662,   663,   664,   665,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   694,   695,   696,   697,   698,   699,
     704,   707,   710,   712,   726,   738,   750,   772,   795,   802,
     811,   825,   835,   847,   865,   887,   903
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

#define YYPACT_NINF (-159)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -20,   -19,    39,    15,    34,    64,  -159,  -159,    25,   158,
      -9,  -159,  -159,    84,    10,  -159,    86,    94,   125,   133,
    -159,  -159,  -159,  -159,   -14,  -159,   111,   132,  -159,  -159,
     157,  -159,  -159,  -159,  -159,   104,  -159,     3,   141,   125,
     133,  -159,  -159,   154,  -159,  -159,   160,  -159,  -159,  -159,
    -159,   180,    72,   121,  -159,   182,  -159,  -159,   186,  -159,
      -9,  -159,    -6,   209,  -159,     3,   206,    52,   207,  -159,
     231,    -9,  -159,    50,  -159,     5,   203,  -159,   234,   212,
     146,   153,   148,   216,  -159,  -159,   148,   219,  -159,   218,
     119,   265,   234,   227,  -159,    73,   217,   148,   222,  -159,
    -159,   233,  -159,   140,  -159,     7,   261,   228,   265,   234,
     229,   177,  -159,   223,  -159,  -159,   235,  -159,   127,  -159,
     240,   236,   237,   238,   239,   261,   230,   244,    21,   245,
     247,   243,    79,    60,   261,  -159,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,  -159,  -159,   251,  -159,  -159,  -159,  -159,
     246,   248,  -159,   259,   265,  -159,   262,  -159,  -159,  -159,
       7,  -159,    60,    21,    21,    21,   297,  -159,  -159,  -159,
     253,  -159,  -159,    23,  -159,    21,   432,  -159,   255,  -159,
    -159,    60,   263,    21,   268,  -159,  -159,   270,  -159,   291,
     271,  -159,   267,  -159,  -159,   272,   349,   357,   379,   278,
     276,    21,   277,   402,    21,    21,    21,    21,    21,    21,
      21,    21,    21,    21,    21,    21,    21,  -159,   285,   287,
    -159,   477,   286,  -159,  -159,   289,   293,   294,   469,  -159,
    -159,   296,   305,   337,   334,    21,   311,   477,   188,   333,
    -159,   185,   185,  -159,  -159,  -159,   505,   511,   214,   214,
     214,   214,   205,   205,   335,   338,    95,   339,   340,   148,
    -159,  -159,  -159,   261,   261,   424,    21,  -159,    21,    21,
      21,  -159,    21,   341,   358,   360,   355,   105,   189,   -16,
     190,   477,   192,   198,   330,  -159,  -159,  -159,   361,   261,
     362,   363,  -159,  -159,  -159,  -159,  -159,  -159,   225,  -159,
    -159,   364,  -159
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     0,    17,     0,     0,     8,     1,     0,     0,
       0,     5,     7,    21,     0,    19,     0,     0,     0,     0,
       4,    13,    14,    15,     0,    11,     0,     0,    16,    18,
       0,    33,    66,    67,    68,     0,    35,     0,     0,    66,
       0,    46,     3,     0,     9,    10,     0,    22,    24,    32,
      34,     0,    39,     0,    38,     0,    45,     2,     0,    12,
      27,    42,     0,     0,    36,     0,     0,     0,     0,    23,
       0,    27,    44,     0,    50,     0,     0,    37,    56,     0,
       0,     0,    31,     0,    26,    43,     0,     0,    51,    40,
       0,     0,    56,     0,    25,     0,     0,    30,     0,    49,
      52,     0,    55,     0,    58,     0,     0,     0,     0,    56,
       0,     0,    20,     0,    54,    57,     0,    62,     0,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   123,     0,     0,    70,    71,    72,    73,    77,
      80,    78,    74,    75,    76,    79,    81,    82,    83,    84,
       0,   128,    53,     0,     0,    29,     0,    41,    63,    59,
       0,   126,     0,     0,     0,     0,     0,    79,    88,    90,
       0,   115,   116,   123,   118,     0,     0,   117,   128,   119,
      89,     0,     0,     0,     0,   127,    69,    79,    65,     0,
       0,    48,     0,    28,    60,     0,     0,     0,     0,     0,
       0,   122,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    95,     0,     0,
     132,   136,     0,   131,    64,     0,     0,     0,     0,   129,
      47,     0,     0,     0,     0,     0,   132,   121,     0,   131,
     114,   100,   101,   102,   103,   104,   112,   111,   105,   107,
     106,   108,   109,   110,   129,     0,   124,     0,     0,     0,
      87,    85,    86,     0,     0,     0,   122,   113,     0,   122,
     122,    98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   120,     0,     0,     0,   130,    97,    96,     0,     0,
       0,     0,    94,   134,   133,   135,   125,    99,     0,    92,
      93,     0,    91
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -159,  -159,  -159,  -159,   387,  -159,   369,   -27,  -159,  -159,
     404,  -159,  -159,  -159,   388,  -159,  -159,  -159,  -159,   397,
    -159,   368,   376,   -35,   -54,   354,   -13,   -73,  -159,   359,
    -159,   300,  -101,   -17,  -122,  -132,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,  -159,  -159,   -92,  -159,  -159,  -159,  -159,
    -117,  -158,  -105,  -102,  -159,   191
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     5,     6,    24,    25,    26,     9,    14,
      15,    16,    60,    69,    70,    71,    96,    19,    35,    36,
      53,    54,    40,    41,    73,    74,    20,    91,   103,   104,
     118,   119,   107,    43,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   167,   146,   147,   148,   149,
     237,   238,   177,   178,   179,   222
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      37,   150,   186,   166,   151,    56,    42,   153,    51,   264,
      87,   176,   116,    80,   145,     1,    21,    22,    37,   108,
     150,    21,    22,   151,    32,    33,   120,    57,   185,   150,
       4,   151,   151,    68,   186,    23,   154,   292,    44,     7,
      23,   111,   187,    34,    83,    75,   196,   197,   198,    72,
      75,    28,    52,   192,    88,     8,   117,   195,   203,    13,
     151,   150,    56,   170,   151,   120,   221,   171,   172,    75,
     173,   174,   228,   105,    13,   175,   219,   201,    75,   151,
     183,   133,    32,    33,   202,    10,   105,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
      11,    34,   131,    32,    33,    85,    86,    79,   280,   132,
     120,   282,   283,     4,   121,   122,   123,   289,   265,   290,
     133,   124,    34,    31,    32,    33,    62,    27,   110,    63,
     125,   126,   127,    49,    32,    33,   183,    30,   128,   129,
     184,   277,   278,    34,   130,   186,   186,   131,   102,    32,
      33,   281,   272,    34,   132,   221,   273,    38,   150,   150,
      46,   151,   151,    39,    33,   133,   186,   298,    34,   114,
      32,    33,   150,   150,    64,   151,   151,    65,    32,    33,
     159,    47,    34,   160,   150,    48,    17,   151,    18,    34,
     206,   207,   208,   150,   120,    55,   151,    34,   121,   122,
     123,    93,    86,    58,   291,   124,    94,    95,   204,   205,
     206,   207,   208,    59,   125,   126,   127,   204,   205,   206,
     207,   208,   128,   129,   211,   212,   213,   214,   130,    61,
     120,   131,   156,    86,   121,   122,   123,    66,   132,   301,
      67,   124,   276,   267,   268,   293,   268,   294,   268,   133,
     125,   126,   127,   295,   268,    76,    81,    78,   128,   129,
      82,    89,    90,    92,   130,    98,   120,   131,   100,   112,
     121,   122,   123,   106,   132,   101,    95,   124,   109,   113,
     152,   157,   155,   168,   158,   133,   125,   126,   127,   161,
     162,   163,   164,   165,   128,   129,   120,   169,   180,   188,
     130,   181,   120,   131,   182,   189,   121,   122,   123,   190,
     132,   191,   220,   199,   200,   193,   218,   223,   224,   230,
     229,   133,   125,   126,   127,   236,   239,   231,   225,   226,
     128,   129,   235,   170,   254,   227,   130,   171,   172,   131,
     173,   174,   255,   257,   256,   175,   132,   258,   259,   261,
     263,   133,   204,   205,   206,   207,   208,   133,   262,   264,
     204,   205,   206,   207,   208,   266,   209,   210,   211,   212,
     213,   214,   215,   216,   209,   210,   211,   212,   213,   214,
     215,   216,   204,   205,   206,   207,   208,   269,   296,   270,
     285,   271,    12,    45,   274,   275,   209,   210,   211,   212,
     213,   214,   215,   216,   232,   204,   205,   206,   207,   208,
     288,   286,   233,   287,   297,   299,   300,   302,    29,   209,
     210,   211,   212,   213,   214,   215,   216,   204,   205,   206,
     207,   208,    50,    77,   234,   204,   205,   206,   207,   208,
      99,   209,   210,   211,   212,   213,   214,   215,   216,   209,
     210,   211,   212,   213,   214,   215,   216,   240,    97,    84,
     194,     0,   115,   284,     0,     0,     0,     0,     0,     0,
       0,     0,   204,   205,   206,   207,   208,     0,     0,   279,
     204,   205,   206,   207,   208,   217,   209,   210,   211,   212,
     213,   214,   215,   216,   209,   210,   211,   212,   213,   214,
     215,   216,     0,     0,     0,     0,     0,     0,   204,   205,
     206,   207,   208,     0,   204,   205,   206,   207,   208,     0,
       0,     0,   260,   210,   211,   212,   213,   214,   215,   216,
     211,   212,   213,   214,   215,   216
};

static const yytype_int16 yycheck[] =
{
      17,   106,   134,   125,   106,    40,    19,   108,     5,    25,
       5,   128,     5,    67,   106,    35,    30,    31,    35,    92,
     125,    30,    31,   125,    30,    31,     5,    40,   133,   134,
      49,   133,   134,    60,   166,    49,   109,    53,    52,     0,
      49,    95,   134,    49,    71,    62,   163,   164,   165,    55,
      67,    41,    49,   154,    49,    40,    49,   162,   175,    49,
     162,   166,    97,    42,   166,     5,   183,    46,    47,    86,
      49,    50,   189,    90,    49,    54,   181,    54,    95,   181,
      57,    60,    30,    31,    61,    51,   103,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
      36,    49,    42,    30,    31,    55,    56,    55,   266,    49,
       5,   269,   270,    49,     9,    10,    11,    12,   235,    14,
      60,    16,    49,    29,    30,    31,    54,    43,    55,    57,
      25,    26,    27,    29,    30,    31,    57,    51,    33,    34,
      61,   263,   264,    49,    39,   277,   278,    42,    29,    30,
      31,   268,    57,    49,    49,   272,    61,    32,   263,   264,
      49,   263,   264,    30,    31,    60,   298,   289,    49,    29,
      30,    31,   277,   278,    53,   277,   278,    56,    30,    31,
      53,    49,    49,    56,   289,    28,    28,   289,    30,    49,
       5,     6,     7,   298,     5,    54,   298,    49,     9,    10,
      11,    55,    56,    49,    15,    16,    53,    54,     3,     4,
       5,     6,     7,    53,    25,    26,    27,     3,     4,     5,
       6,     7,    33,    34,    19,    20,    21,    22,    39,    49,
       5,    42,    55,    56,     9,    10,    11,    55,    49,    14,
      54,    16,   259,    55,    56,    55,    56,    55,    56,    60,
      25,    26,    27,    55,    56,    46,    49,    51,    33,    34,
      29,    58,    28,    51,    39,    49,     5,    42,    49,    52,
       9,    10,    11,     8,    49,    57,    54,    16,    51,    46,
      52,    58,    53,    53,    49,    60,    25,    26,    27,    49,
      54,    54,    54,    54,    33,    34,     5,    53,    53,    48,
      39,    54,     5,    42,    61,    59,     9,    10,    11,    61,
      49,    52,    49,    16,    61,    53,    61,    49,    48,    52,
      49,    60,    25,    26,    27,    49,    49,    55,    37,    38,
      33,    34,    54,    42,    49,    44,    39,    46,    47,    42,
      49,    50,    55,    54,    58,    54,    49,    54,    54,    53,
      13,    60,     3,     4,     5,     6,     7,    60,    53,    25,
       3,     4,     5,     6,     7,    54,    17,    18,    19,    20,
      21,    22,    23,    24,    17,    18,    19,    20,    21,    22,
      23,    24,     3,     4,     5,     6,     7,    54,    58,    54,
      49,    53,     5,    24,    55,    55,    17,    18,    19,    20,
      21,    22,    23,    24,    55,     3,     4,     5,     6,     7,
      55,    53,    55,    53,    53,    53,    53,    53,    14,    17,
      18,    19,    20,    21,    22,    23,    24,     3,     4,     5,
       6,     7,    35,    65,    55,     3,     4,     5,     6,     7,
      86,    17,    18,    19,    20,    21,    22,    23,    24,    17,
      18,    19,    20,    21,    22,    23,    24,    55,    82,    71,
     160,    -1,   103,   272,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    55,
       3,     4,     5,     6,     7,    53,    17,    18,    19,    20,
      21,    22,    23,    24,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    53,    18,    19,    20,    21,    22,    23,    24,
      19,    20,    21,    22,    23,    24
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    35,    63,    64,    49,    65,    66,     0,    40,    70,
      51,    36,    66,    49,    71,    72,    73,    28,    30,    79,
      88,    30,    31,    49,    67,    68,    69,    43,    41,    72,
      51,    29,    30,    31,    49,    80,    81,    95,    32,    30,
      84,    85,    88,    95,    52,    68,    49,    49,    28,    29,
      81,     5,    49,    82,    83,    54,    85,    88,    49,    53,
      74,    49,    54,    57,    53,    56,    55,    54,    69,    75,
      76,    77,    55,    86,    87,    95,    46,    83,    51,    55,
      86,    49,    29,    69,    76,    55,    56,     5,    49,    58,
      28,    89,    51,    55,    53,    54,    78,    84,    49,    87,
      49,    57,    29,    90,    91,    95,     8,    94,    89,    51,
      55,    86,    52,    46,    29,    91,     5,    49,    92,    93,
       5,     9,    10,    11,    16,    25,    26,    27,    33,    34,
      39,    42,    49,    60,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     114,   115,    52,    94,    89,    53,    55,    58,    49,    53,
      56,    49,    54,    54,    54,    54,    96,   107,    53,    53,
      42,    46,    47,    49,    50,    54,   112,   114,   115,   116,
      53,    54,    61,    57,    61,   114,    97,   107,    48,    59,
      61,    52,    94,    53,    93,   114,   112,   112,   112,    16,
      61,    54,    61,   112,     3,     4,     5,     6,     7,    17,
      18,    19,    20,    21,    22,    23,    24,    53,    61,   114,
      49,   112,   117,    49,    48,    37,    38,    44,   112,    49,
      52,    55,    55,    55,    55,    54,    49,   112,   113,    49,
      55,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,    49,    55,    58,    54,    54,    54,
      53,    53,    53,    13,    25,   112,    54,    55,    56,    54,
      54,    53,    57,    61,    55,    55,    95,    96,    96,    55,
     113,   112,   113,   113,   117,    49,    53,    53,    55,    12,
      14,    15,    53,    55,    55,    55,    58,    53,    96,    53,
      53,    14,    53
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    63,    63,    64,    64,    65,    65,    66,
      67,    67,    68,    69,    69,    69,    70,    70,    71,    71,
      72,    73,    73,    74,    74,    75,    76,    76,    77,    77,
      78,    78,    79,    79,    80,    80,    81,    82,    82,    83,
      83,    83,    83,    83,    83,    84,    84,    85,    85,    86,
      86,    87,    87,    88,    89,    89,    89,    90,    90,    91,
      92,    92,    93,    93,    94,    94,    95,    95,    95,    96,
      96,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    98,    99,   100,   101,   102,
     103,   104,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     113,   113,   113,   114,   114,   114,   114,   114,   114,   115,
     115,   115,   115,   116,   116,   116,   117
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     4,     3,     3,     0,     2,     1,     4,
       2,     1,     3,     1,     1,     1,     3,     0,     2,     1,
       8,     1,     3,     2,     0,     3,     2,     0,     6,     5,
       1,     0,     3,     2,     2,     1,     3,     3,     1,     1,
       4,     7,     2,     4,     3,     2,     1,     9,     8,     3,
       1,     2,     3,     8,     3,     2,     0,     2,     1,     3,
       3,     1,     1,     2,     4,     3,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     5,     4,     2,     2,
       2,    10,     8,     8,     7,     3,     6,     6,     5,     7,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     3,     1,     1,     1,     1,     1,
       3,     1,     0,     1,     4,     7,     2,     2,     1,     3,
       6,     3,     3,     6,     6,     6,     1
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
#line 1594 "y.tab.c"
    break;

  case 3: /* program: TypeDefBlock ClassDefBlock GDeclBlock MainBlock  */
#line 51 "expl.y"
                                                    {printf("Program Finished\n");exit(1);}
#line 1600 "y.tab.c"
    break;

  case 4: /* program: TypeDefBlock ClassDefBlock MainBlock  */
#line 52 "expl.y"
                                        {printf("Program Finished\n");exit(1);}
#line 1606 "y.tab.c"
    break;

  case 5: /* TypeDefBlock: TYPE TypeDefList ENDTYPE  */
#line 58 "expl.y"
                                        {PrintTypeTable();}
#line 1612 "y.tab.c"
    break;

  case 7: /* TypeDefList: TypeDefList TypeDef  */
#line 62 "expl.y"
                                  {}
#line 1618 "y.tab.c"
    break;

  case 8: /* TypeDefList: TypeDef  */
#line 63 "expl.y"
            {}
#line 1624 "y.tab.c"
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
  

}
#line 1661 "y.tab.c"
    break;

  case 10: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 99 "expl.y"
                                        {(yyval.fieldlist) =Finstall((yyvsp[-1].fieldlist),(yyvsp[0].fieldlist));}
#line 1667 "y.tab.c"
    break;

  case 11: /* FieldDeclList: FieldDecl  */
#line 100 "expl.y"
              {(yyval.fieldlist)=(yyvsp[0].fieldlist);}
#line 1673 "y.tab.c"
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
#line 1689 "y.tab.c"
    break;

  case 13: /* TypeName: INT  */
#line 115 "expl.y"
               {(yyval.string)="int";}
#line 1695 "y.tab.c"
    break;

  case 14: /* TypeName: STR  */
#line 116 "expl.y"
        {(yyval.string)="str";}
#line 1701 "y.tab.c"
    break;

  case 15: /* TypeName: ID  */
#line 117 "expl.y"
       {(yyval.string)=(yyvsp[0].no)->varname;}
#line 1707 "y.tab.c"
    break;

  case 16: /* ClassDefBlock: CLASS ClassDefList ENDCLASS  */
#line 123 "expl.y"
                                            {Print_Classtable();}
#line 1713 "y.tab.c"
    break;

  case 17: /* ClassDefBlock: %empty  */
#line 124 "expl.y"
  {}
#line 1719 "y.tab.c"
    break;

  case 18: /* ClassDefList: ClassDefList Classdef  */
#line 127 "expl.y"
                                     {}
#line 1725 "y.tab.c"
    break;

  case 19: /* ClassDefList: Classdef  */
#line 128 "expl.y"
           {}
#line 1731 "y.tab.c"
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
    // PrintFieldlist(class->memberField);
    methodlist_validifier(class);
    Print_VirtFuncTable(cptr);
    Print_VirtFuncTable(class->parentPtr);
    cptr=NULL;
    class_field_index =0;
    binding_pos+=8;
  }
#line 1764 "y.tab.c"
    break;

  case 21: /* Cname: ID  */
#line 161 "expl.y"
           {
    cptr =CInstall((yyvsp[0].no)->varname,NULL);
    (yyval.string)=(yyvsp[0].no)->varname;
  }
#line 1773 "y.tab.c"
    break;

  case 22: /* Cname: ID EXTENDS ID  */
#line 165 "expl.y"
                 {
    cptr = CInstall((yyvsp[-2].no)->varname,(yyvsp[0].no)->varname);
    (yyval.string)=(yyvsp[-2].no)->varname;
  }
#line 1782 "y.tab.c"
    break;

  case 23: /* CFieldlists: CFieldlists Cfield  */
#line 173 "expl.y"
                                 {}
#line 1788 "y.tab.c"
    break;

  case 24: /* CFieldlists: %empty  */
#line 174 "expl.y"
  {}
#line 1794 "y.tab.c"
    break;

  case 25: /* Cfield: TypeName ID ';'  */
#line 176 "expl.y"
                         {
  struct Typetable* type = TLookup((yyvsp[-2].string));
  struct Classtable* class = Clookup((yyvsp[-2].string));
  class_field_index = cptr->field_count;
  printf("field_count :%d\n",class_field_index);
  if(type==NULL && class==NULL){
    printf("ERROR: Type/Class is undefined %s\n",(yyvsp[-2].string));
  }
  struct Fieldlist* memberfield = Fcreate((yyvsp[-1].no)->varname,class_field_index++,type,class);
  Class_Finstall(cptr,memberfield);
}
#line 1810 "y.tab.c"
    break;

  case 26: /* MethodDecl: Mdecl MethodDecl  */
#line 188 "expl.y"
                              {L_cleanup();local_binding=1;param_binding=1;}
#line 1816 "y.tab.c"
    break;

  case 27: /* MethodDecl: %empty  */
#line 189 "expl.y"
  {}
#line 1822 "y.tab.c"
    break;

  case 28: /* Mdecl: TypeName ID '(' ParamList ')' ';'  */
#line 192 "expl.y"
                                         {
  
  Class_Minstall(cptr,(yyvsp[-4].no)->varname,TLookup((yyvsp[-5].string)),(yyvsp[-2].plist));
  Print_VirtFuncTable(cptr);
}
#line 1832 "y.tab.c"
    break;

  case 29: /* Mdecl: TypeName ID '(' ')' ';'  */
#line 197 "expl.y"
                          {
  Class_Minstall(cptr,(yyvsp[-3].no)->varname,TLookup((yyvsp[-4].string)),NULL);
  Print_VirtFuncTable(cptr);
}
#line 1841 "y.tab.c"
    break;

  case 30: /* MethodDefns: FdefBlock  */
#line 201 "expl.y"
                        {
    // Print_Classtable();
  }
#line 1849 "y.tab.c"
    break;

  case 31: /* MethodDefns: %empty  */
#line 204 "expl.y"
  {}
#line 1855 "y.tab.c"
    break;

  case 32: /* GDeclBlock: DECL GdeclList ENDDECL  */
#line 210 "expl.y"
                                    {print_GSymbolTable();L_cleanup();local_binding=1;param_binding=1;}
#line 1861 "y.tab.c"
    break;

  case 33: /* GDeclBlock: DECL ENDDECL  */
#line 211 "expl.y"
               {}
#line 1867 "y.tab.c"
    break;

  case 34: /* GdeclList: GdeclList Gdecl  */
#line 213 "expl.y"
                            {}
#line 1873 "y.tab.c"
    break;

  case 35: /* GdeclList: Gdecl  */
#line 213 "expl.y"
                                       {}
#line 1879 "y.tab.c"
    break;

  case 36: /* Gdecl: Type GidList ';'  */
#line 215 "expl.y"
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
    if(isClassType && (Gentry->row>=2 || Gentry->col!=-1)){
      printf("ERROR: Array of Class type currently not permitted!\n");
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
    if(isClassType){//class-type
      Gentry->binding = binding_pos;
      Gentry->size = 2;
      binding_pos+=2;
    }else{ //user-defined type
      Gentry->binding = binding_pos;
      binding_pos+=Gentry->size;
    }
    Gentry->type = declaration_type_entry;
    Gentry->Ctype = class_table_entry;
    varList=varList->right;
  }
}
#line 1928 "y.tab.c"
    break;

  case 37: /* GidList: GidList ',' Gid  */
#line 260 "expl.y"
                          {
  struct tnode* IDNode = (yyvsp[0].no);
  struct tnode* temp = (yyvsp[-2].no);
  while (temp->right != NULL) {  
      temp = temp->right;
  }
  temp->right = IDNode;  
  (yyval.no) = (yyvsp[-2].no); 
}
#line 1942 "y.tab.c"
    break;

  case 39: /* Gid: ID  */
#line 270 "expl.y"
        {
  G_Install((yyvsp[0].no)->varname,NULL,1,-1,NULL,-1);
   (yyval.no)=createNode(-1,1,-1,NULL,NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
}
#line 1951 "y.tab.c"
    break;

  case 40: /* Gid: ID '[' NUM ']'  */
#line 274 "expl.y"
                {
  G_Install((yyvsp[-3].no)->varname,NULL,(yyvsp[-1].no)->val,-1,NULL,-1);
  (yyval.no)=createNode(-1,(yyvsp[-1].no)->val,1,NULL,NULL,(yyvsp[-3].no)->varname,-1,NULL,NULL);
}
#line 1960 "y.tab.c"
    break;

  case 41: /* Gid: ID '[' NUM ']' '[' NUM ']'  */
#line 278 "expl.y"
                            {
  G_Install((yyvsp[-6].no)->varname,NULL,(yyvsp[-4].no)->val,(yyvsp[-1].no)->val,NULL,-1);
   (yyval.no) = createNode(-1,(yyvsp[-4].no)->val,(yyvsp[-1].no)->val,NULL,NULL,(yyvsp[-6].no)->varname,-1,NULL,NULL);
}
#line 1969 "y.tab.c"
    break;

  case 42: /* Gid: MUL ID  */
#line 282 "expl.y"
         { //this is for Pointer
  G_Install((yyvsp[0].no)->varname,TLookup("pointer"),1,-1,NULL,-1);
  (yyval.no) = createNode(-1,1,-1,TLookup("pointer"),NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
}
#line 1978 "y.tab.c"
    break;

  case 43: /* Gid: ID '(' ParamList ')'  */
#line 286 "expl.y"
                       {
  G_Install((yyvsp[-3].no)->varname,NULL,1,-1,(yyvsp[-1].plist),flabel++);
  (yyval.no) = createNode(-1,1,-1,NULL,NULL,(yyvsp[-3].no)->varname,-1,NULL,NULL);
}
#line 1987 "y.tab.c"
    break;

  case 44: /* Gid: ID '(' ')'  */
#line 290 "expl.y"
            {
  G_Install((yyvsp[-2].no)->varname,NULL,1,-1,NULL,flabel++);
  (yyval.no) = createNode(-1,1,-1,NULL,NULL,(yyvsp[-2].no)->varname,-1,NULL,NULL);
}
#line 1996 "y.tab.c"
    break;

  case 47: /* Fdef: Type ID '(' ParamList ')' '{' LdeclBlock Body '}'  */
#line 301 "expl.y"
                                                         {
  char* definition_type = (yyvsp[-8].string);
  struct ParamList* defintion_param_list = (yyvsp[-5].plist);
  struct Gsymbol* Gentry = (yyvsp[-7].no)->Gentry;
  struct Memberfunclist* member_function ;
  int is_member_function =0;
  self_binded=0;
  if(cptr){
     member_function = Class_Mlookup(cptr,(yyvsp[-7].no)->varname,(yyvsp[-5].plist));
     if(member_function==NULL){
      printf("ERROR: member function (%s) not declared in class %s\n",(yyvsp[-7].no)->varname,cptr->name);
      return -1;
     }
     L_Install("self",TLookup("null"),1);
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
#line 2075 "y.tab.c"
    break;

  case 48: /* Fdef: Type ID '(' ')' '{' LdeclBlock Body '}'  */
#line 375 "expl.y"
                                         {
  char* definition_type = (yyvsp[-7].string);
  struct Gsymbol* Gentry = GLookUp((yyvsp[-6].no)->varname);
  struct Memberfunclist* member_function;
  int is_member_function =0;
  self_binded =0;
  if(cptr){
     member_function = Class_Mlookup(cptr,(yyvsp[-6].no)->varname,NULL);
     if(member_function==NULL){
      printf("ERROR: member function (%s) not declared in class %s\n",(yyvsp[-6].no)->varname,cptr->name);
      return -1;
     }
     L_Install("self",TLookup("null"),1);
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
#line 2141 "y.tab.c"
    break;

  case 49: /* ParamList: ParamList ',' Param  */
#line 437 "expl.y"
                                {
  (yyval.plist) = append_param_list((yyvsp[-2].plist),(yyvsp[0].plist));
}
#line 2149 "y.tab.c"
    break;

  case 50: /* ParamList: Param  */
#line 440 "expl.y"
         {
  (yyval.plist) = (yyvsp[0].plist);
}
#line 2157 "y.tab.c"
    break;

  case 51: /* Param: Type ID  */
#line 444 "expl.y"
                {
  Typetable* param_type = TLookup((yyvsp[-1].string));
  L_Install((yyvsp[0].no)->varname,param_type,1);
  (yyval.plist) = create_param_list(param_type,(yyvsp[0].no)->varname);
}
#line 2167 "y.tab.c"
    break;

  case 52: /* Param: Type MUL ID  */
#line 449 "expl.y"
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
#line 2188 "y.tab.c"
    break;

  case 53: /* MainBlock: INT MAIN '(' ')' '{' LdeclBlock Body '}'  */
#line 470 "expl.y"
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
    print_GSymbolTable();
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
#line 2215 "y.tab.c"
    break;

  case 54: /* LdeclBlock: DECL LdecList ENDDECL  */
#line 498 "expl.y"
                                   {local_binding=1;}
#line 2221 "y.tab.c"
    break;

  case 55: /* LdeclBlock: DECL ENDDECL  */
#line 499 "expl.y"
               {local_binding=1;}
#line 2227 "y.tab.c"
    break;

  case 56: /* LdeclBlock: %empty  */
#line 500 "expl.y"
             {}
#line 2233 "y.tab.c"
    break;

  case 57: /* LdecList: LdecList Ldecl  */
#line 502 "expl.y"
                           {}
#line 2239 "y.tab.c"
    break;

  case 58: /* LdecList: Ldecl  */
#line 502 "expl.y"
                                      {}
#line 2245 "y.tab.c"
    break;

  case 59: /* Ldecl: Type IdList ';'  */
#line 504 "expl.y"
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
#line 2285 "y.tab.c"
    break;

  case 60: /* IdList: IdList ',' Lid  */
#line 540 "expl.y"
                        {
  struct tnode* IDNode = (yyvsp[0].no);
  struct tnode* temp = (yyvsp[-2].no);
  while (temp->right != NULL) {  
      temp = temp->right;
  }
  temp->right = IDNode;  
  (yyval.no) = (yyvsp[-2].no); 
}
#line 2299 "y.tab.c"
    break;

  case 62: /* Lid: ID  */
#line 550 "expl.y"
        {
   (yyval.no)=createNode(-1,1,-1,NULL,NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
}
#line 2307 "y.tab.c"
    break;

  case 63: /* Lid: MUL ID  */
#line 553 "expl.y"
         { //this is for Pointer
  (yyval.no) = createNode(-1,1,-1,TLookup("pointer"),NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
}
#line 2315 "y.tab.c"
    break;

  case 64: /* Body: PBEGIN Slist ReturnStmt END  */
#line 559 "expl.y"
                                  {(yyval.no) = createNode(-1,1,1,NULL,NULL,NULL,CONNECTOR_NODE,(yyvsp[-2].no),(yyvsp[-1].no));}
#line 2321 "y.tab.c"
    break;

  case 65: /* Body: PBEGIN ReturnStmt END  */
#line 560 "expl.y"
                        {(yyval.no)=(yyvsp[-1].no);}
#line 2327 "y.tab.c"
    break;

  case 66: /* Type: INT  */
#line 562 "expl.y"
           {(yyval.string) = "int";}
#line 2333 "y.tab.c"
    break;

  case 67: /* Type: STR  */
#line 563 "expl.y"
      {(yyval.string) = "str";}
#line 2339 "y.tab.c"
    break;

  case 68: /* Type: ID  */
#line 564 "expl.y"
     {
    char* type_name = (yyvsp[0].no)->varname;
    if(TLookup((yyvsp[0].no)->varname)==NULL && Clookup((yyvsp[0].no)->varname)==NULL){
      printf("ERROR : The Following type/class is not user-defined %s\n",type_name);
      return -1;
    }
    (yyval.string)=(yyvsp[0].no)->varname;
  }
#line 2352 "y.tab.c"
    break;

  case 69: /* Slist: Slist Stmt  */
#line 573 "expl.y"
                   {
  (yyval.no)=createNode(-1,1,1,NULL,NULL,NULL,CONNECTOR_NODE,(yyvsp[-1].no),(yyvsp[0].no));
}
#line 2360 "y.tab.c"
    break;

  case 70: /* Slist: Stmt  */
#line 576 "expl.y"
       {(yyval.no)=(yyvsp[0].no);}
#line 2366 "y.tab.c"
    break;

  case 71: /* Stmt: InputStmt  */
#line 579 "expl.y"
                 {(yyval.no)=(yyvsp[0].no);}
#line 2372 "y.tab.c"
    break;

  case 72: /* Stmt: OutputStmt  */
#line 580 "expl.y"
             {(yyval.no)=(yyvsp[0].no);}
#line 2378 "y.tab.c"
    break;

  case 73: /* Stmt: AsgStmt  */
#line 581 "expl.y"
         {(yyval.no)=(yyvsp[0].no);}
#line 2384 "y.tab.c"
    break;

  case 74: /* Stmt: Ifstmt  */
#line 582 "expl.y"
        {(yyval.no)=(yyvsp[0].no);}
#line 2390 "y.tab.c"
    break;

  case 75: /* Stmt: WhileStmt  */
#line 583 "expl.y"
           {(yyval.no)=(yyvsp[0].no);}
#line 2396 "y.tab.c"
    break;

  case 76: /* Stmt: DoWhileStmt  */
#line 584 "expl.y"
             {(yyval.no)=(yyvsp[0].no);}
#line 2402 "y.tab.c"
    break;

  case 77: /* Stmt: BreakStmt  */
#line 585 "expl.y"
           {(yyval.no)=(yyvsp[0].no);}
#line 2408 "y.tab.c"
    break;

  case 78: /* Stmt: ContinueStmt  */
#line 586 "expl.y"
              {(yyval.no)=(yyvsp[0].no);}
#line 2414 "y.tab.c"
    break;

  case 79: /* Stmt: ReturnStmt  */
#line 587 "expl.y"
            {(yyval.no)=(yyvsp[0].no);}
#line 2420 "y.tab.c"
    break;

  case 80: /* Stmt: BreakpointStmt  */
#line 588 "expl.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 2426 "y.tab.c"
    break;

  case 81: /* Stmt: initializeStmt  */
#line 589 "expl.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 2432 "y.tab.c"
    break;

  case 82: /* Stmt: AllocStmt  */
#line 590 "expl.y"
           {(yyval.no)=(yyvsp[0].no);}
#line 2438 "y.tab.c"
    break;

  case 83: /* Stmt: FreeStmt  */
#line 591 "expl.y"
          {(yyval.no)=(yyvsp[0].no);}
#line 2444 "y.tab.c"
    break;

  case 84: /* Stmt: NewStmt  */
#line 592 "expl.y"
         {(yyval.no)=(yyvsp[0].no);}
#line 2450 "y.tab.c"
    break;

  case 85: /* InputStmt: READ '(' Identifier ')' ';'  */
#line 599 "expl.y"
                                        {
    // printf("Reading");
    (yyval.no) = makeNonLeafNode((yyvsp[-2].no),NULL,READ_NODE,"_");
  }
#line 2459 "y.tab.c"
    break;

  case 86: /* OutputStmt: WRITE '(' expr ')' ';'  */
#line 604 "expl.y"
                                    {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),NULL,WRITE_NODE,"_");}
#line 2465 "y.tab.c"
    break;

  case 87: /* AsgStmt: Identifier '=' expr ';'  */
#line 606 "expl.y"
                                  {
  // printf("%s\n",$1->Gentry->name);
  // printf("%s\n",$1->varname);
  (yyval.no) = makeNonLeafNode((yyvsp[-3].no),(yyvsp[-1].no),OPERATOR_NODE,"=");
  }
#line 2475 "y.tab.c"
    break;

  case 88: /* BreakStmt: BREAK ';'  */
#line 612 "expl.y"
                      {(yyval.no)=makeNonLeafNode(NULL,NULL,BREAK_NODE,"_");}
#line 2481 "y.tab.c"
    break;

  case 89: /* BreakpointStmt: BREAKPOINT ';'  */
#line 614 "expl.y"
                                {(yyval.no)=makeNonLeafNode(NULL,NULL,BREAKPOINT_NODE,"_");}
#line 2487 "y.tab.c"
    break;

  case 90: /* ContinueStmt: CONTINUE ';'  */
#line 616 "expl.y"
                            {(yyval.no)=makeNonLeafNode(NULL,NULL,CONTINUE_NODE,"_");}
#line 2493 "y.tab.c"
    break;

  case 91: /* Ifstmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF ';'  */
#line 618 "expl.y"
                                                         {
  struct tnode* if_else_node = makeNonLeafNode((yyvsp[-7].no),(yyvsp[-4].no),IF_ELSE_NODE,"_");
  if_else_node->middle = (yyvsp[-2].no);
  (yyval.no) = if_else_node;
}
#line 2503 "y.tab.c"
    break;

  case 92: /* Ifstmt: IF '(' expr ')' THEN Slist ENDIF ';'  */
#line 623 "expl.y"
                                       {(yyval.no) = makeNonLeafNode((yyvsp[-5].no),(yyvsp[-2].no),IF_NODE,"_");}
#line 2509 "y.tab.c"
    break;

  case 93: /* WhileStmt: WHILE '(' expr ')' DO Slist ENDWHILE ';'  */
#line 626 "expl.y"
                                                     {(yyval.no) = makeNonLeafNode((yyvsp[-5].no),(yyvsp[-2].no),WHILE_NODE,"_");}
#line 2515 "y.tab.c"
    break;

  case 94: /* DoWhileStmt: DO Slist WHILE '(' expr ')' ';'  */
#line 628 "expl.y"
                                              {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[-5].no),DO_WHILE_NODE,"_");}
#line 2521 "y.tab.c"
    break;

  case 95: /* ReturnStmt: RETURN expr ';'  */
#line 630 "expl.y"
                             {(yyval.no) = makeNonLeafNode((yyvsp[-1].no),NULL,RETURN_NODE,"_");}
#line 2527 "y.tab.c"
    break;

  case 96: /* initializeStmt: Identifier '=' INITIALIZE '(' ')' ';'  */
#line 632 "expl.y"
                                                       {(yyval.no) = makeNonLeafNode((yyvsp[-5].no),NULL,INITIALIZE_NODE,"_");}
#line 2533 "y.tab.c"
    break;

  case 97: /* AllocStmt: Identifier '=' ALLOC '(' ')' ';'  */
#line 634 "expl.y"
                                             {(yyval.no)=makeNonLeafNode((yyvsp[-5].no),NULL,ALLOC_NODE,"_");}
#line 2539 "y.tab.c"
    break;

  case 98: /* FreeStmt: FREE '(' Identifier ')' ';'  */
#line 636 "expl.y"
                                       {(yyval.no)=makeNonLeafNode((yyvsp[-2].no),NULL,FREE_NODE,"_");}
#line 2545 "y.tab.c"
    break;

  case 99: /* NewStmt: Identifier '=' NEW '(' Type ')' ';'  */
#line 639 "expl.y"
                                              {
   
    if((yyvsp[-6].no)->Ctype==NULL){
      
      printf("ERROR: syntax error NEW assignment to non-class type\n");
      return -1;
    }
    
    struct Classtable* arguement_class = Clookup((yyvsp[-2].string));
    // printf("%s\n",arguement_class->name);
    
    if(!IsDescendant(arguement_class,(yyvsp[-6].no)->Ctype)){
      printf("ERROR: class type mismatch in NEW statement\n");
      return -1;
    }
    //arguement node is created for checking run-time binding ....
    struct tnode* arguement_node = makeNonLeafNode(NULL,NULL,NEW_ARG_NODE,"_");
    arguement_node->Ctype = arguement_class;
    (yyval.no)=makeNonLeafNode((yyvsp[-6].no),arguement_node,NEW_NODE,"_");
  }
#line 2570 "y.tab.c"
    break;

  case 100: /* expr: expr PLUS expr  */
#line 662 "expl.y"
                       {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"+");}
#line 2576 "y.tab.c"
    break;

  case 101: /* expr: expr MINUS expr  */
#line 663 "expl.y"
                      {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"-");}
#line 2582 "y.tab.c"
    break;

  case 102: /* expr: expr MUL expr  */
#line 664 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"*");}
#line 2588 "y.tab.c"
    break;

  case 103: /* expr: expr DIV expr  */
#line 665 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"/");}
#line 2594 "y.tab.c"
    break;

  case 104: /* expr: expr MOD expr  */
#line 666 "expl.y"
                  {(yyval.no)=makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"%");}
#line 2600 "y.tab.c"
    break;

  case 105: /* expr: expr LT expr  */
#line 667 "expl.y"
                 {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"<");}
#line 2606 "y.tab.c"
    break;

  case 106: /* expr: expr LTE expr  */
#line 668 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"<=");}
#line 2612 "y.tab.c"
    break;

  case 107: /* expr: expr GT expr  */
#line 669 "expl.y"
                 {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,">");}
#line 2618 "y.tab.c"
    break;

  case 108: /* expr: expr GTE expr  */
#line 670 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,">=");}
#line 2624 "y.tab.c"
    break;

  case 109: /* expr: expr EQUALS expr  */
#line 671 "expl.y"
                     {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"==");}
#line 2630 "y.tab.c"
    break;

  case 110: /* expr: expr NOTEQUALS expr  */
#line 672 "expl.y"
                        {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"!=");}
#line 2636 "y.tab.c"
    break;

  case 111: /* expr: expr AND expr  */
#line 673 "expl.y"
                  {(yyval.no)=makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"&&");}
#line 2642 "y.tab.c"
    break;

  case 112: /* expr: expr OR expr  */
#line 674 "expl.y"
                 {(yyval.no)=makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"||");}
#line 2648 "y.tab.c"
    break;

  case 113: /* expr: ID '(' ArgList ')'  */
#line 675 "expl.y"
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
#line 2672 "y.tab.c"
    break;

  case 114: /* expr: '(' expr ')'  */
#line 694 "expl.y"
                  {(yyval.no) = (yyvsp[-1].no);}
#line 2678 "y.tab.c"
    break;

  case 115: /* expr: NUM  */
#line 695 "expl.y"
          {(yyval.no) = (yyvsp[0].no);}
#line 2684 "y.tab.c"
    break;

  case 116: /* expr: STRING  */
#line 696 "expl.y"
           {(yyval.no)=(yyvsp[0].no);}
#line 2690 "y.tab.c"
    break;

  case 117: /* expr: Identifier  */
#line 697 "expl.y"
               {(yyval.no)=(yyvsp[0].no);}
#line 2696 "y.tab.c"
    break;

  case 118: /* expr: PNULL  */
#line 698 "expl.y"
          {(yyval.no)=(yyvsp[0].no);}
#line 2702 "y.tab.c"
    break;

  case 119: /* expr: FieldFunction  */
#line 699 "expl.y"
                  {
    (yyval.no) = (yyvsp[0].no);
  }
#line 2710 "y.tab.c"
    break;

  case 120: /* ArgList: ArgList ',' expr  */
#line 704 "expl.y"
                           {
  (yyval.arglist)=append_arglist((yyvsp[-2].arglist),(yyvsp[0].no));
}
#line 2718 "y.tab.c"
    break;

  case 121: /* ArgList: expr  */
#line 707 "expl.y"
       {
  (yyval.arglist)=create_arglist((yyvsp[0].no));
}
#line 2726 "y.tab.c"
    break;

  case 122: /* ArgList: %empty  */
#line 710 "expl.y"
  {(yyval.arglist)=NULL;}
#line 2732 "y.tab.c"
    break;

  case 123: /* Identifier: ID  */
#line 712 "expl.y"
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
#line 2751 "y.tab.c"
    break;

  case 124: /* Identifier: ID '[' index ']'  */
#line 726 "expl.y"
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
#line 2768 "y.tab.c"
    break;

  case 125: /* Identifier: ID '[' index ']' '[' index ']'  */
#line 738 "expl.y"
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
#line 2785 "y.tab.c"
    break;

  case 126: /* Identifier: MUL ID  */
#line 750 "expl.y"
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
#line 2812 "y.tab.c"
    break;

  case 127: /* Identifier: '&' Identifier  */
#line 772 "expl.y"
                 {
    struct tnode* IDNode = (yyvsp[0].no);
   
    int table_type = check_identifier(IDNode);
    if (table_type == 1) {//GLOBAL variable
        struct tnode* addressNode = makeNonLeafNode(IDNode, NULL, ADDRESS_NODE, "_");
        struct Gsymbol* Gentry = IDNode->Gentry;
        if(IDNode->nodetype==ARRAY_NODE){
          Gentry=IDNode->left->Gentry;
          // printf("%d\n",IDNode->right->nodetype);
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
#line 2840 "y.tab.c"
    break;

  case 128: /* Identifier: Field  */
#line 795 "expl.y"
        {
  struct tnode* field_node = makeNonLeafNode((yyvsp[0].no), NULL, FIELD_NODE, "_");
  field_validifier(field_node);  
  (yyval.no) = field_node;
}
#line 2850 "y.tab.c"
    break;

  case 129: /* Field: Field '.' ID  */
#line 802 "expl.y"
                     {
  struct tnode* temp = (yyvsp[-2].no);
  while(temp->left!=NULL){
    temp=temp->left;
  }
  temp->left=(yyvsp[0].no);
  (yyval.no)=(yyvsp[-2].no);
}
#line 2863 "y.tab.c"
    break;

  case 130: /* Field: ID '[' index ']' '.' ID  */
#line 811 "expl.y"
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
#line 2882 "y.tab.c"
    break;

  case 131: /* Field: ID '.' ID  */
#line 825 "expl.y"
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
#line 2897 "y.tab.c"
    break;

  case 132: /* Field: SELF '.' ID  */
#line 835 "expl.y"
              {
  if(!cptr){//self is called outside the class definition
    printf("ERROR: \"self\" keyword is used under class definition\n");
    return -1;
  }

  struct tnode* self_node= makeNonLeafNode((yyvsp[0].no),NULL,SELF_NODE,"_");
  self_node->Ctype = cptr;
  (yyval.no)=self_node;
}
#line 2912 "y.tab.c"
    break;

  case 133: /* FieldFunction: ID '.' ID '(' ArgList ')'  */
#line 847 "expl.y"
                                         {
  struct tnode* function_node = makeNonLeafNode((yyvsp[-3].no),(yyvsp[-5].no),FUNCTION_NODE,"_");

  check_identifier((yyvsp[-5].no));
  // printf("before arg to params\n");
  struct ParamList* argParams = Convert_arg_to_params((yyvsp[-1].arglist));
  // printf("after arg to params\n");
  struct Memberfunclist* member_function = Class_Mlookup((yyvsp[-5].no)->Ctype,(yyvsp[-3].no)->varname,argParams);
  // printf("flabel: %d\n",member_function->Flabel);
  if(member_function==NULL){
    printf("ERROR: no such method exists for class %s\n",(yyvsp[-5].no)->Ctype->name);
    return -1;
  }
  function_node->argList =(yyvsp[-1].arglist);
  function_node->type = member_function->type; 
  function_node->varname = strdup((yyvsp[-3].no)->varname);
  (yyval.no)=function_node;
}
#line 2935 "y.tab.c"
    break;

  case 134: /* FieldFunction: SELF '.' ID '(' ArgList ')'  */
#line 865 "expl.y"
                             {
  if(!cptr){
    printf("ERROR: \"self\" keyword is used under class definition\n");
    return -1;
  }
  struct tnode* self_node = makeNonLeafNode(NULL,NULL,SELF_NODE,"_");
  struct tnode* field_node = makeNonLeafNode(self_node,NULL,FIELD_NODE,"_");
  self_node->Ctype = cptr;
  field_node->Ctype= cptr;
  struct tnode* function_node = makeNonLeafNode((yyvsp[-3].no),field_node,FUNCTION_NODE,"_");
  struct ParamList* argParams = Convert_arg_to_params((yyvsp[-1].arglist));
  struct Memberfunclist* member_function = Class_Mlookup(cptr,(yyvsp[-3].no)->varname,argParams);
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
#line 2962 "y.tab.c"
    break;

  case 135: /* FieldFunction: Field '.' ID '(' ArgList ')'  */
#line 887 "expl.y"
                              {
  struct tnode* field_node = makeNonLeafNode((yyvsp[-5].no), NULL, FIELD_NODE, "_");
  field_validifier(field_node);  
  struct tnode* function_node = makeNonLeafNode((yyvsp[-3].no),field_node,FUNCTION_NODE,"_");
  struct ParamList* argParams = Convert_arg_to_params((yyvsp[-1].arglist));
  struct Memberfunclist* member_function = Class_Mlookup(field_node->Ctype,(yyvsp[-3].no)->varname,argParams);
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
#line 2983 "y.tab.c"
    break;

  case 136: /* index: expr  */
#line 903 "expl.y"
             {
    if(strcmp((yyvsp[0].no)->type->name,"int")!=0){
      printf("ERROR:indexing by a non-int type \n");
      return -1;
    }
    (yyval.no)=(yyvsp[0].no);
  }
#line 2995 "y.tab.c"
    break;


#line 2999 "y.tab.c"

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

#line 912 "expl.y"


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
