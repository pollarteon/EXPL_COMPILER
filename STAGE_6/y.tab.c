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
  YYSYMBOL_54_ = 54,                       /* ','  */
  YYSYMBOL_55_ = 55,                       /* '['  */
  YYSYMBOL_56_ = 56,                       /* ']'  */
  YYSYMBOL_57_ = 57,                       /* '('  */
  YYSYMBOL_58_ = 58,                       /* ')'  */
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
  YYSYMBOL_GDeclBlock = 70,                /* GDeclBlock  */
  YYSYMBOL_GdeclList = 71,                 /* GdeclList  */
  YYSYMBOL_Gdecl = 72,                     /* Gdecl  */
  YYSYMBOL_GidList = 73,                   /* GidList  */
  YYSYMBOL_Gid = 74,                       /* Gid  */
  YYSYMBOL_FdefBlock = 75,                 /* FdefBlock  */
  YYSYMBOL_Fdef = 76,                      /* Fdef  */
  YYSYMBOL_ParamList = 77,                 /* ParamList  */
  YYSYMBOL_Param = 78,                     /* Param  */
  YYSYMBOL_MainBlock = 79,                 /* MainBlock  */
  YYSYMBOL_LdeclBlock = 80,                /* LdeclBlock  */
  YYSYMBOL_LdecList = 81,                  /* LdecList  */
  YYSYMBOL_Ldecl = 82,                     /* Ldecl  */
  YYSYMBOL_IdList = 83,                    /* IdList  */
  YYSYMBOL_Lid = 84,                       /* Lid  */
  YYSYMBOL_Body = 85,                      /* Body  */
  YYSYMBOL_Type = 86,                      /* Type  */
  YYSYMBOL_Slist = 87,                     /* Slist  */
  YYSYMBOL_Stmt = 88,                      /* Stmt  */
  YYSYMBOL_InputStmt = 89,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 90,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 91,                   /* AsgStmt  */
  YYSYMBOL_BreakStmt = 92,                 /* BreakStmt  */
  YYSYMBOL_BreakpointStmt = 93,            /* BreakpointStmt  */
  YYSYMBOL_ContinueStmt = 94,              /* ContinueStmt  */
  YYSYMBOL_Ifstmt = 95,                    /* Ifstmt  */
  YYSYMBOL_WhileStmt = 96,                 /* WhileStmt  */
  YYSYMBOL_DoWhileStmt = 97,               /* DoWhileStmt  */
  YYSYMBOL_ReturnStmt = 98,                /* ReturnStmt  */
  YYSYMBOL_initializeStmt = 99,            /* initializeStmt  */
  YYSYMBOL_AllocStmt = 100,                /* AllocStmt  */
  YYSYMBOL_FreeStmt = 101,                 /* FreeStmt  */
  YYSYMBOL_expr = 102,                     /* expr  */
  YYSYMBOL_ArgList = 103,                  /* ArgList  */
  YYSYMBOL_Identifier = 104,               /* Identifier  */
  YYSYMBOL_Field = 105,                    /* Field  */
  YYSYMBOL_index = 106                     /* index  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYLAST   469

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  245

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
      57,    58,     2,     2,    54,     2,    61,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    53,
       2,    59,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    55,     2,    56,     2,     2,     2,     2,     2,     2,
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
       0,    49,    49,    50,    51,    57,    58,    61,    62,    65,
      98,    99,   102,   114,   115,   116,   123,   124,   126,   126,
     128,   157,   165,   167,   171,   175,   179,   183,   187,   196,
     196,   198,   248,   291,   294,   298,   303,   324,   350,   351,
     352,   354,   354,   356,   388,   396,   398,   401,   407,   408,
     410,   411,   412,   421,   424,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   445,   450,
     452,   457,   459,   461,   463,   468,   471,   473,   475,   477,
     479,   481,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   515,   534,   535,   536,
     537,   538,   541,   544,   548,   561,   573,   585,   607,   629,
     663,   671,   683,   693
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
  "STRING", "END", "ID", "PNULL", "'{'", "'}'", "';'", "','", "'['", "']'",
  "'('", "')'", "'='", "'&'", "'.'", "$accept", "program", "TypeDefBlock",
  "TypeDefList", "TypeDef", "FieldDeclList", "FieldDecl", "TypeName",
  "GDeclBlock", "GdeclList", "Gdecl", "GidList", "Gid", "FdefBlock",
  "Fdef", "ParamList", "Param", "MainBlock", "LdeclBlock", "LdecList",
  "Ldecl", "IdList", "Lid", "Body", "Type", "Slist", "Stmt", "InputStmt",
  "OutputStmt", "AsgStmt", "BreakStmt", "BreakpointStmt", "ContinueStmt",
  "Ifstmt", "WhileStmt", "DoWhileStmt", "ReturnStmt", "initializeStmt",
  "AllocStmt", "FreeStmt", "expr", "ArgList", "Identifier", "Field",
  "index", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-102)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -25,   -24,    38,    40,    35,   -27,  -102,  -102,   104,    79,
     -18,  -102,    83,  -102,  -102,  -102,  -102,  -102,  -102,   146,
    -102,    -1,    62,    79,   -18,  -102,  -102,    71,  -102,  -102,
    -102,    66,  -102,    76,  -102,  -102,    87,   123,    77,  -102,
      86,  -102,  -102,    84,  -102,  -102,   133,  -102,   111,   -13,
    -102,    -1,   136,    63,  -102,   107,  -102,    70,  -102,    14,
    -102,   160,   145,    88,   147,   154,  -102,   169,  -102,   152,
     211,   160,   174,   196,  -102,  -102,  -102,   168,  -102,    15,
     324,   191,   211,   160,   192,  -102,  -102,   198,  -102,   117,
    -102,   200,   194,   195,   201,   202,   324,   207,   208,   112,
     232,   229,   -34,     2,   324,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,   249,  -102,  -102,  -102,   251,
     253,  -102,   267,   211,  -102,  -102,  -102,    15,  -102,     2,
     112,   112,   112,   327,  -102,  -102,  -102,  -102,  -102,   189,
    -102,   112,   374,  -102,  -102,     2,   112,   262,  -102,  -102,
     272,  -102,    -3,   273,  -102,   271,  -102,   266,    85,   187,
     209,   268,     9,   217,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,  -102,   269,   418,
     270,  -102,  -102,   284,   287,   396,  -102,  -102,   277,   292,
     333,   322,   112,  -102,   418,   110,  -102,    93,    93,  -102,
    -102,  -102,   250,   440,   296,   296,   296,   296,   447,   447,
     295,    55,   297,   298,  -102,  -102,  -102,   324,   324,   259,
     112,  -102,  -102,   112,   310,   309,   311,   140,   279,   -20,
     418,   312,  -102,  -102,  -102,   324,   314,   316,  -102,  -102,
     282,  -102,  -102,   317,  -102
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,     0,     0,     0,     0,     0,     8,     1,     0,     0,
       0,     4,     0,     5,     7,    17,    50,    51,    52,     0,
      19,     0,     0,    50,     0,    30,     3,     0,    13,    14,
      15,     0,    11,     0,    16,    18,     0,    23,     0,    22,
       0,    29,     2,     0,     9,    10,     0,    26,     0,     0,
      20,     0,     0,     0,    12,     0,    28,     0,    34,     0,
      21,    40,     0,     0,    24,     0,    27,     0,    35,     0,
       0,    40,     0,     0,    33,    36,    39,     0,    42,     0,
       0,     0,     0,    40,     0,    38,    41,     0,    46,     0,
      45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   104,     0,     0,    54,    55,    56,    57,    61,
      64,    62,    58,    59,    60,    63,    65,    66,    67,     0,
     109,    37,     0,     0,    25,    47,    43,     0,   107,     0,
       0,     0,     0,     0,    63,    71,    73,    98,    99,   104,
     101,     0,     0,   100,    72,     0,     0,     0,   108,    53,
      63,    49,     0,     0,    32,     0,    44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     0,   113,
       0,   112,    48,     0,     0,     0,   110,    31,     0,     0,
       0,     0,     0,    95,   103,     0,    97,    82,    83,    84,
      85,    86,    94,    93,    87,    89,    88,    90,    91,    92,
       0,   105,     0,     0,    70,    68,    69,     0,     0,     0,
       0,    96,    81,     0,     0,     0,     0,     0,     0,     0,
     102,     0,   111,    80,    79,     0,     0,     0,    77,   106,
       0,    75,    76,     0,    74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -102,  -102,  -102,  -102,   360,  -102,   340,  -102,  -102,  -102,
     353,  -102,   323,  -102,   351,   329,   318,     5,   -11,  -102,
     308,  -102,   261,   -71,    18,   -95,  -101,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,   -74,  -102,  -102,  -102,
     -91,  -102,   -80,  -102,   163
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     5,     6,    31,    32,    33,    10,    19,
      20,    38,    39,    24,    25,    57,    58,    11,    70,    77,
      78,    89,    90,    81,    59,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   134,   116,   117,   118,
     179,   195,   143,   120,   180
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     119,   133,    91,   149,    36,   218,   115,    91,   142,    13,
       1,   122,    23,    17,    91,    26,   119,    16,    17,    67,
      87,   146,     4,   148,   119,     4,    21,   147,    27,    42,
     150,    18,   149,   238,   183,   184,    18,    21,     7,   158,
     159,   160,    27,   137,   138,    56,   139,   140,    37,   157,
     163,   102,   155,   119,   141,   137,   138,   103,   139,   140,
      82,   185,   103,    68,    88,   178,   141,   193,     8,   103,
       9,   194,   123,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,    12,    79,   164,   165,
     166,   167,   168,    16,    17,    79,    28,    29,   166,   167,
     168,   219,   169,   170,   171,   172,   173,   174,   175,   176,
     223,    22,    18,    28,    29,    30,   224,    91,    44,    40,
      43,    62,   227,   228,    65,    46,   149,   149,    66,   230,
      50,    51,    30,    15,    16,    17,    47,   119,   119,   149,
     240,    53,    65,   189,    52,    91,    72,   119,   119,    92,
      93,    94,   235,    18,   236,   119,    95,    55,   137,   138,
     119,   139,   140,    64,   220,    96,    97,    98,   221,   141,
     126,   127,   103,    99,   100,    34,    16,    17,    48,   101,
      49,    76,    16,    17,    16,    17,    54,    61,    69,   102,
     164,   165,   166,   167,   168,    18,    71,    85,    16,    17,
     103,    18,    73,    18,   169,   170,   171,   172,   173,   174,
     175,   176,   164,   165,   166,   167,   168,    18,    75,    80,
     164,   165,   166,   167,   168,    83,   169,   170,   171,   172,
     173,   174,   175,   176,   169,   170,   171,   172,   173,   174,
     175,   176,    84,   121,   146,   190,   162,   125,   124,   128,
     147,   129,   130,   164,   165,   166,   167,   168,   131,   132,
     135,   136,   164,   165,   166,   167,   168,   191,   170,   171,
     172,   173,   174,   175,   176,   196,   169,   170,   171,   172,
     173,   174,   175,   176,    91,   144,   145,    91,    92,    93,
      94,    92,    93,    94,   237,    95,   243,   151,    95,   164,
     165,   166,   167,   168,    96,    97,    98,    96,    97,    98,
     152,   181,    99,   100,   153,    99,   100,   229,   101,   154,
     182,   101,   186,   187,   188,   192,   211,   210,   102,    91,
     215,   102,    91,    92,    93,    94,    92,    93,    94,   103,
      95,   212,   103,   161,   213,   216,   217,   218,   222,    96,
      97,    98,    96,    97,    98,   225,   226,    99,   100,   232,
      99,   100,   233,   101,   234,    14,   101,   241,   239,   242,
     244,    45,    35,   102,    60,    41,   102,   164,   165,   166,
     167,   168,    63,    74,   103,    86,   231,   103,   156,     0,
       0,   169,   170,   171,   172,   173,   174,   175,   176,   164,
     165,   166,   167,   168,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   169,   170,   171,   172,   173,   174,   175,
     176,   164,   165,   166,   167,   168,     0,   177,     0,     0,
       0,     0,     0,     0,     0,   169,   170,   171,   172,   173,
     174,   175,   176,   164,   165,   166,   167,   168,     0,   214,
     164,   165,   166,   167,   168,     0,     0,     0,     0,   171,
     172,   173,   174,   175,   176,     0,   171,   172,   173,   174
};

static const yytype_int16 yycheck[] =
{
      80,    96,     5,   104,     5,    25,    80,     5,    99,    36,
      35,    82,    30,    31,     5,    10,    96,    30,    31,     5,
       5,    55,    49,   103,   104,    49,     8,    61,    10,    24,
     104,    49,   133,    53,    37,    38,    49,    19,     0,   130,
     131,   132,    24,    46,    47,    58,    49,    50,    49,   129,
     141,    49,   123,   133,    57,    46,    47,    60,    49,    50,
      71,   152,    60,    49,    49,   145,    57,    58,    28,    60,
      30,   162,    83,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,    51,    69,     3,     4,
       5,     6,     7,    30,    31,    77,    30,    31,     5,     6,
       7,   192,    17,    18,    19,    20,    21,    22,    23,    24,
      55,    32,    49,    30,    31,    49,    61,     5,    52,    57,
      49,    58,   217,   218,    54,    49,   227,   228,    58,   220,
      53,    54,    49,    29,    30,    31,    49,   217,   218,   240,
     235,    57,    54,    58,    58,     5,    58,   227,   228,     9,
      10,    11,    12,    49,    14,   235,    16,    46,    46,    47,
     240,    49,    50,    56,    54,    25,    26,    27,    58,    57,
      53,    54,    60,    33,    34,    29,    30,    31,    55,    39,
      57,    29,    30,    31,    30,    31,    53,    51,    28,    49,
       3,     4,     5,     6,     7,    49,    51,    29,    30,    31,
      60,    49,    55,    49,    17,    18,    19,    20,    21,    22,
      23,    24,     3,     4,     5,     6,     7,    49,    49,     8,
       3,     4,     5,     6,     7,    51,    17,    18,    19,    20,
      21,    22,    23,    24,    17,    18,    19,    20,    21,    22,
      23,    24,    46,    52,    55,    58,    57,    49,    56,    49,
      61,    57,    57,     3,     4,     5,     6,     7,    57,    57,
      53,    53,     3,     4,     5,     6,     7,    58,    18,    19,
      20,    21,    22,    23,    24,    58,    17,    18,    19,    20,
      21,    22,    23,    24,     5,    53,    57,     5,     9,    10,
      11,     9,    10,    11,    15,    16,    14,    48,    16,     3,
       4,     5,     6,     7,    25,    26,    27,    25,    26,    27,
      59,    49,    33,    34,    61,    33,    34,    58,    39,    52,
      48,    39,    49,    52,    58,    57,    56,    58,    49,     5,
      53,    49,     5,     9,    10,    11,     9,    10,    11,    60,
      16,    57,    60,    16,    57,    53,    13,    25,    53,    25,
      26,    27,    25,    26,    27,    58,    58,    33,    34,    49,
      33,    34,    53,    39,    53,     5,    39,    53,    56,    53,
      53,    31,    19,    49,    51,    24,    49,     3,     4,     5,
       6,     7,    53,    65,    60,    77,   223,    60,   127,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,     3,     4,     5,     6,     7,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,     3,     4,     5,     6,     7,    -1,    53,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    24,    -1,    19,    20,    21,    22
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    35,    63,    64,    49,    65,    66,     0,    28,    30,
      70,    79,    51,    36,    66,    29,    30,    31,    49,    71,
      72,    86,    32,    30,    75,    76,    79,    86,    30,    31,
      49,    67,    68,    69,    29,    72,     5,    49,    73,    74,
      57,    76,    79,    49,    52,    68,    49,    49,    55,    57,
      53,    54,    58,    57,    53,    46,    58,    77,    78,    86,
      74,    51,    58,    77,    56,    54,    58,     5,    49,    28,
      80,    51,    58,    55,    78,    49,    29,    81,    82,    86,
       8,    85,    80,    51,    46,    29,    82,     5,    49,    83,
      84,     5,     9,    10,    11,    16,    25,    26,    27,    33,
      34,    39,    49,    60,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   104,
     105,    52,    85,    80,    56,    49,    53,    54,    49,    57,
      57,    57,    57,    87,    98,    53,    53,    46,    47,    49,
      50,    57,   102,   104,    53,    57,    55,    61,   104,    88,
      98,    48,    59,    61,    52,    85,    84,   104,   102,   102,
     102,    16,    57,   102,     3,     4,     5,     6,     7,    17,
      18,    19,    20,    21,    22,    23,    24,    53,   104,   102,
     106,    49,    48,    37,    38,   102,    49,    52,    58,    58,
      58,    58,    57,    58,   102,   103,    58,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
      58,    56,    57,    57,    53,    53,    53,    13,    25,   102,
      54,    58,    53,    55,    61,    58,    58,    87,    87,    58,
     102,   106,    49,    53,    53,    12,    14,    15,    53,    56,
      87,    53,    53,    14,    53
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    63,    63,    64,    64,    65,    65,    66,
      67,    67,    68,    69,    69,    69,    70,    70,    71,    71,
      72,    73,    73,    74,    74,    74,    74,    74,    74,    75,
      75,    76,    76,    77,    77,    78,    78,    79,    80,    80,
      80,    81,    81,    82,    83,    83,    84,    84,    85,    85,
      86,    86,    86,    87,    87,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    89,    90,
      91,    92,    93,    94,    95,    95,    96,    97,    98,    99,
     100,   101,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   103,   103,   104,   104,   104,   104,   104,   104,
     105,   105,   105,   106
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     2,     3,     0,     2,     1,     4,
       2,     1,     3,     1,     1,     1,     3,     2,     2,     1,
       3,     3,     1,     1,     4,     7,     2,     4,     3,     2,
       1,     9,     8,     3,     1,     2,     3,     8,     3,     2,
       0,     2,     1,     3,     3,     1,     1,     2,     4,     3,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     5,
       4,     2,     2,     2,    10,     8,     8,     7,     3,     6,
       6,     5,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     4,     3,     1,     1,
       1,     1,     3,     1,     1,     4,     7,     2,     2,     1,
       3,     6,     3,     1
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
  case 2: /* program: TypeDefBlock GDeclBlock FdefBlock MainBlock  */
