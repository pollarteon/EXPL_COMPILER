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
    PNULL = 292,                   /* PNULL  */
    ALLOC = 293,                   /* ALLOC  */
    INITIALIZE = 294,              /* INITIALIZE  */
    FREE = 295,                    /* FREE  */
    NUM = 296,                     /* NUM  */
    STRING = 297,                  /* STRING  */
    END = 298,                     /* END  */
    ID = 299                       /* ID  */
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
#define PNULL 292
#define ALLOC 293
#define INITIALIZE 294
#define FREE 295
#define NUM 296
#define STRING 297
#define END 298
#define ID 299

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

#line 234 "y.tab.c"

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
  YYSYMBOL_PNULL = 37,                     /* PNULL  */
  YYSYMBOL_ALLOC = 38,                     /* ALLOC  */
  YYSYMBOL_INITIALIZE = 39,                /* INITIALIZE  */
  YYSYMBOL_FREE = 40,                      /* FREE  */
  YYSYMBOL_NUM = 41,                       /* NUM  */
  YYSYMBOL_STRING = 42,                    /* STRING  */
  YYSYMBOL_END = 43,                       /* END  */
  YYSYMBOL_ID = 44,                        /* ID  */
  YYSYMBOL_45_ = 45,                       /* '{'  */
  YYSYMBOL_46_ = 46,                       /* '}'  */
  YYSYMBOL_47_ = 47,                       /* ';'  */
  YYSYMBOL_48_ = 48,                       /* ','  */
  YYSYMBOL_49_ = 49,                       /* '['  */
  YYSYMBOL_50_ = 50,                       /* ']'  */
  YYSYMBOL_51_ = 51,                       /* '('  */
  YYSYMBOL_52_ = 52,                       /* ')'  */
  YYSYMBOL_53_ = 53,                       /* '='  */
  YYSYMBOL_54_ = 54,                       /* '&'  */
  YYSYMBOL_55_ = 55,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 56,                  /* $accept  */
  YYSYMBOL_program = 57,                   /* program  */
  YYSYMBOL_TypeDefBlock = 58,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 59,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 60,                   /* TypeDef  */
  YYSYMBOL_FieldDeclList = 61,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 62,                 /* FieldDecl  */
  YYSYMBOL_TypeName = 63,                  /* TypeName  */
  YYSYMBOL_GDeclBlock = 64,                /* GDeclBlock  */
  YYSYMBOL_GdeclList = 65,                 /* GdeclList  */
  YYSYMBOL_Gdecl = 66,                     /* Gdecl  */
  YYSYMBOL_GidList = 67,                   /* GidList  */
  YYSYMBOL_Gid = 68,                       /* Gid  */
  YYSYMBOL_FdefBlock = 69,                 /* FdefBlock  */
  YYSYMBOL_Fdef = 70,                      /* Fdef  */
  YYSYMBOL_ParamList = 71,                 /* ParamList  */
  YYSYMBOL_Param = 72,                     /* Param  */
  YYSYMBOL_MainBlock = 73,                 /* MainBlock  */
  YYSYMBOL_LdeclBlock = 74,                /* LdeclBlock  */
  YYSYMBOL_LdecList = 75,                  /* LdecList  */
  YYSYMBOL_Ldecl = 76,                     /* Ldecl  */
  YYSYMBOL_IdList = 77,                    /* IdList  */
  YYSYMBOL_Lid = 78,                       /* Lid  */
  YYSYMBOL_Body = 79,                      /* Body  */
  YYSYMBOL_Type = 80,                      /* Type  */
  YYSYMBOL_Slist = 81,                     /* Slist  */
  YYSYMBOL_Stmt = 82,                      /* Stmt  */
  YYSYMBOL_InputStmt = 83,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 84,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 85,                   /* AsgStmt  */
  YYSYMBOL_BreakStmt = 86,                 /* BreakStmt  */
  YYSYMBOL_BreakpointStmt = 87,            /* BreakpointStmt  */
  YYSYMBOL_ContinueStmt = 88,              /* ContinueStmt  */
  YYSYMBOL_Ifstmt = 89,                    /* Ifstmt  */
  YYSYMBOL_WhileStmt = 90,                 /* WhileStmt  */
  YYSYMBOL_DoWhileStmt = 91,               /* DoWhileStmt  */
  YYSYMBOL_ReturnStmt = 92,                /* ReturnStmt  */
  YYSYMBOL_initializeStmt = 93,            /* initializeStmt  */
  YYSYMBOL_AllocStmt = 94,                 /* AllocStmt  */
  YYSYMBOL_expr = 95,                      /* expr  */
  YYSYMBOL_ArgList = 96,                   /* ArgList  */
  YYSYMBOL_Identifier = 97,                /* Identifier  */
  YYSYMBOL_Field = 98,                     /* Field  */
  YYSYMBOL_index = 99                      /* index  */
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
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  237

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   299


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
       2,     2,     2,     2,     2,     2,     2,     2,    54,     2,
      51,    52,     2,     2,    48,     2,    55,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    47,
       2,    53,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,    50,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,    46,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    46,    46,    47,    48,    54,    55,    58,    59,    62,
      91,    92,    95,   107,   108,   109,   116,   117,   119,   119,
     121,   150,   158,   160,   164,   168,   172,   176,   180,   189,
     189,   191,   241,   284,   287,   291,   296,   317,   343,   344,
     345,   347,   347,   349,   381,   389,   391,   394,   400,   401,
     403,   404,   405,   414,   417,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   437,   442,   444,
     449,   451,   453,   455,   460,   463,   465,   467,   469,   471,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   506,   525,   526,   527,   528,   532,
     535,   539,   552,   564,   576,   598,   620,   658,   666,   672
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
  "MAIN", "RETURN", "BREAKPOINT", "TYPE", "ENDTYPE", "PNULL", "ALLOC",
  "INITIALIZE", "FREE", "NUM", "STRING", "END", "ID", "'{'", "'}'", "';'",
  "','", "'['", "']'", "'('", "')'", "'='", "'&'", "'.'", "$accept",
  "program", "TypeDefBlock", "TypeDefList", "TypeDef", "FieldDeclList",
  "FieldDecl", "TypeName", "GDeclBlock", "GdeclList", "Gdecl", "GidList",
  "Gid", "FdefBlock", "Fdef", "ParamList", "Param", "MainBlock",
  "LdeclBlock", "LdecList", "Ldecl", "IdList", "Lid", "Body", "Type",
  "Slist", "Stmt", "InputStmt", "OutputStmt", "AsgStmt", "BreakStmt",
  "BreakpointStmt", "ContinueStmt", "Ifstmt", "WhileStmt", "DoWhileStmt",
  "ReturnStmt", "initializeStmt", "AllocStmt", "expr", "ArgList",
  "Identifier", "Field", "index", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-99)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -31,   -14,    37,    34,    -1,   -23,   -99,   -99,   207,    29,
     -12,   -99,    83,   -99,   -99,   -99,   -99,   -99,   -99,   210,
     -99,     2,    16,    29,   -12,   -99,   -99,    41,   -99,   -99,
     -99,   -29,   -99,    56,   -99,   -99,    66,   142,    36,   -99,
      63,   -99,   -99,    97,   -99,   -99,    81,   -99,    94,    65,
     -99,     2,   131,    68,   -99,   144,   -99,    77,   -99,     5,
     -99,   164,   150,    78,   147,   107,   -99,   153,   -99,   254,
     190,   164,   169,   172,   -99,   -99,   -99,   260,   -99,    19,
     311,   170,   190,   164,   167,   -99,   -99,   171,   -99,    45,
     -99,   174,   184,   191,   201,   212,   311,   173,   208,     1,
     214,   -20,     6,   311,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   176,   -99,   -99,   215,   224,   -99,
     219,   190,   -99,   -99,   -99,    19,   -99,     6,     1,     1,
       1,   324,   -99,   -99,   -99,   -99,   -99,    98,     1,   366,
     -99,   -99,     1,   223,   -99,   -99,   237,   -99,    15,   225,
     -99,   247,   -99,   244,    84,   138,   160,   246,   312,   182,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,   -99,   397,   249,   -99,   -99,   250,   255,
     388,   -99,   -99,   253,   263,   300,   286,     1,   -99,   397,
     102,   -99,   168,   168,   -99,   -99,   -99,   419,   425,   165,
     165,   165,   165,   447,   447,   269,     1,   267,   -99,   -99,
     -99,   311,   311,   204,     1,   -99,     1,   226,   279,   248,
     261,   -13,   397,   278,   283,   -99,   311,   292,   294,   -99,
     -99,   -99,   298,   -99,   -99,   296,   -99
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
       0,   101,     0,     0,    54,    55,    56,    57,    61,    64,
      62,    58,    59,    60,    63,    65,    66,     0,   106,    37,
       0,     0,    25,    47,    43,     0,   104,     0,     0,     0,
       0,     0,    63,    70,    72,    96,    97,   101,     0,     0,
      98,    71,     0,     0,   105,    53,    63,    49,     0,     0,
      32,     0,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    77,   109,     0,   108,    48,     0,     0,
       0,   107,    31,     0,     0,     0,     0,     0,    93,   100,
       0,    95,    80,    81,    82,    83,    84,    92,    91,    85,
      87,    86,    88,    89,    90,   102,     0,     0,    69,    67,
      68,     0,     0,     0,     0,    94,     0,     0,     0,     0,
       0,     0,    99,     0,     0,    78,     0,     0,     0,    76,
     103,    79,     0,    74,    75,     0,    73
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -99,   -99,   -99,   -99,   341,   -99,   316,   -99,   -99,   -99,
     329,   -99,   308,   -99,   336,   309,   302,     4,    40,   -99,
     284,   -99,   251,   -56,    17,   -93,   -98,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -72,   -99,   -99,   -90,
     -99,   -80,   -99,   158
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     5,     6,    31,    32,    33,    10,    19,
      20,    38,    39,    24,    25,    57,    58,    11,    70,    77,
      78,    89,    90,    81,    59,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   132,   115,   116,   174,
     190,   140,   118,   175
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     117,    28,    29,   131,     1,   145,    91,    36,   114,   139,
      67,    91,   212,    13,    26,    30,   117,    44,    23,    17,
      91,     4,   144,   117,    87,    21,   120,    27,    42,   142,
       4,   146,    18,   145,   229,   143,    21,     7,   154,   155,
     156,    27,   135,   136,    12,   137,    37,   153,   159,    68,
     101,   117,   138,   178,   179,   102,   135,   136,   180,   137,
     102,    22,     8,    88,     9,   151,   138,    40,   189,   102,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,    50,    51,    43,    79,   160,   161,   162,
     163,   164,   124,   125,    79,    16,    17,   213,    16,    17,
      46,   165,   166,   167,   168,   169,   170,   171,   172,    18,
      47,    82,    18,    28,    29,    52,   217,    56,   219,   220,
      62,   145,   145,   121,   222,    65,    65,    30,    54,    66,
      72,   117,   117,   232,   145,    55,   184,    16,    17,   117,
     117,   160,   161,   162,   163,   164,   117,   142,    53,   158,
     214,    18,   117,   143,   215,   165,   166,   167,   168,   169,
     170,   171,   172,   160,   161,   162,   163,   164,   160,   161,
     162,   163,   164,   162,   163,   164,    61,   165,   166,   167,
     168,   169,   170,   171,   172,   160,   161,   162,   163,   164,
     185,    48,    69,    49,    64,    71,    73,    75,    80,   165,
     166,   167,   168,   169,   170,   171,   172,   160,   161,   162,
     163,   164,   186,    84,    83,   123,   119,   122,   126,   147,
     133,   165,   166,   167,   168,   169,   170,   171,   172,   160,
     161,   162,   163,   164,   191,   127,    15,    16,    17,    34,
      16,    17,   128,   165,   166,   167,   168,   169,   170,   171,
     172,    18,   129,    91,    18,   134,   221,    92,    93,    94,
     226,   141,   227,   130,    95,   150,    91,   176,   148,   181,
      92,    93,    94,    96,    97,    98,   228,    95,   224,   149,
     177,    99,   100,    76,    16,    17,    96,    97,    98,    85,
      16,    17,   101,   182,    99,   100,   183,   187,    18,   205,
     209,   206,   102,    91,    18,   101,   207,    92,    93,    94,
     210,   212,   235,   211,    95,   102,    91,    91,   216,   218,
      92,    93,    94,    96,    97,    98,   225,    95,   230,    91,
     231,    99,   100,    92,    93,    94,    96,    97,    98,   233,
     157,   234,   101,   236,    99,   100,    14,    45,    35,    96,
      97,    98,   102,   135,   136,   101,   137,    99,   100,    60,
      41,    86,    63,   138,   188,   102,   102,    74,   101,   160,
     161,   162,   163,   164,   223,     0,   152,     0,   102,     0,
       0,     0,     0,   165,   166,   167,   168,   169,   170,   171,
     172,   160,   161,   162,   163,   164,     0,     0,     0,     0,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   165,   166,   167,   168,   169,   170,
     171,   172,   160,   161,   162,   163,   164,     0,   160,   161,
     162,   163,   164,     0,     0,   208,     0,   166,   167,   168,
     169,   170,   171,   172,   167,   168,   169,   170,   171,   172,
     160,   161,   162,   163,   164,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   167,   168,   169,   170
};

