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

#line 83 "y.tab.c"

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
    STR = 290                      /* STR  */
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "expl.y"

  struct tnode *no;
  int integer;

#line 211 "y.tab.c"

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
  YYSYMBOL_NUM = 3,                        /* NUM  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_PLUS = 5,                       /* PLUS  */
  YYSYMBOL_MINUS = 6,                      /* MINUS  */
  YYSYMBOL_MUL = 7,                        /* MUL  */
  YYSYMBOL_DIV = 8,                        /* DIV  */
  YYSYMBOL_MOD = 9,                        /* MOD  */
  YYSYMBOL_END = 10,                       /* END  */
  YYSYMBOL_PBEGIN = 11,                    /* PBEGIN  */
  YYSYMBOL_READ = 12,                      /* READ  */
  YYSYMBOL_WRITE = 13,                     /* WRITE  */
  YYSYMBOL_ID = 14,                        /* ID  */
  YYSYMBOL_IF = 15,                        /* IF  */
  YYSYMBOL_ELSE = 16,                      /* ELSE  */
  YYSYMBOL_THEN = 17,                      /* THEN  */
  YYSYMBOL_ENDIF = 18,                     /* ENDIF  */
  YYSYMBOL_ENDWHILE = 19,                  /* ENDWHILE  */
  YYSYMBOL_WHILE = 20,                     /* WHILE  */
  YYSYMBOL_OR = 21,                        /* OR  */
  YYSYMBOL_AND = 22,                       /* AND  */
  YYSYMBOL_LT = 23,                        /* LT  */
  YYSYMBOL_GT = 24,                        /* GT  */
  YYSYMBOL_LTE = 25,                       /* LTE  */
  YYSYMBOL_GTE = 26,                       /* GTE  */
  YYSYMBOL_EQUALS = 27,                    /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 28,                 /* NOTEQUALS  */
  YYSYMBOL_DO = 29,                        /* DO  */
  YYSYMBOL_BREAK = 30,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 31,                  /* CONTINUE  */
  YYSYMBOL_DECL = 32,                      /* DECL  */
  YYSYMBOL_ENDDECL = 33,                   /* ENDDECL  */
  YYSYMBOL_INT = 34,                       /* INT  */
  YYSYMBOL_STR = 35,                       /* STR  */
  YYSYMBOL_36_ = 36,                       /* ';'  */
  YYSYMBOL_37_ = 37,                       /* ','  */
  YYSYMBOL_38_ = 38,                       /* '['  */
  YYSYMBOL_39_ = 39,                       /* ']'  */
  YYSYMBOL_40_ = 40,                       /* '('  */
  YYSYMBOL_41_ = 41,                       /* ')'  */
  YYSYMBOL_42_ = 42,                       /* '='  */
  YYSYMBOL_43_ = 43,                       /* '&'  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_program = 45,                   /* program  */
  YYSYMBOL_Declarations = 46,              /* Declarations  */
  YYSYMBOL_DeclList = 47,                  /* DeclList  */
  YYSYMBOL_Decl = 48,                      /* Decl  */
  YYSYMBOL_Type = 49,                      /* Type  */
  YYSYMBOL_Varlist = 50,                   /* Varlist  */
  YYSYMBOL_Slist = 51,                     /* Slist  */
  YYSYMBOL_Stmt = 52,                      /* Stmt  */
  YYSYMBOL_InputStmt = 53,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 54,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 55,                   /* AsgStmt  */
  YYSYMBOL_BreakStmt = 56,                 /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 57,              /* ContinueStmt  */
  YYSYMBOL_Ifstmt = 58,                    /* Ifstmt  */
  YYSYMBOL_WhileStmt = 59,                 /* WhileStmt  */
  YYSYMBOL_DoWhileStmt = 60,               /* DoWhileStmt  */
  YYSYMBOL_expr = 61,                      /* expr  */
  YYSYMBOL_Identifier = 62,                /* Identifier  */
  YYSYMBOL_index = 63                      /* index  */
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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   404

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  142

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   290


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
       2,     2,     2,     2,     2,     2,     2,     2,    43,     2,
      40,    41,     2,     2,    37,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    36,
       2,    42,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    38,     2,    39,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    30,    30,    43,    44,    48,    49,    51,    52,    54,
      81,    82,    84,    93,   104,   113,   122,   126,   130,   134,
     139,   142,   145,   146,   147,   148,   149,   150,   151,   152,
     155,   160,   162,   167,   169,   171,   175,   178,   180,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   202,   220,   233,   244,
     267,   288,   289
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
  "\"end of file\"", "error", "\"invalid token\"", "NUM", "STRING",
  "PLUS", "MINUS", "MUL", "DIV", "MOD", "END", "PBEGIN", "READ", "WRITE",
  "ID", "IF", "ELSE", "THEN", "ENDIF", "ENDWHILE", "WHILE", "OR", "AND",
  "LT", "GT", "LTE", "GTE", "EQUALS", "NOTEQUALS", "DO", "BREAK",
  "CONTINUE", "DECL", "ENDDECL", "INT", "STR", "';'", "','", "'['", "']'",
  "'('", "')'", "'='", "'&'", "$accept", "program", "Declarations",
  "DeclList", "Decl", "Type", "Varlist", "Slist", "Stmt", "InputStmt",
  "OutputStmt", "AsgStmt", "BreakStmt", "ContinueStmt", "Ifstmt",
  "WhileStmt", "DoWhileStmt", "expr", "Identifier", "index", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-34)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -9,    -1,    17,   -14,    25,   212,   -34,   -34,   -34,   -34,
     -34,    66,   -34,    -2,     9,    -3,    -8,    -6,     3,     2,
       4,   297,     0,    27,    -4,   237,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,    31,   -34,   -34,    51,    29,
     -30,   -34,   -34,    -4,    21,    23,    21,    21,   317,   -34,
     -34,   -34,    60,   -34,    21,   -34,   105,   -34,     1,    75,
     -34,   -34,    21,    63,   -34,   -34,   -34,    71,   120,   128,
      77,   -34,   344,    76,   106,    83,    86,   157,    21,    21,
      21,    21,    21,    21,    21,    21,    21,    21,    21,    21,
      21,    87,    93,   115,   109,    21,   -34,   101,   -34,   137,
     -34,   -34,    98,    98,   -34,   -34,   -34,   368,   376,    74,
      74,    74,    74,    69,    69,   -34,    23,   297,   297,   165,
     154,   119,   121,   187,   257,   -18,   129,   138,   -34,   297,
     123,   131,   -34,   -34,   172,   277,   -34,   -34,   156,   141,
     -34,   -34
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     1,     4,     6,    10,
      11,     0,     8,     0,     0,     0,     0,     0,    56,     0,
       0,     0,     0,     0,     0,     0,    21,    22,    23,    24,
      28,    29,    25,    26,    27,     0,     5,     7,     0,    18,
       0,    59,     3,     0,     0,     0,     0,     0,     0,    33,
      34,    60,     0,    20,     0,    19,     0,     9,     0,     0,
      53,    54,     0,     0,    55,    61,    62,     0,     0,     0,
       0,     2,     0,     0,     0,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    57,     0,     0,     0,    32,    17,    13,     0,
      30,    52,    39,    40,    41,    42,    43,    51,    50,    44,
      46,    45,    47,    48,    49,    31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    14,    58,     0,
       0,     0,    38,    16,     0,     0,    36,    37,     0,     0,
      12,    35
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -34,   -34,   -34,   -34,   185,   -34,   -34,   -20,   -21,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -33,    -5,    81
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     5,    11,    12,    13,    40,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    63,    64,    67
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      35,    48,     1,    14,    53,    38,    57,    58,    74,     3,
      18,   118,    39,    68,    69,    75,    35,     6,   132,    51,
      35,    72,     7,    41,    60,    61,    65,    53,    14,    77,
      14,     4,    43,    42,    44,    18,    49,    18,    59,    24,
      66,    45,    46,    35,    47,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,     8,     9,
      10,    62,   119,    50,    24,    55,    24,    56,    78,    79,
      80,    81,    82,    54,    78,    79,    80,    81,    82,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    85,    86,    87,    88,    71,   123,   124,    36,
       9,    10,    53,    53,    91,    80,    81,    82,    73,   135,
      92,    66,    35,    35,    53,    97,    76,    95,    35,    35,
      98,    99,   100,   115,    35,    78,    79,    80,    81,    82,
      35,   116,   117,    78,    79,    80,    81,    82,   118,   120,
     121,    83,    84,    85,    86,    87,    88,    89,    90,    83,
      84,    85,    86,    87,    88,    89,    90,   126,   127,   136,
     128,    93,    78,    79,    80,    81,    82,   137,   133,    94,
      78,    79,    80,    81,    82,   138,   134,   141,    83,    84,
      85,    86,    87,    88,    89,    90,    83,    84,    85,    86,
      87,    88,    89,    90,    14,   140,    37,   122,   101,    16,
      17,    18,    19,   129,     0,   130,   125,    20,     0,     0,
       0,     0,     0,     0,     0,     0,    21,    22,    23,    14,
       0,     0,    15,     0,    16,    17,    18,    19,     0,     0,
      24,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,    21,    22,    23,    14,     0,     0,    52,     0,    16,
      17,    18,    19,     0,     0,    24,     0,    20,     0,     0,
       0,     0,     0,     0,    14,     0,    21,    22,    23,    16,
      17,    18,    19,     0,     0,     0,   131,    20,     0,     0,
      24,     0,     0,     0,    14,     0,    21,    22,    23,    16,
      17,    18,    19,     0,     0,   139,     0,    20,     0,     0,
      24,     0,     0,     0,    14,     0,    21,    22,    23,    16,
      17,    18,    19,     0,     0,     0,     0,    20,     0,     0,
      24,     0,     0,     0,    14,     0,    21,    22,    23,    16,
      17,    18,    19,     0,     0,     0,     0,    70,     0,     0,
      24,     0,     0,     0,     0,     0,    21,    22,    23,    78,
      79,    80,    81,    82,     0,     0,     0,     0,     0,     0,
      24,     0,     0,     0,     0,    83,    84,    85,    86,    87,
      88,    89,    90,    78,    79,    80,    81,    82,     0,     0,
      96,    78,    79,    80,    81,    82,     0,     0,     0,     0,
      84,    85,    86,    87,    88,    89,    90,     0,     0,    85,
      86,    87,    88,    89,    90
};