#line 49 "expl.y"
                                                    {printf("Program Finished\n");exit(1);}
#line 1541 "y.tab.c"
    break;

  case 3: /* program: TypeDefBlock GDeclBlock MainBlock  */
#line 50 "expl.y"
                                      {printf("Program Finished\n");exit(1);}
#line 1547 "y.tab.c"
    break;

  case 4: /* program: TypeDefBlock MainBlock  */
#line 51 "expl.y"
                          {printf("Program Finished\n");exit(1);}
#line 1553 "y.tab.c"
    break;

  case 5: /* TypeDefBlock: TYPE TypeDefList ENDTYPE  */
#line 57 "expl.y"
                                        {PrintTypeTable();}
#line 1559 "y.tab.c"
    break;

  case 7: /* TypeDefList: TypeDefList TypeDef  */
#line 61 "expl.y"
                                  {}
#line 1565 "y.tab.c"
    break;

  case 8: /* TypeDefList: TypeDef  */
#line 62 "expl.y"
            {}
#line 1571 "y.tab.c"
    break;

  case 9: /* TypeDef: ID '{' FieldDeclList '}'  */
#line 65 "expl.y"
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
#line 1608 "y.tab.c"
    break;

  case 10: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 98 "expl.y"
                                        {(yyval.fieldlist) =Finstall((yyvsp[-1].fieldlist),(yyvsp[0].fieldlist));}