static const yytype_int16 yycheck[] =
{
      80,    30,    31,    96,    35,   103,     5,     5,    80,    99,
       5,     5,    25,    36,    10,    44,    96,    46,    30,    31,
       5,    44,   102,   103,     5,     8,    82,    10,    24,    49,
      44,   103,    44,   131,    47,    55,    19,     0,   128,   129,
     130,    24,    41,    42,    45,    44,    44,   127,   138,    44,
      44,   131,    51,    38,    39,    54,    41,    42,   148,    44,
      54,    32,    28,    44,    30,   121,    51,    51,   158,    54,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,    47,    48,    44,    69,     3,     4,     5,
       6,     7,    47,    48,    77,    30,    31,   187,    30,    31,
      44,    17,    18,    19,    20,    21,    22,    23,    24,    44,
      44,    71,    44,    30,    31,    52,   206,    52,   211,   212,
      52,   219,   220,    83,   214,    48,    48,    44,    47,    52,
      52,   211,   212,   226,   232,    41,    52,    30,    31,   219,
     220,     3,     4,     5,     6,     7,   226,    49,    51,    51,
      48,    44,   232,    55,    52,    17,    18,    19,    20,    21,
      22,    23,    24,     3,     4,     5,     6,     7,     3,     4,
       5,     6,     7,     5,     6,     7,    45,    17,    18,    19,
      20,    21,    22,    23,    24,     3,     4,     5,     6,     7,
      52,    49,    28,    51,    50,    45,    49,    44,     8,    17,
      18,    19,    20,    21,    22,    23,    24,     3,     4,     5,
       6,     7,    52,    41,    45,    44,    46,    50,    44,    43,
      47,    17,    18,    19,    20,    21,    22,    23,    24,     3,
       4,     5,     6,     7,    52,    51,    29,    30,    31,    29,
      30,    31,    51,    17,    18,    19,    20,    21,    22,    23,
      24,    44,    51,     5,    44,    47,    52,     9,    10,    11,
      12,    47,    14,    51,    16,    46,     5,    44,    53,    44,
       9,    10,    11,    25,    26,    27,    15,    16,    52,    55,
      43,    33,    34,    29,    30,    31,    25,    26,    27,    29,
      30,    31,    44,    46,    33,    34,    52,    51,    44,    50,
      47,    51,    54,     5,    44,    44,    51,     9,    10,    11,
      47,    25,    14,    13,    16,    54,     5,     5,    49,    52,
       9,    10,    11,    25,    26,    27,    47,    16,    50,     5,
      47,    33,    34,     9,    10,    11,    25,    26,    27,    47,
      16,    47,    44,    47,    33,    34,     5,    31,    19,    25,
      26,    27,    54,    41,    42,    44,    44,    33,    34,    51,
      24,    77,    53,    51,    52,    54,    54,    65,    44,     3,
       4,     5,     6,     7,   216,    -1,   125,    -1,    54,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    17,    18,    19,    20,    21,
      22,    23,    24,    47,    17,    18,    19,    20,    21,    22,
      23,    24,     3,     4,     5,     6,     7,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    47,    -1,    18,    19,    20,
      21,    22,    23,    24,    19,    20,    21,    22,    23,    24,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    35,    57,    58,    44,    59,    60,     0,    28,    30,
      64,    73,    45,    36,    60,    29,    30,    31,    44,    65,
      66,    80,    32,    30,    69,    70,    73,    80,    30,    31,
      44,    61,    62,    63,    29,    66,     5,    44,    67,    68,
      51,    70,    73,    44,    46,    62,    44,    44,    49,    51,
      47,    48,    52,    51,    47,    41,    52,    71,    72,    80,
      68,    45,    52,    71,    50,    48,    52,     5,    44,    28,
      74,    45,    52,    49,    72,    44,    29,    75,    76,    80,
       8,    79,    74,    45,    41,    29,    76,     5,    44,    77,
      78,     5,     9,    10,    11,    16,    25,    26,    27,    33,
      34,    44,    54,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    97,    98,    46,
      79,    74,    50,    44,    47,    48,    44,    51,    51,    51,
      51,    81,    92,    47,    47,    41,    42,    44,    51,    95,
      97,    47,    49,    55,    97,    82,    92,    43,    53,    55,
      46,    79,    78,    97,    95,    95,    95,    16,    51,    95,
       3,     4,     5,     6,     7,    17,    18,    19,    20,    21,
      22,    23,    24,    47,    95,    99,    44,    43,    38,    39,
      95,    44,    46,    52,    52,    52,    52,    51,    52,    95,
      96,    52,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    50,    51,    51,    47,    47,
      47,    13,    25,    95,    48,    52,    49,    95,    52,    81,
      81,    52,    95,    99,    52,    47,    12,    14,    15,    47,
      50,    47,    81,    47,    47,    14,    47
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    57,    57,    58,    58,    59,    59,    60,
      61,    61,    62,    63,    63,    63,    64,    64,    65,    65,
      66,    67,    67,    68,    68,    68,    68,    68,    68,    69,
      69,    70,    70,    71,    71,    72,    72,    73,    74,    74,
      74,    75,    75,    76,    77,    77,    78,    78,    79,    79,
      80,    80,    80,    81,    81,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    83,    84,    85,
      86,    87,    88,    89,    89,    90,    91,    92,    93,    94,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    96,
      96,    97,    97,    97,    97,    97,    97,    98,    98,    99
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
       1,     1,     1,     1,     1,     1,     1,     5,     5,     4,
       2,     2,     2,    10,     8,     8,     7,     3,     6,     7,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     3,     1,     1,     1,     3,
       1,     1,     4,     7,     2,     2,     1,     3,     3,     1
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
#line 46 "expl.y"
                                                    {printf("Program Finished\n");exit(1);}
#line 1514 "y.tab.c"
    break;

  case 3: /* program: TypeDefBlock GDeclBlock MainBlock  */
#line 47 "expl.y"
                                      {printf("Program Finished\n");exit(1);}
#line 1520 "y.tab.c"
    break;

  case 4: /* program: TypeDefBlock MainBlock  */
#line 48 "expl.y"
                          {printf("Program Finished\n");exit(1);}
#line 1526 "y.tab.c"
    break;

  case 5: /* TypeDefBlock: TYPE TypeDefList ENDTYPE  */
#line 54 "expl.y"
                                        {PrintTypeTable();}
#line 1532 "y.tab.c"
    break;

  case 7: /* TypeDefList: TypeDefList TypeDef  */
#line 58 "expl.y"
                                  {}
#line 1538 "y.tab.c"
    break;

  case 8: /* TypeDefList: TypeDef  */
#line 59 "expl.y"
            {}
#line 1544 "y.tab.c"
    break;

  case 9: /* TypeDef: ID '{' FieldDeclList '}'  */
#line 62 "expl.y"
                                   {
  char* type_name = (yyvsp[-3].no)->varname;
  Tinstall(type_name,0,(yyvsp[-1].fieldlist));
  struct Typetable* declared_type = TLookup(type_name);
  struct Fieldlist* fields = (declared_type)->fields;
  struct Fieldlist* temp = fields;
  int fieldIndex = 1;
  int total_size =0;
  while(temp!=NULL){
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
#line 1577 "y.tab.c"
    break;

  case 10: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 91 "expl.y"
                                        {(yyval.fieldlist) =Finstall((yyvsp[-1].fieldlist),(yyvsp[0].fieldlist));}
#line 1583 "y.tab.c"
    break;

  case 11: /* FieldDeclList: FieldDecl  */
#line 92 "expl.y"
              {(yyval.fieldlist)=(yyvsp[0].fieldlist);}
#line 1589 "y.tab.c"
    break;

  case 12: /* FieldDecl: TypeName ID ';'  */
#line 95 "expl.y"
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
#line 1605 "y.tab.c"
    break;

  case 13: /* TypeName: INT  */
#line 107 "expl.y"
               {(yyval.string)="int";}
#line 1611 "y.tab.c"
    break;

  case 14: /* TypeName: STR  */
#line 108 "expl.y"
        {(yyval.string)="str";}
#line 1617 "y.tab.c"
    break;

  case 15: /* TypeName: ID  */
#line 109 "expl.y"
       {(yyval.string)=(yyvsp[0].no)->varname;}
#line 1623 "y.tab.c"
    break;

  case 16: /* GDeclBlock: DECL GdeclList ENDDECL  */
#line 116 "expl.y"
                                    {print_GSymbolTable();L_cleanup();local_binding=1;param_binding=1;}
#line 1629 "y.tab.c"
    break;

  case 17: /* GDeclBlock: DECL ENDDECL  */
#line 117 "expl.y"
               {}
#line 1635 "y.tab.c"
    break;

  case 18: /* GdeclList: GdeclList Gdecl  */
#line 119 "expl.y"
                            {}
#line 1641 "y.tab.c"
    break;

  case 19: /* GdeclList: Gdecl  */
#line 119 "expl.y"
                                       {}
#line 1647 "y.tab.c"
    break;

  case 20: /* Gdecl: Type GidList ';'  */
#line 121 "expl.y"
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
#line 1680 "y.tab.c"
    break;

  case 21: /* GidList: GidList ',' Gid  */
#line 150 "expl.y"
                          {
  struct tnode* IDNode = (yyvsp[0].no);
  struct tnode* temp = (yyvsp[-2].no);
  while (temp->right != NULL) {  
      temp = temp->right;
  }
  temp->right = IDNode;  
  (yyval.no) = (yyvsp[-2].no); 
}
#line 1694 "y.tab.c"
    break;

  case 23: /* Gid: ID  */
#line 160 "expl.y"
        {
  G_Install((yyvsp[0].no)->varname,NULL,1,-1,NULL,-1);
   (yyval.no)=createNode(-1,1,-1,NULL,NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
}
#line 1703 "y.tab.c"
    break;

  case 24: /* Gid: ID '[' NUM ']'  */
#line 164 "expl.y"
                {
  G_Install((yyvsp[-3].no)->varname,NULL,(yyvsp[-1].no)->val,-1,NULL,-1);
  (yyval.no)=createNode(-1,(yyvsp[-1].no)->val,1,NULL,NULL,(yyvsp[-3].no)->varname,-1,NULL,NULL);
}
#line 1712 "y.tab.c"
    break;

  case 25: /* Gid: ID '[' NUM ']' '[' NUM ']'  */
#line 168 "expl.y"
                            {
  G_Install((yyvsp[-6].no)->varname,NULL,(yyvsp[-4].no)->val,(yyvsp[-1].no)->val,NULL,-1);
   (yyval.no) = createNode(-1,(yyvsp[-4].no)->val,(yyvsp[-1].no)->val,NULL,NULL,(yyvsp[-6].no)->varname,-1,NULL,NULL);
}
#line 1721 "y.tab.c"
    break;

  case 26: /* Gid: MUL ID  */
#line 172 "expl.y"
         { //this is for Pointer
  G_Install((yyvsp[0].no)->varname,TLookup("pointer"),1,-1,NULL,-1);
  (yyval.no) = createNode(-1,1,-1,TLookup("pointer"),NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
}
#line 1730 "y.tab.c"
    break;

  case 27: /* Gid: ID '(' ParamList ')'  */
#line 176 "expl.y"
                       {
  G_Install((yyvsp[-3].no)->varname,NULL,1,-1,(yyvsp[-1].plist),flabel++);
  (yyval.no) = createNode(-1,1,-1,NULL,NULL,(yyvsp[-3].no)->varname,-1,NULL,NULL);
}
#line 1739 "y.tab.c"
    break;

  case 28: /* Gid: ID '(' ')'  */
#line 180 "expl.y"
            {
  G_Install((yyvsp[-2].no)->varname,NULL,1,-1,NULL,flabel++);
  (yyval.no) = createNode(-1,1,-1,NULL,NULL,(yyvsp[-2].no)->varname,-1,NULL,NULL);
}
#line 1748 "y.tab.c"
    break;

  case 31: /* Fdef: Type ID '(' ParamList ')' '{' LdeclBlock Body '}'  */
#line 191 "expl.y"
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
#line 1803 "y.tab.c"
    break;

  case 32: /* Fdef: Type ID '(' ')' '{' LdeclBlock Body '}'  */
#line 241 "expl.y"
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
#line 1850 "y.tab.c"
    break;

  case 33: /* ParamList: ParamList ',' Param  */
#line 284 "expl.y"
                                {
  (yyval.plist) = append_param_list((yyvsp[-2].plist),(yyvsp[0].plist));
}
#line 1858 "y.tab.c"
    break;

  case 34: /* ParamList: Param  */
#line 287 "expl.y"
         {
  (yyval.plist) = (yyvsp[0].plist);
}
#line 1866 "y.tab.c"
    break;

  case 35: /* Param: Type ID  */
#line 291 "expl.y"
                {
  Typetable* param_type = TLookup((yyvsp[-1].string));
  L_Install((yyvsp[0].no)->varname,param_type,1);
  (yyval.plist) = create_param_list(param_type,(yyvsp[0].no)->varname);
}
#line 1876 "y.tab.c"
    break;

  case 36: /* Param: Type MUL ID  */
#line 296 "expl.y"
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
#line 1897 "y.tab.c"
    break;

  case 37: /* MainBlock: INT MAIN '(' ')' '{' LdeclBlock Body '}'  */
#line 317 "expl.y"
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
#line 1922 "y.tab.c"
    break;

  case 38: /* LdeclBlock: DECL LdecList ENDDECL  */
#line 343 "expl.y"
                                   {local_binding=1;}
#line 1928 "y.tab.c"
    break;

  case 39: /* LdeclBlock: DECL ENDDECL  */
#line 344 "expl.y"
               {local_binding=1;}
#line 1934 "y.tab.c"
    break;

  case 40: /* LdeclBlock: %empty  */
#line 345 "expl.y"
             {}
#line 1940 "y.tab.c"
    break;

  case 41: /* LdecList: LdecList Ldecl  */
#line 347 "expl.y"
                           {}
#line 1946 "y.tab.c"
    break;

  case 42: /* LdecList: Ldecl  */
#line 347 "expl.y"
                                      {}
#line 1952 "y.tab.c"
    break;

  case 43: /* Ldecl: Type IdList ';'  */
#line 349 "expl.y"
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
#line 1988 "y.tab.c"
    break;

  case 44: /* IdList: IdList ',' Lid  */
#line 381 "expl.y"
                        {
  struct tnode* IDNode = (yyvsp[0].no);
  struct tnode* temp = (yyvsp[-2].no);
  while (temp->right != NULL) {  
      temp = temp->right;
  }
  temp->right = IDNode;  
  (yyval.no) = (yyvsp[-2].no); 
}
#line 2002 "y.tab.c"
    break;

  case 46: /* Lid: ID  */
#line 391 "expl.y"
        {
   (yyval.no)=createNode(-1,1,-1,NULL,NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
}
#line 2010 "y.tab.c"
    break;

  case 47: /* Lid: MUL ID  */
#line 394 "expl.y"
         { //this is for Pointer
  (yyval.no) = createNode(-1,1,-1,TLookup("pointer"),NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
}
#line 2018 "y.tab.c"
    break;

  case 48: /* Body: PBEGIN Slist ReturnStmt END  */
#line 400 "expl.y"
                                  {(yyval.no) = createNode(-1,1,1,NULL,NULL,NULL,CONNECTOR_NODE,(yyvsp[-2].no),(yyvsp[-1].no));}
#line 2024 "y.tab.c"
    break;

  case 49: /* Body: PBEGIN ReturnStmt END  */
#line 401 "expl.y"
                        {(yyval.no)=(yyvsp[-1].no);}
#line 2030 "y.tab.c"
    break;

  case 50: /* Type: INT  */
#line 403 "expl.y"
           {(yyval.string) = "int";}
#line 2036 "y.tab.c"
    break;

  case 51: /* Type: STR  */
#line 404 "expl.y"
      {(yyval.string) = "str";}
#line 2042 "y.tab.c"
    break;

  case 52: /* Type: ID  */
#line 405 "expl.y"
     {
    char* type_name = (yyvsp[0].no)->varname;
    if(TLookup((yyvsp[0].no)->varname)==NULL){
      printf("ERROR : The Following type is not user-defined %s\n",type_name);
      return -1;
    }
    (yyval.string)=(yyvsp[0].no)->varname;
  }
#line 2055 "y.tab.c"
    break;

  case 53: /* Slist: Slist Stmt  */
#line 414 "expl.y"
                   {
  (yyval.no)=createNode(-1,1,1,NULL,NULL,NULL,CONNECTOR_NODE,(yyvsp[-1].no),(yyvsp[0].no));
}
#line 2063 "y.tab.c"
    break;

  case 54: /* Slist: Stmt  */
#line 417 "expl.y"
       {(yyval.no)=(yyvsp[0].no);}
#line 2069 "y.tab.c"
    break;

  case 55: /* Stmt: InputStmt  */
#line 420 "expl.y"
                 {(yyval.no)=(yyvsp[0].no);}
#line 2075 "y.tab.c"
    break;

  case 56: /* Stmt: OutputStmt  */
#line 421 "expl.y"
             {(yyval.no)=(yyvsp[0].no);}
#line 2081 "y.tab.c"
    break;

  case 57: /* Stmt: AsgStmt  */
#line 422 "expl.y"
         {(yyval.no)=(yyvsp[0].no);}
#line 2087 "y.tab.c"
    break;

  case 58: /* Stmt: Ifstmt  */
#line 423 "expl.y"
        {(yyval.no)=(yyvsp[0].no);}
#line 2093 "y.tab.c"
    break;

  case 59: /* Stmt: WhileStmt  */
#line 424 "expl.y"
           {(yyval.no)=(yyvsp[0].no);}
#line 2099 "y.tab.c"
    break;

  case 60: /* Stmt: DoWhileStmt  */
#line 425 "expl.y"
             {(yyval.no)=(yyvsp[0].no);}
#line 2105 "y.tab.c"
    break;

  case 61: /* Stmt: BreakStmt  */
#line 426 "expl.y"
           {(yyval.no)=(yyvsp[0].no);}
#line 2111 "y.tab.c"
    break;

  case 62: /* Stmt: ContinueStmt  */
#line 427 "expl.y"
              {(yyval.no)=(yyvsp[0].no);}
#line 2117 "y.tab.c"
    break;

  case 63: /* Stmt: ReturnStmt  */
#line 428 "expl.y"
            {(yyval.no)=(yyvsp[0].no);}
#line 2123 "y.tab.c"
    break;

  case 64: /* Stmt: BreakpointStmt  */
#line 429 "expl.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 2129 "y.tab.c"
    break;

  case 65: /* Stmt: initializeStmt  */
#line 430 "expl.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 2135 "y.tab.c"
    break;

  case 66: /* Stmt: AllocStmt  */
#line 431 "expl.y"
           {(yyval.no)=(yyvsp[0].no);}
#line 2141 "y.tab.c"
    break;

  case 67: /* InputStmt: READ '(' Identifier ')' ';'  */
#line 437 "expl.y"
                                        {
    // printf("Reading");
    (yyval.no) = makeNonLeafNode((yyvsp[-2].no),NULL,READ_NODE,"_");
  }
#line 2150 "y.tab.c"
    break;

  case 68: /* OutputStmt: WRITE '(' expr ')' ';'  */
#line 442 "expl.y"
                                    {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),NULL,WRITE_NODE,"_");}
#line 2156 "y.tab.c"
    break;

  case 69: /* AsgStmt: Identifier '=' expr ';'  */
#line 444 "expl.y"
                                  {
  // printf("%s\n",$1->Gentry->name);
  (yyval.no) = makeNonLeafNode((yyvsp[-3].no),(yyvsp[-1].no),OPERATOR_NODE,"=");
  }
#line 2165 "y.tab.c"
    break;

  case 70: /* BreakStmt: BREAK ';'  */
#line 449 "expl.y"
                      {(yyval.no)=makeNonLeafNode(NULL,NULL,BREAK_NODE,"_");}
#line 2171 "y.tab.c"
    break;

  case 71: /* BreakpointStmt: BREAKPOINT ';'  */
#line 451 "expl.y"
                                {(yyval.no)=makeNonLeafNode(NULL,NULL,BREAKPOINT_NODE,"_");}
#line 2177 "y.tab.c"
    break;

  case 72: /* ContinueStmt: CONTINUE ';'  */
#line 453 "expl.y"
                            {(yyval.no)=makeNonLeafNode(NULL,NULL,CONTINUE_NODE,"_");}
#line 2183 "y.tab.c"
    break;

  case 73: /* Ifstmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF ';'  */
#line 455 "expl.y"
                                                         {
  struct tnode* if_else_node = makeNonLeafNode((yyvsp[-7].no),(yyvsp[-4].no),IF_ELSE_NODE,"_");
  if_else_node->middle = (yyvsp[-2].no);
  (yyval.no) = if_else_node;
}
#line 2193 "y.tab.c"
    break;

  case 74: /* Ifstmt: IF '(' expr ')' THEN Slist ENDIF ';'  */
#line 460 "expl.y"
                                       {(yyval.no) = makeNonLeafNode((yyvsp[-5].no),(yyvsp[-2].no),IF_NODE,"_");}
#line 2199 "y.tab.c"
    break;

  case 75: /* WhileStmt: WHILE '(' expr ')' DO Slist ENDWHILE ';'  */
#line 463 "expl.y"
                                                     {(yyval.no) = makeNonLeafNode((yyvsp[-5].no),(yyvsp[-2].no),WHILE_NODE,"_");}
#line 2205 "y.tab.c"
    break;

  case 76: /* DoWhileStmt: DO Slist WHILE '(' expr ')' ';'  */
#line 465 "expl.y"
                                              {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[-5].no),DO_WHILE_NODE,"_");}
#line 2211 "y.tab.c"
    break;

  case 77: /* ReturnStmt: RETURN expr ';'  */
#line 467 "expl.y"
                             {(yyval.no) = makeNonLeafNode((yyvsp[-1].no),NULL,RETURN_NODE,"_");}
#line 2217 "y.tab.c"
    break;

  case 78: /* initializeStmt: Identifier '=' INITIALIZE '(' ')' ';'  */
#line 469 "expl.y"
                                                       {(yyval.no) = makeNonLeafNode((yyvsp[-5].no),NULL,INITIALIZE_NODE,"_");}
#line 2223 "y.tab.c"
    break;

  case 79: /* AllocStmt: Identifier '=' ALLOC '(' expr ')' ';'  */
#line 471 "expl.y"
                                                  {(yyval.no)=makeNonLeafNode((yyvsp[-6].no),(yyvsp[-2].no),ALLOC_NODE,"_");}
#line 2229 "y.tab.c"
    break;

  case 80: /* expr: expr PLUS expr  */
#line 475 "expl.y"
                       {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"+");}
#line 2235 "y.tab.c"
    break;

  case 81: /* expr: expr MINUS expr  */
#line 476 "expl.y"
                      {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"-");}
#line 2241 "y.tab.c"
    break;

  case 82: /* expr: expr MUL expr  */
#line 477 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"*");}
#line 2247 "y.tab.c"
    break;

  case 83: /* expr: expr DIV expr  */
#line 478 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"/");}
#line 2253 "y.tab.c"
    break;

  case 84: /* expr: expr MOD expr  */
#line 479 "expl.y"
                  {(yyval.no)=makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"%");}