static const yytype_int16 yycheck[] =
{
       5,    21,    11,     7,    25,     7,    36,    37,     7,    10,
      14,    29,    14,    46,    47,    14,    21,     0,    36,    24,
      25,    54,    36,    14,     3,     4,     3,    48,     7,    62,
       7,    32,    40,    36,    40,    14,    36,    14,    43,    43,
      45,    38,    40,    48,    40,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    33,    34,
      35,    40,    95,    36,    43,    14,    43,    38,     5,     6,
       7,     8,     9,    42,     5,     6,     7,     8,     9,     5,
       6,     7,     8,     9,    21,    22,    23,    24,    25,    26,
      27,    28,    23,    24,    25,    26,    36,   117,   118,    33,
      34,    35,   123,   124,    41,     7,     8,     9,     3,   129,
      39,   116,   117,   118,   135,    39,    41,    40,   123,   124,
      14,    38,    36,    36,   129,     5,     6,     7,     8,     9,
     135,    38,    17,     5,     6,     7,     8,     9,    29,    38,
       3,    21,    22,    23,    24,    25,    26,    27,    28,    21,
      22,    23,    24,    25,    26,    27,    28,     3,    39,    36,
      39,    41,     5,     6,     7,     8,     9,    36,    39,    41,
       5,     6,     7,     8,     9,     3,    38,    36,    21,    22,
      23,    24,    25,    26,    27,    28,    21,    22,    23,    24,
      25,    26,    27,    28,     7,    39,    11,   116,    41,    12,
      13,    14,    15,    16,    -1,    18,    41,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,     7,
      -1,    -1,    10,    -1,    12,    13,    14,    15,    -1,    -1,
      43,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,     7,    -1,    -1,    10,    -1,    12,
      13,    14,    15,    -1,    -1,    43,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    29,    30,    31,    12,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    -1,    -1,
      43,    -1,    -1,    -1,     7,    -1,    29,    30,    31,    12,
      13,    14,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      43,    -1,    -1,    -1,     7,    -1,    29,    30,    31,    12,
      13,    14,    15,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      43,    -1,    -1,    -1,     7,    -1,    29,    30,    31,    12,
      13,    14,    15,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,     5,     6,     7,     8,     9,    -1,    -1,
      36,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    23,
      24,    25,    26,    27,    28
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    11,    45,    10,    32,    46,     0,    36,    33,    34,
      35,    47,    48,    49,     7,    10,    12,    13,    14,    15,
      20,    29,    30,    31,    43,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    62,    33,    48,     7,    14,
      50,    14,    36,    40,    40,    38,    40,    40,    51,    36,
      36,    62,    10,    52,    42,    14,    38,    36,    37,    62,
       3,     4,    40,    61,    62,     3,    62,    63,    61,    61,
      20,    36,    61,     3,     7,    14,    41,    61,     5,     6,
       7,     8,     9,    21,    22,    23,    24,    25,    26,    27,
      28,    41,    39,    41,    41,    40,    36,    39,    14,    38,
      36,    41,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    36,    38,    17,    29,    61,
      38,     3,    63,    51,    51,    41,     3,    39,    39,    16,
      18,    19,    36,    39,    38,    51,    36,    36,     3,    18,
      39,    36
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    45,    45,    46,    46,    47,    47,    48,
      49,    49,    50,    50,    50,    50,    50,    50,    50,    50,
      51,    51,    52,    52,    52,    52,    52,    52,    52,    52,
      53,    54,    55,    56,    57,    58,    58,    59,    60,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    62,    62,    62,    62,
      62,    63,    63
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     4,     3,     3,     2,     2,     1,     3,
       1,     1,     9,     4,     6,     3,     7,     4,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     5,     4,     2,     2,    10,     8,     8,     7,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     4,     7,     2,
       2,     1,     1
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
  case 2: /* program: PBEGIN Declarations Slist END ';'  */
#line 30 "expl.y"
                                           {
    (yyval.no) = (yyvsp[-2].no);
    // printf("reached Here\n");
    FILE* target_file = fopen("code.xsm","w");
    fprintf(target_file, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0); 
    fprintf(target_file,"MOV SP,%d\n",binding_pos); //binding pos should contain the base of the stack after declarations
    printf("Preorder of Syntax Tree : ");
    preorder((yyvsp[-2].no));
    printf("\n\n");
    // evaluator($2);
    int result_reg =code_gen((yyvsp[-2].no),target_file);
    exit(1);
   }
#line 1404 "y.tab.c"
    break;

  case 3: /* program: PBEGIN Declarations END ';'  */
#line 43 "expl.y"
                                {printf("only declarations in program"); exit(1);}
#line 1410 "y.tab.c"
    break;

  case 4: /* program: PBEGIN END ';'  */
#line 44 "expl.y"
                   {printf("Program finished");exit(1);}
#line 1416 "y.tab.c"
    break;

  case 5: /* Declarations: DECL DeclList ENDDECL  */
#line 48 "expl.y"
                                      {}
#line 1422 "y.tab.c"
    break;

  case 6: /* Declarations: DECL ENDDECL  */
#line 49 "expl.y"
               {}
#line 1428 "y.tab.c"
    break;

  case 7: /* DeclList: DeclList Decl  */
#line 51 "expl.y"
                         {}
#line 1434 "y.tab.c"
    break;

  case 8: /* DeclList: Decl  */
#line 52 "expl.y"
       {}
#line 1440 "y.tab.c"
    break;

  case 9: /* Decl: Type Varlist ';'  */
#line 54 "expl.y"
                        {
  int declaration_type = (yyvsp[-2].integer);
  struct tnode* varList = (yyvsp[-1].no);
  while(varList!=NULL){
    if(LookUp(varList->varname)==NULL){
      int row_num = varList->row;
      int col_num = varList->col;
      int type = varList->type;
      if(type==POINTER_TYPE){
        if(declaration_type==INTEGER_TYPE){
          G_Install(varList->varname,POINTER_INT_TYPE,row_num,col_num);
        }else{
          G_Install(varList->varname,POINTER_STR_TYPE,row_num,col_num);
        }
      }
      else
      G_Install(varList->varname,declaration_type,row_num,col_num);
    }else{
      printf("ERROR: REDECLARATION OF VARIABLE: %s\n",varList->varname);
      exit(1);
    }
    // free($2);
    varList=varList->right;
  }
  print_GSymbolTable();
}
#line 1471 "y.tab.c"
    break;

  case 10: /* Type: INT  */
#line 81 "expl.y"
           {(yyval.integer) = INTEGER_TYPE;}
#line 1477 "y.tab.c"
    break;

  case 11: /* Type: STR  */
#line 82 "expl.y"
      {(yyval.integer) = STRING_TYPE;}
#line 1483 "y.tab.c"
    break;

  case 12: /* Varlist: Varlist ',' ID '[' NUM ']' '[' NUM ']'  */
#line 84 "expl.y"
                                                {
  struct tnode* IDNode = createNode(-1,(yyvsp[-4].no)->val,(yyvsp[-1].no)->val,-1,NULL,(yyvsp[-6].no)->varname,-1,NULL,NULL);
  struct tnode* temp = (yyvsp[-8].no);
  while (temp->right != NULL) {  
      temp = temp->right;
  }
  temp->right = IDNode;  
  (yyval.no) = (yyvsp[-8].no); 
}
#line 1497 "y.tab.c"
    break;

  case 13: /* Varlist: Varlist ',' MUL ID  */
#line 93 "expl.y"
                     {
  // printf("POINTER Variable\n");
  struct tnode* IDNode = createNode(-1,1,-1,POINTER_TYPE,NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
  struct tnode* temp = (yyvsp[-3].no);
  while (temp->right != NULL) {  
      temp = temp->right;
  }
  temp->right = IDNode;  
  (yyval.no) = (yyvsp[-3].no); 
}
#line 1512 "y.tab.c"
    break;

  case 14: /* Varlist: Varlist ',' ID '[' NUM ']'  */
#line 104 "expl.y"
                             {
  struct tnode* IDNode = createNode(-1,(yyvsp[-1].no)->val,1,-1,NULL,(yyvsp[-3].no)->varname,-1,NULL,NULL);
  struct tnode* temp = (yyvsp[-5].no);
  while (temp->right != NULL) {  
      temp = temp->right;
  }
  temp->right = IDNode;  
  (yyval.no) = (yyvsp[-5].no); 
}
#line 1526 "y.tab.c"
    break;

  case 15: /* Varlist: Varlist ',' ID  */
#line 113 "expl.y"
                 {
  struct tnode* IDNode = createNode(-1,1,-1,-1,NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
  struct tnode* temp = (yyvsp[-2].no);
  while (temp->right != NULL) {  
      temp = temp->right;
  }
  temp->right = IDNode;  
  (yyval.no) = (yyvsp[-2].no); 
}
#line 1540 "y.tab.c"
    break;

  case 16: /* Varlist: ID '[' NUM ']' '[' NUM ']'  */
#line 122 "expl.y"
                             {
  // printf("2D-ARRAY\n");
  (yyval.no) = createNode(-1,(yyvsp[-4].no)->val,(yyvsp[-1].no)->val,1,NULL,(yyvsp[-6].no)->varname,-1,NULL,NULL);
}
#line 1549 "y.tab.c"
    break;

  case 17: /* Varlist: ID '[' NUM ']'  */
#line 126 "expl.y"
                {
  // printf("%s\n",$1->varname);
  (yyval.no)=createNode(-1,(yyvsp[-1].no)->val,1,1,NULL,(yyvsp[-3].no)->varname,-1,NULL,NULL);
}
#line 1558 "y.tab.c"
    break;

  case 18: /* Varlist: ID  */
#line 130 "expl.y"
     {
  // printf("%s\n",$1->varname);
    (yyval.no)=createNode(-1,1,-1,-1,NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
  }
#line 1567 "y.tab.c"
    break;

  case 19: /* Varlist: MUL ID  */
#line 134 "expl.y"
         {
  // printf("Pointer Variable\n");
  (yyval.no) = createNode(-1,1,-1,POINTER_TYPE,NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
}
#line 1576 "y.tab.c"
    break;

  case 20: /* Slist: Slist Stmt  */
#line 139 "expl.y"
                   {
  (yyval.no)=createNode(-1,1,1,-1,NULL,NULL,CONNECTOR_NODE,(yyvsp[-1].no),(yyvsp[0].no));
}
#line 1584 "y.tab.c"
    break;

  case 21: /* Slist: Stmt  */
#line 142 "expl.y"
       {(yyval.no)=(yyvsp[0].no);}
#line 1590 "y.tab.c"
    break;

  case 22: /* Stmt: InputStmt  */
#line 145 "expl.y"
                 {(yyval.no)=(yyvsp[0].no);}
#line 1596 "y.tab.c"
    break;

  case 23: /* Stmt: OutputStmt  */
#line 146 "expl.y"
             {(yyval.no)=(yyvsp[0].no);}
#line 1602 "y.tab.c"
    break;

  case 24: /* Stmt: AsgStmt  */
#line 147 "expl.y"
         {(yyval.no)=(yyvsp[0].no);}
#line 1608 "y.tab.c"
    break;

  case 25: /* Stmt: Ifstmt  */
#line 148 "expl.y"
        {(yyval.no)=(yyvsp[0].no);}
#line 1614 "y.tab.c"
    break;

  case 26: /* Stmt: WhileStmt  */
#line 149 "expl.y"
           {(yyval.no)=(yyvsp[0].no);}
#line 1620 "y.tab.c"
    break;

  case 27: /* Stmt: DoWhileStmt  */
#line 150 "expl.y"
             {(yyval.no)=(yyvsp[0].no);}
#line 1626 "y.tab.c"
    break;

  case 28: /* Stmt: BreakStmt  */
#line 151 "expl.y"
           {(yyval.no)=(yyvsp[0].no);}
#line 1632 "y.tab.c"
    break;

  case 29: /* Stmt: ContinueStmt  */
#line 152 "expl.y"
              {(yyval.no)=(yyvsp[0].no);}
#line 1638 "y.tab.c"
    break;

  case 30: /* InputStmt: READ '(' Identifier ')' ';'  */
#line 155 "expl.y"
                                        {
    // printf("Reading");
    (yyval.no) = makeNonLeafNode((yyvsp[-2].no),NULL,READ_NODE,"_");
  }
#line 1647 "y.tab.c"
    break;

  case 31: /* OutputStmt: WRITE '(' expr ')' ';'  */
#line 160 "expl.y"
                                    {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),NULL,WRITE_NODE,"_");}
#line 1653 "y.tab.c"
    break;

  case 32: /* AsgStmt: Identifier '=' expr ';'  */
#line 162 "expl.y"
                                  {
  // printf("%s\n",$1->Gentry->name);
  (yyval.no) = makeNonLeafNode((yyvsp[-3].no),(yyvsp[-1].no),OPERATOR_NODE,"=");
  }
#line 1662 "y.tab.c"
    break;

  case 33: /* BreakStmt: BREAK ';'  */
#line 167 "expl.y"
                      {(yyval.no)=makeNonLeafNode(NULL,NULL,BREAK_NODE,"_");}
#line 1668 "y.tab.c"
    break;

  case 34: /* ContinueStmt: CONTINUE ';'  */
#line 169 "expl.y"
                            {(yyval.no)=makeNonLeafNode(NULL,NULL,CONTINUE_NODE,"_");}
#line 1674 "y.tab.c"
    break;

  case 35: /* Ifstmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF ';'  */
#line 171 "expl.y"
                                                         {
  struct tnode* statements_node = makeNonLeafNode((yyvsp[-4].no),(yyvsp[-2].no),ELSE_NODE,"_");
  (yyval.no) = makeNonLeafNode((yyvsp[-7].no),statements_node,IF_NODE,"_");
}
#line 1683 "y.tab.c"
    break;

  case 36: /* Ifstmt: IF '(' expr ')' THEN Slist ENDIF ';'  */
#line 175 "expl.y"
                                       {(yyval.no) = makeNonLeafNode((yyvsp[-5].no),(yyvsp[-2].no),IF_NODE,"_");}
#line 1689 "y.tab.c"
    break;

  case 37: /* WhileStmt: WHILE '(' expr ')' DO Slist ENDWHILE ';'  */
#line 178 "expl.y"
                                                     {(yyval.no) = makeNonLeafNode((yyvsp[-5].no),(yyvsp[-2].no),WHILE_NODE,"_");}
#line 1695 "y.tab.c"
    break;

  case 38: /* DoWhileStmt: DO Slist WHILE '(' expr ')' ';'  */
#line 180 "expl.y"
                                              {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[-5].no),DO_WHILE_NODE,"_");}
#line 1701 "y.tab.c"
    break;

  case 39: /* expr: expr PLUS expr  */
#line 182 "expl.y"
                       {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"+");}