#line 1614 "y.tab.c"
    break;

  case 11: /* FieldDeclList: FieldDecl  */
#line 99 "expl.y"
              {(yyval.fieldlist)=(yyvsp[0].fieldlist);}
#line 1620 "y.tab.c"
    break;

  case 12: /* FieldDecl: TypeName ID ';'  */
#line 102 "expl.y"
                            {
  struct Typetable* type = TLookup((yyvsp[-2].string));
  if(type==NULL){
    type = (struct Typetable*)malloc(sizeof(struct Typetable));
    type->name = strdup((yyvsp[-2].string));
    type->size = -1; //to  indicate that the type was not present in the type table
    type->fields=NULL;
    type->next=NULL;
  }
  (yyval.fieldlist) = Fcreate((yyvsp[-1].no)->varname,0,type);
}
#line 1636 "y.tab.c"
    break;

  case 13: /* TypeName: INT  */
#line 114 "expl.y"
               {(yyval.string)="int";}
#line 1642 "y.tab.c"
    break;

  case 14: /* TypeName: STR  */
#line 115 "expl.y"
        {(yyval.string)="str";}
#line 1648 "y.tab.c"
    break;

  case 15: /* TypeName: ID  */
#line 116 "expl.y"
       {(yyval.string)=(yyvsp[0].no)->varname;}