#line 2259 "y.tab.c"
    break;

  case 85: /* expr: expr LT expr  */
#line 480 "expl.y"
                 {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"<");}
#line 2265 "y.tab.c"
    break;

  case 86: /* expr: expr LTE expr  */
#line 481 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"<=");}
#line 2271 "y.tab.c"
    break;

  case 87: /* expr: expr GT expr  */
#line 482 "expl.y"
                 {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,">");}
#line 2277 "y.tab.c"
    break;

  case 88: /* expr: expr GTE expr  */
#line 483 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,">=");}
#line 2283 "y.tab.c"
    break;

  case 89: /* expr: expr EQUALS expr  */
#line 484 "expl.y"
                     {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"==");}
#line 2289 "y.tab.c"
    break;

  case 90: /* expr: expr NOTEQUALS expr  */
#line 485 "expl.y"
                        {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"!=");}
#line 2295 "y.tab.c"
    break;

  case 91: /* expr: expr AND expr  */
#line 486 "expl.y"
                  {(yyval.no)=makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"&&");}
#line 2301 "y.tab.c"
    break;

  case 92: /* expr: expr OR expr  */
#line 487 "expl.y"
                 {(yyval.no)=makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"||");}
#line 2307 "y.tab.c"
    break;

  case 93: /* expr: ID '(' ')'  */