#line 1707 "y.tab.c"
    break;

  case 40: /* expr: expr MINUS expr  */
#line 183 "expl.y"
                      {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"-");}
#line 1713 "y.tab.c"
    break;

  case 41: /* expr: expr MUL expr  */
#line 184 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"*");}
#line 1719 "y.tab.c"
    break;

  case 42: /* expr: expr DIV expr  */
#line 185 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"/");}
#line 1725 "y.tab.c"
    break;

  case 43: /* expr: expr MOD expr  */
#line 186 "expl.y"
                  {(yyval.no)=makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"%");}
#line 1731 "y.tab.c"
    break;

  case 44: /* expr: expr LT expr  */
#line 187 "expl.y"
                 {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"<");}
#line 1737 "y.tab.c"
    break;

  case 45: /* expr: expr LTE expr  */
#line 188 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"<=");}
#line 1743 "y.tab.c"
    break;

  case 46: /* expr: expr GT expr  */
#line 189 "expl.y"
                 {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,">");}
#line 1749 "y.tab.c"
    break;

  case 47: /* expr: expr GTE expr  */
#line 190 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,">=");}
#line 1755 "y.tab.c"
    break;

  case 48: /* expr: expr EQUALS expr  */
#line 191 "expl.y"
                     {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"==");}