#line 1654 "y.tab.c"
    break;

  case 16: /* GDeclBlock: DECL GdeclList ENDDECL  */
#line 123 "expl.y"
                                    {print_GSymbolTable();L_cleanup();local_binding=1;param_binding=1;}
#line 1660 "y.tab.c"
    break;

  case 17: /* GDeclBlock: DECL ENDDECL  */
#line 124 "expl.y"
               {}
#line 1666 "y.tab.c"
    break;

  case 18: /* GdeclList: GdeclList Gdecl  */
#line 126 "expl.y"
                            {}
#line 1672 "y.tab.c"
    break;

  case 19: /* GdeclList: Gdecl  */
#line 126 "expl.y"
                                       {}
#line 1678 "y.tab.c"
    break;

  case 20: /* Gdecl: Type GidList ';'  */
#line 128 "expl.y"
                         {
  char* declaration_type = (yyvsp[-2].string);
  struct Typetable* declaration_type_entry = TLookup(declaration_type);
  struct tnode* varList = (yyvsp[-1].no); //varList contains List of variables
  while(varList!=NULL){
    struct Gsymbol* Gentry = GLookUp(varList->varname);
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
    else if(Gentry->type==NULL){
      Gentry->type = declaration_type_entry;
    }
    else{
      printf("ERROR: REDECLARATION OF VARIABLE %s\n",Gentry->name);
      exit(1);
    }
    varList=varList->right;
  }
}
#line 1711 "y.tab.c"
    break;

  case 21: /* GidList: GidList ',' Gid  */
#line 157 "expl.y"
                          {
  struct tnode* IDNode = (yyvsp[0].no);
  struct tnode* temp = (yyvsp[-2].no);
  while (temp->right != NULL) {  
      temp = temp->right;
  }
  temp->right = IDNode;  
  (yyval.no) = (yyvsp[-2].no); 
}
#line 1725 "y.tab.c"
    break;

  case 23: /* Gid: ID  */