#line 488 "expl.y"
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
#line 2330 "y.tab.c"
    break;

  case 94: /* expr: ID '(' ArgList ')'  */
#line 506 "expl.y"
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
#line 2354 "y.tab.c"
    break;

  case 95: /* expr: '(' expr ')'  */
#line 525 "expl.y"
                  {(yyval.no) = (yyvsp[-1].no);}
#line 2360 "y.tab.c"
    break;

  case 96: /* expr: NUM  */
#line 526 "expl.y"
          {(yyval.no) = (yyvsp[0].no);}
#line 2366 "y.tab.c"
    break;

  case 97: /* expr: STRING  */
#line 527 "expl.y"
           {(yyval.no)=(yyvsp[0].no);}
#line 2372 "y.tab.c"
    break;

  case 98: /* expr: Identifier  */
#line 528 "expl.y"
               {(yyval.no)=(yyvsp[0].no);}
#line 2378 "y.tab.c"
    break;

  case 99: /* ArgList: ArgList ',' expr  */
#line 532 "expl.y"
                           {
  (yyval.arglist)=append_arglist((yyvsp[-2].arglist),(yyvsp[0].no));
}
#line 2386 "y.tab.c"
    break;

  case 100: /* ArgList: expr  */
#line 535 "expl.y"
       {
  (yyval.arglist)=create_arglist((yyvsp[0].no));
}
#line 2394 "y.tab.c"
    break;

  case 101: /* Identifier: ID  */