#line 1761 "y.tab.c"
    break;

  case 49: /* expr: expr NOTEQUALS expr  */
#line 192 "expl.y"
                        {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"!=");}
#line 1767 "y.tab.c"
    break;

  case 50: /* expr: expr AND expr  */
#line 193 "expl.y"
                  {(yyval.no)=makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"&&");}
#line 1773 "y.tab.c"
    break;

  case 51: /* expr: expr OR expr  */
#line 194 "expl.y"
                 {(yyval.no)=makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"||");}
#line 1779 "y.tab.c"
    break;

  case 52: /* expr: '(' expr ')'  */
#line 195 "expl.y"
                  {(yyval.no) = (yyvsp[-1].no);}
#line 1785 "y.tab.c"
    break;

  case 53: /* expr: NUM  */
#line 196 "expl.y"
          {(yyval.no) = (yyvsp[0].no);}
#line 1791 "y.tab.c"
    break;

  case 54: /* expr: STRING  */
#line 197 "expl.y"
           {(yyval.no)=(yyvsp[0].no);}
#line 1797 "y.tab.c"
    break;

  case 55: /* expr: Identifier  */
#line 198 "expl.y"
               {(yyval.no)=(yyvsp[0].no);}
#line 1803 "y.tab.c"
    break;

  case 56: /* Identifier: ID  */