#line 167 "expl.y"
        {
  G_Install((yyvsp[0].no)->varname,NULL,1,-1,NULL,-1);
   (yyval.no)=createNode(-1,1,-1,NULL,NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
}
#line 1734 "y.tab.c"
    break;

  case 24: /* Gid: ID '[' NUM ']'  */
#line 171 "expl.y"
                {
  G_Install((yyvsp[-3].no)->varname,NULL,(yyvsp[-1].no)->val,-1,NULL,-1);
  (yyval.no)=createNode(-1,(yyvsp[-1].no)->val,1,NULL,NULL,(yyvsp[-3].no)->varname,-1,NULL,NULL);
}
#line 1743 "y.tab.c"
    break;

  case 25: /* Gid: ID '[' NUM ']' '[' NUM ']'  */
#line 175 "expl.y"
                            {
  G_Install((yyvsp[-6].no)->varname,NULL,(yyvsp[-4].no)->val,(yyvsp[-1].no)->val,NULL,-1);
   (yyval.no) = createNode(-1,(yyvsp[-4].no)->val,(yyvsp[-1].no)->val,NULL,NULL,(yyvsp[-6].no)->varname,-1,NULL,NULL);
}
#line 1752 "y.tab.c"
    break;

  case 26: /* Gid: MUL ID  */
#line 179 "expl.y"
         { //this is for Pointer
  G_Install((yyvsp[0].no)->varname,TLookup("pointer"),1,-1,NULL,-1);
  (yyval.no) = createNode(-1,1,-1,TLookup("pointer"),NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
}
#line 1761 "y.tab.c"
    break;

  case 27: /* Gid: ID '(' ParamList ')'  */
#line 183 "expl.y"
                       {
  G_Install((yyvsp[-3].no)->varname,NULL,1,-1,(yyvsp[-1].plist),flabel++);
  (yyval.no) = createNode(-1,1,-1,NULL,NULL,(yyvsp[-3].no)->varname,-1,NULL,NULL);
}
#line 1770 "y.tab.c"
    break;

  case 28: /* Gid: ID '(' ')'  */
#line 187 "expl.y"
            {
  G_Install((yyvsp[-2].no)->varname,NULL,1,-1,NULL,flabel++);
  (yyval.no) = createNode(-1,1,-1,NULL,NULL,(yyvsp[-2].no)->varname,-1,NULL,NULL);
}
#line 1779 "y.tab.c"
    break;

  case 31: /* Fdef: Type ID '(' ParamList ')' '{' LdeclBlock Body '}'  */
#line 198 "expl.y"
                                                         {
  char* definition_type = (yyvsp[-8].string);
  struct ParamList* defintion_param_list = (yyvsp[-5].plist);
  struct Gsymbol* Gentry = (yyvsp[-7].no)->Gentry;
  if(Gentry==NULL){
    printf("ERROR: FUNCTION NOT DECLARED %s\n",(yyvsp[-7].no)->varname);
    return -1;
  }
  //checking return type equivalence
  if(strcmp(definition_type,Gentry->type->name)!=0){
    printf("ERROR: FUNCTION RETURN TYPE NOT MATCHING WITH DECLARATION\n");
    return -1;
  }

  //checking param equivalence
  struct ParamList* temp1 = defintion_param_list;
  struct ParamList* temp2 = Gentry->param_list;
  while(temp1!=NULL && temp2!=NULL){
    if(strcmp(temp1->name,temp2->name)!=0 || strcmp(temp1->type->name,temp2->type->name)!=0){
      printf("ERROR: FUNCTION MISMATCH %s\n",Gentry->name);
      return -1;
    }
    temp1=temp1->next;
    temp2=temp2->next;
  }
  if(temp1!=NULL || temp2!=NULL){
    printf("ERROR: FUNCTION DECLARATION MISMATCHED: %s\n",Gentry->name);
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
    fprintf(target_file,"F%d:\n",Gentry->flabel);
    function_begin_code_gen(target_file,Ltable);
    code_gen((yyvsp[-1].no),target_file);
    L_cleanup();
    local_binding=1;
    param_binding=1;
    fclose(target_file);
}
#line 1834 "y.tab.c"
    break;

  case 32: /* Fdef: Type ID '(' ')' '{' LdeclBlock Body '}'  */
#line 248 "expl.y"
                                         {
  char* definition_type = (yyvsp[-7].string);
  struct Gsymbol* Gentry = GLookUp((yyvsp[-6].no)->varname);
  if(Gentry==NULL){
    printf("ERROR: FUNCTION NOT DECLARED %s\n",(yyvsp[-6].no)->varname);
    return -1;
  }
  //checking return type equivalence
  if(strcmp(definition_type,Gentry->type->name)!=0){
    printf("ERROR: FUNCTION RETURN TYPE NOT MATCHING WITH DECLARATION\n");
    return -1;
  }

  //checking param equivalence
  if(Gentry->param_list==NULL){
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
      fprintf(target_file,"F%d:\n",Gentry->flabel);
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
#line 1881 "y.tab.c"
    break;

  case 33: /* ParamList: ParamList ',' Param  */
#line 291 "expl.y"
                                {
  (yyval.plist) = append_param_list((yyvsp[-2].plist),(yyvsp[0].plist));
}
#line 1889 "y.tab.c"
    break;

  case 34: /* ParamList: Param  */
#line 294 "expl.y"
         {
  (yyval.plist) = (yyvsp[0].plist);
}
#line 1897 "y.tab.c"
    break;

  case 35: /* Param: Type ID  */
#line 298 "expl.y"
                {
  Typetable* param_type = TLookup((yyvsp[-1].string));
  L_Install((yyvsp[0].no)->varname,param_type,1);
  (yyval.plist) = create_param_list(param_type,(yyvsp[0].no)->varname);
}
#line 1907 "y.tab.c"
    break;

  case 36: /* Param: Type MUL ID  */
#line 303 "expl.y"
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
#line 1928 "y.tab.c"
    break;

  case 37: /* MainBlock: INT MAIN '(' ')' '{' LdeclBlock Body '}'  */
#line 324 "expl.y"
                                                     {
  FILE* target_file = fopen("code.xsm","a");
  if(!begin_flag){
      fclose(target_file);
      target_file = fopen("code.xsm","w");
      header_code_gen(target_file);
      begin_flag=1;
    }
    print_Ltable();
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
#line 1953 "y.tab.c"
    break;

  case 38: /* LdeclBlock: DECL LdecList ENDDECL  */
#line 350 "expl.y"
                                   {local_binding=1;}
#line 1959 "y.tab.c"
    break;

  case 39: /* LdeclBlock: DECL ENDDECL  */
#line 351 "expl.y"
               {local_binding=1;}
#line 1965 "y.tab.c"
    break;

  case 40: /* LdeclBlock: %empty  */
#line 352 "expl.y"
             {}
#line 1971 "y.tab.c"
    break;

  case 41: /* LdecList: LdecList Ldecl  */
#line 354 "expl.y"
                           {}
#line 1977 "y.tab.c"
    break;

  case 42: /* LdecList: Ldecl  */
#line 354 "expl.y"
                                      {}
#line 1983 "y.tab.c"
    break;

  case 43: /* Ldecl: Type IdList ';'  */
#line 356 "expl.y"
                        {
  char* declaration_type = (yyvsp[-2].string);
  struct Typetable* declaration_type_entry = TLookup(declaration_type);
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
#line 2019 "y.tab.c"
    break;

  case 44: /* IdList: IdList ',' Lid  */
#line 388 "expl.y"
                        {
  struct tnode* IDNode = (yyvsp[0].no);
  struct tnode* temp = (yyvsp[-2].no);
  while (temp->right != NULL) {  
      temp = temp->right;
  }
  temp->right = IDNode;  
  (yyval.no) = (yyvsp[-2].no); 
}
#line 2033 "y.tab.c"
    break;

  case 46: /* Lid: ID  */
#line 398 "expl.y"
        {
   (yyval.no)=createNode(-1,1,-1,NULL,NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
}
#line 2041 "y.tab.c"
    break;

  case 47: /* Lid: MUL ID  */
#line 401 "expl.y"
         { //this is for Pointer
  (yyval.no) = createNode(-1,1,-1,TLookup("pointer"),NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
}
#line 2049 "y.tab.c"
    break;

  case 48: /* Body: PBEGIN Slist ReturnStmt END  */
#line 407 "expl.y"
                                  {(yyval.no) = createNode(-1,1,1,NULL,NULL,NULL,CONNECTOR_NODE,(yyvsp[-2].no),(yyvsp[-1].no));}
#line 2055 "y.tab.c"
    break;

  case 49: /* Body: PBEGIN ReturnStmt END  */
#line 408 "expl.y"
                        {(yyval.no)=(yyvsp[-1].no);}
#line 2061 "y.tab.c"
    break;

  case 50: /* Type: INT  */
#line 410 "expl.y"
           {(yyval.string) = "int";}
#line 2067 "y.tab.c"
    break;

  case 51: /* Type: STR  */
#line 411 "expl.y"
      {(yyval.string) = "str";}
#line 2073 "y.tab.c"
    break;

  case 52: /* Type: ID  */
#line 412 "expl.y"
     {
    char* type_name = (yyvsp[0].no)->varname;
    if(TLookup((yyvsp[0].no)->varname)==NULL){
      printf("ERROR : The Following type is not user-defined %s\n",type_name);
      return -1;
    }
    (yyval.string)=(yyvsp[0].no)->varname;
  }
#line 2086 "y.tab.c"
    break;

  case 53: /* Slist: Slist Stmt  */
#line 421 "expl.y"
                   {
  (yyval.no)=createNode(-1,1,1,NULL,NULL,NULL,CONNECTOR_NODE,(yyvsp[-1].no),(yyvsp[0].no));
}
#line 2094 "y.tab.c"
    break;

  case 54: /* Slist: Stmt  */
#line 424 "expl.y"
       {(yyval.no)=(yyvsp[0].no);}
#line 2100 "y.tab.c"
    break;

  case 55: /* Stmt: InputStmt  */
#line 427 "expl.y"
                 {(yyval.no)=(yyvsp[0].no);}
#line 2106 "y.tab.c"
    break;

  case 56: /* Stmt: OutputStmt  */
#line 428 "expl.y"
             {(yyval.no)=(yyvsp[0].no);}
#line 2112 "y.tab.c"
    break;

  case 57: /* Stmt: AsgStmt  */
#line 429 "expl.y"
         {(yyval.no)=(yyvsp[0].no);}
#line 2118 "y.tab.c"
    break;

  case 58: /* Stmt: Ifstmt  */
#line 430 "expl.y"
        {(yyval.no)=(yyvsp[0].no);}
#line 2124 "y.tab.c"
    break;

  case 59: /* Stmt: WhileStmt  */
#line 431 "expl.y"
           {(yyval.no)=(yyvsp[0].no);}
#line 2130 "y.tab.c"
    break;

  case 60: /* Stmt: DoWhileStmt  */
#line 432 "expl.y"
             {(yyval.no)=(yyvsp[0].no);}
#line 2136 "y.tab.c"
    break;

  case 61: /* Stmt: BreakStmt  */
#line 433 "expl.y"
           {(yyval.no)=(yyvsp[0].no);}
#line 2142 "y.tab.c"
    break;

  case 62: /* Stmt: ContinueStmt  */
#line 434 "expl.y"
              {(yyval.no)=(yyvsp[0].no);}
#line 2148 "y.tab.c"
    break;

  case 63: /* Stmt: ReturnStmt  */
#line 435 "expl.y"
            {(yyval.no)=(yyvsp[0].no);}
#line 2154 "y.tab.c"
    break;

  case 64: /* Stmt: BreakpointStmt  */
#line 436 "expl.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 2160 "y.tab.c"
    break;

  case 65: /* Stmt: initializeStmt  */
#line 437 "expl.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 2166 "y.tab.c"
    break;

  case 66: /* Stmt: AllocStmt  */
#line 438 "expl.y"
           {(yyval.no)=(yyvsp[0].no);}
#line 2172 "y.tab.c"
    break;

  case 67: /* Stmt: FreeStmt  */
#line 439 "expl.y"
          {(yyval.no)=(yyvsp[0].no);}
#line 2178 "y.tab.c"
    break;

  case 68: /* InputStmt: READ '(' Identifier ')' ';'  */
#line 445 "expl.y"
                                        {
    // printf("Reading");
    (yyval.no) = makeNonLeafNode((yyvsp[-2].no),NULL,READ_NODE,"_");
  }
#line 2187 "y.tab.c"
    break;

  case 69: /* OutputStmt: WRITE '(' expr ')' ';'  */
#line 450 "expl.y"
                                    {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),NULL,WRITE_NODE,"_");}
#line 2193 "y.tab.c"
    break;

  case 70: /* AsgStmt: Identifier '=' expr ';'  */
#line 452 "expl.y"
                                  {
  // printf("%s\n",$1->Gentry->name);
  (yyval.no) = makeNonLeafNode((yyvsp[-3].no),(yyvsp[-1].no),OPERATOR_NODE,"=");
  }
#line 2202 "y.tab.c"
    break;

  case 71: /* BreakStmt: BREAK ';'  */
#line 457 "expl.y"
                      {(yyval.no)=makeNonLeafNode(NULL,NULL,BREAK_NODE,"_");}
#line 2208 "y.tab.c"
    break;

  case 72: /* BreakpointStmt: BREAKPOINT ';'  */
#line 459 "expl.y"
                                {(yyval.no)=makeNonLeafNode(NULL,NULL,BREAKPOINT_NODE,"_");}
#line 2214 "y.tab.c"
    break;

  case 73: /* ContinueStmt: CONTINUE ';'  */
#line 461 "expl.y"
                            {(yyval.no)=makeNonLeafNode(NULL,NULL,CONTINUE_NODE,"_");}
#line 2220 "y.tab.c"
    break;

  case 74: /* Ifstmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF ';'  */
#line 463 "expl.y"
                                                         {
  struct tnode* if_else_node = makeNonLeafNode((yyvsp[-7].no),(yyvsp[-4].no),IF_ELSE_NODE,"_");
  if_else_node->middle = (yyvsp[-2].no);
  (yyval.no) = if_else_node;
}
#line 2230 "y.tab.c"
    break;

  case 75: /* Ifstmt: IF '(' expr ')' THEN Slist ENDIF ';'  */
#line 468 "expl.y"
                                       {(yyval.no) = makeNonLeafNode((yyvsp[-5].no),(yyvsp[-2].no),IF_NODE,"_");}
#line 2236 "y.tab.c"
    break;

  case 76: /* WhileStmt: WHILE '(' expr ')' DO Slist ENDWHILE ';'  */
#line 471 "expl.y"
                                                     {(yyval.no) = makeNonLeafNode((yyvsp[-5].no),(yyvsp[-2].no),WHILE_NODE,"_");}
#line 2242 "y.tab.c"
    break;

  case 77: /* DoWhileStmt: DO Slist WHILE '(' expr ')' ';'  */
#line 473 "expl.y"
                                              {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[-5].no),DO_WHILE_NODE,"_");}
#line 2248 "y.tab.c"
    break;

  case 78: /* ReturnStmt: RETURN expr ';'  */
#line 475 "expl.y"
                             {(yyval.no) = makeNonLeafNode((yyvsp[-1].no),NULL,RETURN_NODE,"_");}
#line 2254 "y.tab.c"
    break;

  case 79: /* initializeStmt: Identifier '=' INITIALIZE '(' ')' ';'  */
#line 477 "expl.y"
                                                       {(yyval.no) = makeNonLeafNode((yyvsp[-5].no),NULL,INITIALIZE_NODE,"_");}
#line 2260 "y.tab.c"
    break;

  case 80: /* AllocStmt: Identifier '=' ALLOC '(' ')' ';'  */
#line 479 "expl.y"
                                             {(yyval.no)=makeNonLeafNode((yyvsp[-5].no),NULL,ALLOC_NODE,"_");}
#line 2266 "y.tab.c"
    break;

  case 81: /* FreeStmt: FREE '(' Identifier ')' ';'  */
#line 481 "expl.y"
                                       {(yyval.no)=makeNonLeafNode((yyvsp[-2].no),NULL,FREE_NODE,"_");}
#line 2272 "y.tab.c"
    break;

  case 82: /* expr: expr PLUS expr  */
#line 484 "expl.y"
                       {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"+");}
#line 2278 "y.tab.c"
    break;

  case 83: /* expr: expr MINUS expr  */
#line 485 "expl.y"
                      {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"-");}
#line 2284 "y.tab.c"
    break;

  case 84: /* expr: expr MUL expr  */
#line 486 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"*");}
#line 2290 "y.tab.c"
    break;

  case 85: /* expr: expr DIV expr  */
#line 487 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"/");}
#line 2296 "y.tab.c"
    break;

  case 86: /* expr: expr MOD expr  */
#line 488 "expl.y"
                  {(yyval.no)=makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"%");}
#line 2302 "y.tab.c"
    break;

  case 87: /* expr: expr LT expr  */
#line 489 "expl.y"
                 {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"<");}
#line 2308 "y.tab.c"
    break;

  case 88: /* expr: expr LTE expr  */
#line 490 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"<=");}
#line 2314 "y.tab.c"
    break;

  case 89: /* expr: expr GT expr  */
#line 491 "expl.y"
                 {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,">");}