#line 539 "expl.y"
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
#line 2412 "y.tab.c"
    break;

  case 102: /* Identifier: ID '[' index ']'  */
#line 552 "expl.y"
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
#line 2429 "y.tab.c"
    break;

  case 103: /* Identifier: ID '[' index ']' '[' index ']'  */
#line 564 "expl.y"
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
#line 2446 "y.tab.c"
    break;

  case 104: /* Identifier: MUL ID  */
#line 576 "expl.y"
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
#line 2473 "y.tab.c"
    break;

  case 105: /* Identifier: '&' Identifier  */
#line 598 "expl.y"
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
#line 2500 "y.tab.c"
    break;

  case 106: /* Identifier: Field  */
#line 620 "expl.y"
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
  else{
    printf("ERROR: varaible not declared !! :%s\n",temp->varname);
    return -1;
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
#line 2541 "y.tab.c"
    break;

  case 107: /* Field: Field '.' ID  */
#line 658 "expl.y"
                     {
  struct tnode* temp = (yyvsp[-2].no);
  while(temp->left!=NULL){
    temp=temp->left;
  }
  temp->left=(yyvsp[0].no);
  (yyval.no)=(yyvsp[-2].no);
}
#line 2554 "y.tab.c"
    break;

  case 108: /* Field: ID '.' ID  */
#line 666 "expl.y"
            {
  (yyvsp[-2].no)->left = (yyvsp[0].no);
  (yyval.no)=(yyvsp[-2].no);
}
#line 2563 "y.tab.c"
    break;

  case 109: /* index: expr  */
#line 672 "expl.y"
             {(yyval.no)=(yyvsp[0].no);}
#line 2569 "y.tab.c"
    break;


#line 2573 "y.tab.c"

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

#line 675 "expl.y"


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