#line 202 "expl.y"
                {
  struct tnode* IDNode = (yyvsp[0].no);
  // printf("%s\n",IDNode->varname);
  struct Gsymbol* Gentry = IDNode->Gentry;
  if(Gentry==NULL){
    printf("ERROR: UNDECLARED VARIABLE %s\n",IDNode->varname);
    exit(1);
  } 
  else{
    //checking if the identifier was declared as an Array
    if(Gentry->col!=-1){
      printf("ERROR: ACCESSING ARRAY WITHOUT INDEX %s\n",IDNode->varname);
      exit(1);
    }
  }
  IDNode->type = Gentry->type;
  (yyval.no)=IDNode;
}
#line 1826 "y.tab.c"
    break;

  case 57: /* Identifier: ID '[' index ']'  */
#line 220 "expl.y"
                    {
    // printf("ARRAY\n");
    struct tnode* IDNode = (yyvsp[-3].no);
    struct Gsymbol* Gentry = IDNode->Gentry;
    // printf("%s\n",IDNode->varname);
    if(Gentry==NULL){
      printf("ERROR: UNDECLARED VARIABLE %s\n",IDNode->varname);
      exit(1);
    }
    IDNode->type= Gentry->type;
    (yyval.no)=makeNonLeafNode((yyvsp[-3].no),(yyvsp[-1].no),ARRAY_NODE,"_");
  
  }