#line 2320 "y.tab.c"
    break;

  case 90: /* expr: expr GTE expr  */
#line 492 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,">=");}
#line 2326 "y.tab.c"
    break;

  case 91: /* expr: expr EQUALS expr  */
#line 493 "expl.y"
                     {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"==");}
#line 2332 "y.tab.c"
    break;

  case 92: /* expr: expr NOTEQUALS expr  */
#line 494 "expl.y"
                        {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"!=");}
#line 2338 "y.tab.c"
    break;

  case 93: /* expr: expr AND expr  */
#line 495 "expl.y"
                  {(yyval.no)=makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"&&");}
#line 2344 "y.tab.c"
    break;

  case 94: /* expr: expr OR expr  */
#line 496 "expl.y"
                 {(yyval.no)=makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"||");}
#line 2350 "y.tab.c"
    break;

  case 95: /* expr: ID '(' ')'  */
#line 497 "expl.y"
               {
    struct tnode* function_node = makeNonLeafNode((yyvsp[-2].no),NULL,FUNCTION_NODE,"_");
    function_node->varname = strdup((yyvsp[-2].no)->varname);
    struct Gsymbol* Gentry = (yyvsp[-2].no)->Gentry;
    if(Gentry==NULL){
      printf("ERROR: NO SUCH FUNCTION HAS BENN DECLARED!!: %s\n",(yyvsp[-2].no)->varname);
      exit(1);
    }
    struct ParamList* param_list = Gentry->param_list;
    struct FuncArgs* arg_list = NULL;
    if(!verify_func_signature(arg_list,param_list)){
      printf("ERROR:FUNCTION SIGNATURE MISMATCH: %s\n",(yyvsp[-2].no)->varname);
      exit(1);
    }
    function_node->Gentry = Gentry;
    function_node->type = Gentry->type;
    (yyval.no) = function_node;
  }
#line 2373 "y.tab.c"
    break;

  case 96: /* expr: ID '(' ArgList ')'  */
#line 515 "expl.y"
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
#line 2397 "y.tab.c"
    break;

  case 97: /* expr: '(' expr ')'  */
#line 534 "expl.y"
                  {(yyval.no) = (yyvsp[-1].no);}
#line 2403 "y.tab.c"
    break;

  case 98: /* expr: NUM  */
#line 535 "expl.y"
          {(yyval.no) = (yyvsp[0].no);}
#line 2409 "y.tab.c"
    break;

  case 99: /* expr: STRING  */
#line 536 "expl.y"
           {(yyval.no)=(yyvsp[0].no);}
#line 2415 "y.tab.c"
    break;

  case 100: /* expr: Identifier  */
#line 537 "expl.y"
               {(yyval.no)=(yyvsp[0].no);}
#line 2421 "y.tab.c"
    break;

  case 101: /* expr: PNULL  */
#line 538 "expl.y"
          {(yyval.no)=(yyvsp[0].no);}
#line 2427 "y.tab.c"
    break;

  case 102: /* ArgList: ArgList ',' expr  */
#line 541 "expl.y"
                           {
  (yyval.arglist)=append_arglist((yyvsp[-2].arglist),(yyvsp[0].no));
}
#line 2435 "y.tab.c"
    break;

  case 103: /* ArgList: expr  */