#line 1844 "y.tab.c"
    break;

  case 58: /* Identifier: ID '[' index ']' '[' index ']'  */
#line 233 "expl.y"
                                  {
    struct tnode* IDNode = (yyvsp[-6].no);
    struct Gsymbol* Gentry = IDNode->Gentry;
    if(Gentry==NULL){
      printf("ERROR: UNDECLARED VARIABLE %s\n",IDNode->varname);
      exit(1);
    }
    IDNode->type = Gentry->type;
    struct tnode* _2d_array_node = makeNonLeafNode((yyvsp[-4].no),(yyvsp[-1].no),_2D_ARRAY_NODE,"_");
    (yyval.no) = makeNonLeafNode((yyvsp[-6].no),_2d_array_node,ARRAY_NODE,"_");
  }
#line 1860 "y.tab.c"
    break;

  case 59: /* Identifier: MUL ID  */
#line 244 "expl.y"
           {
    struct tnode* IDNode = (yyvsp[0].no);
    struct tnode* dereference_node ;
    struct Gsymbol* Gentry = IDNode->Gentry;
    if(Gentry==NULL){
      printf("ERROR: UNDECLARED VARIABLE %s\n",IDNode->varname);
      exit(1);
    }
    if (Gentry->type != POINTER_INT_TYPE && Gentry->type != POINTER_STR_TYPE){
      printf("%d\n",Gentry->type);
      printf("ERROR: DEREFERENCING A NON_POINTER VARIABLE %s\n",Gentry->name);
      exit(1);
    }
    if (Gentry->type == POINTER_INT_TYPE){
      IDNode->type = INTEGER_TYPE;
    }
    else
      IDNode->type=STRING_TYPE;
    printf("type :%d\n",IDNode->type);
    dereference_node = makeNonLeafNode(IDNode,NULL,DEREFERENCE_NODE,"_");
    dereference_node->type = IDNode->type;
    (yyval.no) = dereference_node;
  }