#line 544 "expl.y"
       {
  (yyval.arglist)=create_arglist((yyvsp[0].no));
}
#line 2443 "y.tab.c"
    break;

  case 104: /* Identifier: ID  */
#line 548 "expl.y"
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
#line 2461 "y.tab.c"
    break;

  case 105: /* Identifier: ID '[' index ']'  */
#line 561 "expl.y"
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
#line 2478 "y.tab.c"
    break;

  case 106: /* Identifier: ID '[' index ']' '[' index ']'  */
#line 573 "expl.y"
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
#line 2495 "y.tab.c"
    break;

  case 107: /* Identifier: MUL ID  */
#line 585 "expl.y"
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
#line 2522 "y.tab.c"
    break;

  case 108: /* Identifier: '&' Identifier  */
#line 607 "expl.y"
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
#line 2549 "y.tab.c"
    break;

  case 109: /* Identifier: Field  */
#line 629 "expl.y"
        {
  struct tnode* field_node =makeNonLeafNode((yyvsp[0].no),NULL,FIELD_NODE,"_");
  //field validation
  struct tnode* temp = field_node->left;
  struct tnode* identifier_node = field_node->left;
  struct Typetable* curr_type ;
  char* field_name;
  int scope_of_var = check_identifier(temp);
  if(scope_of_var==1){//identifer exists in Gsymbol table;
    curr_type = temp->Gentry->type;
  }
  else if(scope_of_var==2){//Lsymbol variable
    curr_type = temp->Lentry->type;
  }
  while(temp!=NULL){
    
    if(temp->left!=NULL){
      field_name = temp->left->varname;
    }else break;
    struct Fieldlist* curr_field = FLookup(curr_type,field_name);
    if(curr_field==NULL){
      printf("ERROR: Field doesn't exist for type : %s %s\n",curr_type->name,field_name);
      return -1;
    }else{
      curr_type = curr_field->type;
    }
    temp=temp->left;
  }
  field_node->type=curr_type;
  // printf("%s\n",field_node->type->name);
  (yyval.no) = field_node;
}
#line 2586 "y.tab.c"
    break;

  case 110: /* Field: Field '.' ID  */
#line 663 "expl.y"
                     {
  struct tnode* temp = (yyvsp[-2].no);
  while(temp->left!=NULL){
    temp=temp->left;
  }
  temp->left=(yyvsp[0].no);
  (yyval.no)=(yyvsp[-2].no);
}
#line 2599 "y.tab.c"
    break;

  case 111: /* Field: ID '[' index ']' '.' ID  */
#line 671 "expl.y"
                           {
  // printf("Array field\n");
  (yyvsp[-5].no)->left =(yyvsp[0].no);
  (yyvsp[-5].no)->right = (yyvsp[-3].no); //stores the size of the 1-D array
  if((yyvsp[-3].no)->nodetype==CONST_NODE){
    if((yyvsp[-3].no)->val>=(yyvsp[-5].no)->Gentry->row){
      printf("ERROR:Array Out of bounds:%s\n ",(yyvsp[-5].no)->Gentry->name);
      return -1;
    }
  }
  (yyval.no) =  (yyvsp[-5].no);
}
#line 2616 "y.tab.c"
    break;

  case 112: /* Field: ID '.' ID  */
#line 683 "expl.y"
            {
  if((yyvsp[-2].no)->Gentry!=NULL && (yyvsp[-2].no)->Gentry->row>1){
    printf("ERROR: accessing an Array value without indexing %s\n",(yyvsp[-2].no)->Gentry->name);
    return -1;
  }
  (yyvsp[-2].no)->left = (yyvsp[0].no);
  (yyval.no)=(yyvsp[-2].no);
}
#line 2629 "y.tab.c"
    break;

  case 113: /* index: expr  */
#line 693 "expl.y"
             {
    if(strcmp((yyvsp[0].no)->type->name,"int")!=0){
      printf("ERROR:indexing by a non-int type \n");
      return -1;
    }
    (yyval.no)=(yyvsp[0].no);
  }
#line 2641 "y.tab.c"
    break;


#line 2645 "y.tab.c"

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

#line 702 "expl.y"


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