#line 1888 "y.tab.c"
    break;

  case 60: /* Identifier: '&' Identifier  */
#line 267 "expl.y"
                   {
    struct tnode* IDNode = (yyvsp[0].no);
    struct Gsymbol* Gentry = IDNode->Gentry;
    if(IDNode->nodetype==ARRAY_NODE){
      Gentry = IDNode->left->Gentry;
    }
    if(Gentry==NULL){
      printf("ERROR: UNDECLARED VARIABLE %s\n",IDNode->varname);
      exit(1);
    }
    IDNode->type = Gentry->type;
    struct tnode* addressNode = makeNonLeafNode(IDNode,NULL,ADDRESS_NODE,"_");
    // printf("%d\n",Gentry->type);
    if(Gentry->type == INTEGER_TYPE || Gentry->type==POINTER_INT_TYPE)
    addressNode->type = POINTER_INT_TYPE;
    else
    addressNode->type = POINTER_STR_TYPE;
    // printf("%d\n",addressNode->type);
    (yyval.no) = addressNode;
  }
#line 1913 "y.tab.c"
    break;

  case 61: /* index: NUM  */
#line 288 "expl.y"
            {(yyval.no)=(yyvsp[0].no);}
#line 1919 "y.tab.c"
    break;

  case 62: /* index: Identifier  */
#line 289 "expl.y"
               {(yyval.no)=(yyvsp[0].no);}
#line 1925 "y.tab.c"
    break;


#line 1929 "y.tab.c"

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

#line 291 "expl.y"


yyerror(char const *s)
{
    printf("yyerror %s",s);
}


int main(void) {
  FILE* input_file = fopen("input.txt","r");
  yyin = input_file;
 yyparse();

 return 0;
}
