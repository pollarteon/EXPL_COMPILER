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
#line 1 "flow_statements.y"

 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>
 #include "flow_statements.h"
 #include "flow_statements.c"
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
    PLUS = 259,                    /* PLUS  */
    MINUS = 260,                   /* MINUS  */
    MUL = 261,                     /* MUL  */
    DIV = 262,                     /* DIV  */
    END = 263,                     /* END  */
    PBEGIN = 264,                  /* PBEGIN  */
    READ = 265,                    /* READ  */
    WRITE = 266,                   /* WRITE  */
    ID = 267,                      /* ID  */
    IF = 268,                      /* IF  */
    ELSE = 269,                    /* ELSE  */
    THEN = 270,                    /* THEN  */
    ENDIF = 271,                   /* ENDIF  */
    ENDWHILE = 272,                /* ENDWHILE  */
    WHILE = 273,                   /* WHILE  */
    OR = 274,                      /* OR  */
    AND = 275,                     /* AND  */
    LT = 276,                      /* LT  */
    GT = 277,                      /* GT  */
    LTE = 278,                     /* LTE  */
    GTE = 279,                     /* GTE  */
    EQUALS = 280,                  /* EQUALS  */
    NOTEQUALS = 281,               /* NOTEQUALS  */
    DO = 282,                      /* DO  */
    BREAK = 283,                   /* BREAK  */
    CONTINUE = 284,                /* CONTINUE  */
    REPEAT = 285,                  /* REPEAT  */
    UNTIL = 286                    /* UNTIL  */
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
#define END 263
#define PBEGIN 264
#define READ 265
#define WRITE 266
#define ID 267
#define IF 268
#define ELSE 269
#define THEN 270
#define ENDIF 271
#define ENDWHILE 272
#define WHILE 273
#define OR 274
#define AND 275
#define LT 276
#define GT 277
#define LTE 278
#define GTE 279
#define EQUALS 280
#define NOTEQUALS 281
#define DO 282
#define BREAK 283
#define CONTINUE 284
#define REPEAT 285
#define UNTIL 286

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "flow_statements.y"

 struct tnode *no;


#line 203 "y.tab.c"

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
  YYSYMBOL_PLUS = 4,                       /* PLUS  */
  YYSYMBOL_MINUS = 5,                      /* MINUS  */
  YYSYMBOL_MUL = 6,                        /* MUL  */
  YYSYMBOL_DIV = 7,                        /* DIV  */
  YYSYMBOL_END = 8,                        /* END  */
  YYSYMBOL_PBEGIN = 9,                     /* PBEGIN  */
  YYSYMBOL_READ = 10,                      /* READ  */
  YYSYMBOL_WRITE = 11,                     /* WRITE  */
  YYSYMBOL_ID = 12,                        /* ID  */
  YYSYMBOL_IF = 13,                        /* IF  */
  YYSYMBOL_ELSE = 14,                      /* ELSE  */
  YYSYMBOL_THEN = 15,                      /* THEN  */
  YYSYMBOL_ENDIF = 16,                     /* ENDIF  */
  YYSYMBOL_ENDWHILE = 17,                  /* ENDWHILE  */
  YYSYMBOL_WHILE = 18,                     /* WHILE  */
  YYSYMBOL_OR = 19,                        /* OR  */
  YYSYMBOL_AND = 20,                       /* AND  */
  YYSYMBOL_LT = 21,                        /* LT  */
  YYSYMBOL_GT = 22,                        /* GT  */
  YYSYMBOL_LTE = 23,                       /* LTE  */
  YYSYMBOL_GTE = 24,                       /* GTE  */
  YYSYMBOL_EQUALS = 25,                    /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 26,                 /* NOTEQUALS  */
  YYSYMBOL_DO = 27,                        /* DO  */
  YYSYMBOL_BREAK = 28,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 29,                  /* CONTINUE  */
  YYSYMBOL_REPEAT = 30,                    /* REPEAT  */
  YYSYMBOL_UNTIL = 31,                     /* UNTIL  */
  YYSYMBOL_32_ = 32,                       /* ';'  */
  YYSYMBOL_33_ = 33,                       /* '('  */
  YYSYMBOL_34_ = 34,                       /* ')'  */
  YYSYMBOL_35_ = 35,                       /* '='  */
  YYSYMBOL_YYACCEPT = 36,                  /* $accept  */
  YYSYMBOL_program = 37,                   /* program  */
  YYSYMBOL_Slist = 38,                     /* Slist  */
  YYSYMBOL_Stmt = 39,                      /* Stmt  */
  YYSYMBOL_InputStmt = 40,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 41,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 42,                   /* AsgStmt  */
  YYSYMBOL_BreakStmt = 43,                 /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 44,              /* ContinueStmt  */
  YYSYMBOL_Ifstmt = 45,                    /* Ifstmt  */
  YYSYMBOL_WhileStmt = 46,                 /* WhileStmt  */
  YYSYMBOL_DoWhileStmt = 47,               /* DoWhileStmt  */
  YYSYMBOL_RepeatUntilStmt = 48,           /* RepeatUntilStmt  */
  YYSYMBOL_expr = 49                       /* expr  */
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
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   377

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  39
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  101

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
      33,    34,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    32,
       2,    35,     2,     2,     2,     2,     2,     2,     2,     2,
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
static const yytype_int8 yyrline[] =
{
       0,    29,    29,    42,    45,    46,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    60,    62,    64,    66,    68,
      70,    74,    77,    79,    81,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97
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
  "\"end of file\"", "error", "\"invalid token\"", "NUM", "PLUS", "MINUS",
  "MUL", "DIV", "END", "PBEGIN", "READ", "WRITE", "ID", "IF", "ELSE",
  "THEN", "ENDIF", "ENDWHILE", "WHILE", "OR", "AND", "LT", "GT", "LTE",
  "GTE", "EQUALS", "NOTEQUALS", "DO", "BREAK", "CONTINUE", "REPEAT",
  "UNTIL", "';'", "'('", "')'", "'='", "$accept", "program", "Slist",
  "Stmt", "InputStmt", "OutputStmt", "AsgStmt", "BreakStmt",
  "ContinueStmt", "Ifstmt", "WhileStmt", "DoWhileStmt", "RepeatUntilStmt",
  "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-27)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,   212,    15,   -16,   -11,   -10,   -15,    -9,    -8,   334,
      -5,    -4,   334,   225,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,    40,    14,    14,    14,
      14,   347,   -27,   -27,   257,    21,   -27,    20,   -27,   -27,
      14,    37,   189,    74,    97,    22,    39,   -27,    41,   120,
      14,    14,    14,    14,    14,    14,    14,    14,    14,    14,
      14,    14,    50,   -27,    70,    59,    14,    14,   -27,   -27,
      -3,    -3,   -27,   -27,    44,   240,     6,     6,     6,     6,
     298,   298,   -27,   334,   334,   143,   166,   279,   300,   -26,
      55,   334,    56,    57,   -27,   -27,   321,   -27,   -27,    58,
     -27
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,     7,     8,    13,    14,
       9,    10,    11,    12,     1,     3,     0,     0,     0,     0,
       0,     0,    18,    19,     0,     0,     4,     0,    38,    39,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    17,     0,     0,     0,     0,    15,    37,
      25,    26,    27,    28,    36,    35,    29,    31,    30,    32,
      33,    34,    16,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    23,    24,     0,    21,    22,     0,
      20
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -27,   -27,    -7,   -13,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,   -21
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    41
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      36,    84,    31,    52,    53,    34,    94,    42,    43,    44,
      50,    51,    52,    53,     1,    24,    25,    38,    36,    49,
      28,    36,    26,    27,    29,    30,    39,    32,    33,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    50,    51,    52,    53,    85,    86,    40,    50,    51,
      52,    53,    37,    47,    48,    66,    54,    55,    56,    57,
      58,    59,    60,    61,    55,    56,    57,    58,    59,    60,
      61,    62,    67,    68,    36,    36,    87,    88,    50,    51,
      52,    53,    82,    36,    96,    83,    84,    95,    97,    98,
     100,     0,     0,    54,    55,    56,    57,    58,    59,    60,
      61,    50,    51,    52,    53,     0,     0,     0,    64,     0,
       0,     0,     0,     0,     0,     0,    54,    55,    56,    57,
      58,    59,    60,    61,    50,    51,    52,    53,     0,     0,
       0,    65,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    56,    57,    58,    59,    60,    61,    50,    51,    52,
      53,     0,     0,     0,    69,     0,     0,     0,     0,     0,
       0,     0,    54,    55,    56,    57,    58,    59,    60,    61,
      50,    51,    52,    53,     0,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,    54,    55,    56,    57,    58,
      59,    60,    61,    50,    51,    52,    53,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,    54,    55,
      56,    57,    58,    59,    60,    61,     0,     0,     0,     0,
       3,    63,     4,     5,     6,     7,     0,     0,     0,     0,
       8,     0,     0,    35,     0,     4,     5,     6,     7,     9,
      10,    11,    12,     8,    50,    51,    52,    53,     0,     0,
       0,     0,     9,    10,    11,    12,     0,     0,     0,     0,
       0,    56,    57,    58,    59,    60,    61,     4,     5,     6,
       7,     0,     0,     0,     0,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    46,     4,
       5,     6,     7,    91,     0,    92,     0,     8,     0,     0,
       0,     0,    50,    51,    52,    53,     9,    10,    11,    12,
       4,     5,     6,     7,     0,     0,     0,    93,     8,    56,
      57,    58,    59,     0,     0,     0,     0,     9,    10,    11,
      12,     4,     5,     6,     7,     0,     0,    99,     0,     8,
       0,     0,     0,     0,     4,     5,     6,     7,     9,    10,
      11,    12,     8,     0,     0,     0,     0,     4,     5,     6,
       7,     9,    10,    11,    12,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    12
};

static const yytype_int8 yycheck[] =
{
      13,    27,     9,     6,     7,    12,    32,    28,    29,    30,
       4,     5,     6,     7,     9,     0,    32,     3,    31,    40,
      35,    34,    33,    33,    33,    33,    12,    32,    32,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,     4,     5,     6,     7,    66,    67,    33,     4,     5,
       6,     7,    12,    32,    34,    33,    19,    20,    21,    22,
      23,    24,    25,    26,    20,    21,    22,    23,    24,    25,
      26,    34,    33,    32,    87,    88,    83,    84,     4,     5,
       6,     7,    32,    96,    91,    15,    27,    32,    32,    32,
      32,    -1,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,     4,     5,     6,     7,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,     4,     5,     6,     7,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,     4,     5,     6,
       7,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
       4,     5,     6,     7,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,     4,     5,     6,     7,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
       8,    32,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    -1,     8,    -1,    10,    11,    12,    13,    27,
      28,    29,    30,    18,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,    10,
      11,    12,    13,    14,    -1,    16,    -1,    18,    -1,    -1,
      -1,    -1,     4,     5,     6,     7,    27,    28,    29,    30,
      10,    11,    12,    13,    -1,    -1,    -1,    17,    18,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    10,    11,    12,    13,    -1,    -1,    16,    -1,    18,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    27,    28,
      29,    30,    18,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    27,    28,    29,    30,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    37,     8,    10,    11,    12,    13,    18,    27,
      28,    29,    30,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,    32,    33,    33,    35,    33,
      33,    38,    32,    32,    38,     8,    39,    12,     3,    12,
      33,    49,    49,    49,    49,    18,    31,    32,    34,    49,
       4,     5,     6,     7,    19,    20,    21,    22,    23,    24,
      25,    26,    34,    32,    34,    34,    33,    33,    32,    34,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    32,    15,    27,    49,    49,    38,    38,    34,
      34,    14,    16,    17,    32,    32,    38,    32,    32,    16,
      32
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    37,    38,    38,    39,    39,    39,    39,
      39,    39,    39,    39,    39,    40,    41,    42,    43,    44,
      45,    45,    46,    47,    48,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     5,     4,     2,     2,
      10,     8,     8,     7,     7,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1
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
  case 2: /* program: PBEGIN Slist END ';'  */
#line 29 "flow_statements.y"
                              {
    (yyval.no) = (yyvsp[-2].no);
    FILE* target_file = fopen("code.xsm","w");
    fprintf(target_file, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0); 
    fprintf(target_file,"MOV SP,4121\n"); //first 26 locations are reserved for a-z variables
    printf("Preorder of Syntax Tree : ");
    preorder((yyvsp[-2].no));
    printf("\n\n");
    // evaluator($2);
    int result_reg =code_gen((yyvsp[-2].no),target_file);
    // store_stack(result_reg,target_file);
    exit(1);
   }
#line 1353 "y.tab.c"
    break;

  case 3: /* program: PBEGIN END ';'  */
#line 42 "flow_statements.y"
                   {printf("Program finished");exit(1);}
#line 1359 "y.tab.c"
    break;

  case 4: /* Slist: Slist Stmt  */
#line 45 "flow_statements.y"
                   {(yyval.no)=createTree(-1,CONNECTOR_NODE,NULL,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1365 "y.tab.c"
    break;

  case 5: /* Slist: Stmt  */
#line 46 "flow_statements.y"
       {(yyval.no)=(yyvsp[0].no);}
#line 1371 "y.tab.c"
    break;

  case 6: /* Stmt: InputStmt  */
#line 49 "flow_statements.y"
                 {(yyval.no)=(yyvsp[0].no);}
#line 1377 "y.tab.c"
    break;

  case 7: /* Stmt: OutputStmt  */
#line 50 "flow_statements.y"
             {(yyval.no)=(yyvsp[0].no);}
#line 1383 "y.tab.c"
    break;

  case 8: /* Stmt: AsgStmt  */
#line 51 "flow_statements.y"
         {(yyval.no)=(yyvsp[0].no);}
#line 1389 "y.tab.c"
    break;

  case 9: /* Stmt: Ifstmt  */
#line 52 "flow_statements.y"
        {(yyval.no)=(yyvsp[0].no);}
#line 1395 "y.tab.c"
    break;

  case 10: /* Stmt: WhileStmt  */
#line 53 "flow_statements.y"
           {(yyval.no)=(yyvsp[0].no);}
#line 1401 "y.tab.c"
    break;

  case 11: /* Stmt: DoWhileStmt  */
#line 54 "flow_statements.y"
             {(yyval.no)=(yyvsp[0].no);}
#line 1407 "y.tab.c"
    break;

  case 12: /* Stmt: RepeatUntilStmt  */
#line 55 "flow_statements.y"
                 {(yyval.no)=(yyvsp[0].no);}
#line 1413 "y.tab.c"
    break;

  case 13: /* Stmt: BreakStmt  */
#line 56 "flow_statements.y"
           {(yyval.no)=(yyvsp[0].no);}
#line 1419 "y.tab.c"
    break;

  case 14: /* Stmt: ContinueStmt  */
#line 57 "flow_statements.y"
              {(yyval.no)=(yyvsp[0].no);}
#line 1425 "y.tab.c"
    break;

  case 15: /* InputStmt: READ '(' ID ')' ';'  */
#line 60 "flow_statements.y"
                                {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),NULL,READ_NODE,"_");}
#line 1431 "y.tab.c"
    break;

  case 16: /* OutputStmt: WRITE '(' expr ')' ';'  */
#line 62 "flow_statements.y"
                                    {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),NULL,WRITE_NODE,"_");}
#line 1437 "y.tab.c"
    break;

  case 17: /* AsgStmt: ID '=' expr ';'  */
#line 64 "flow_statements.y"
                          {(yyval.no) = makeNonLeafNode((yyvsp[-3].no),(yyvsp[-1].no),OPERATOR_NODE,"=");}
#line 1443 "y.tab.c"
    break;

  case 18: /* BreakStmt: BREAK ';'  */
#line 66 "flow_statements.y"
                      {(yyval.no)=makeNonLeafNode(NULL,NULL,BREAK_NODE,"_");}
#line 1449 "y.tab.c"
    break;

  case 19: /* ContinueStmt: CONTINUE ';'  */
#line 68 "flow_statements.y"
                            {(yyval.no)=makeNonLeafNode(NULL,NULL,CONTINUE_NODE,"_");}
#line 1455 "y.tab.c"
    break;

  case 20: /* Ifstmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF ';'  */
#line 70 "flow_statements.y"
                                                         {
  struct tnode* statements_node = makeNonLeafNode((yyvsp[-4].no),(yyvsp[-2].no),ELSE_NODE,"_");
  (yyval.no) = makeNonLeafNode((yyvsp[-7].no),statements_node,IF_NODE,"_");
}
#line 1464 "y.tab.c"
    break;

  case 21: /* Ifstmt: IF '(' expr ')' THEN Slist ENDIF ';'  */
#line 74 "flow_statements.y"
                                       {(yyval.no) = makeNonLeafNode((yyvsp[-5].no),(yyvsp[-2].no),IF_NODE,"_");}
#line 1470 "y.tab.c"
    break;

  case 22: /* WhileStmt: WHILE '(' expr ')' DO Slist ENDWHILE ';'  */
#line 77 "flow_statements.y"
                                                     {(yyval.no) = makeNonLeafNode((yyvsp[-5].no),(yyvsp[-2].no),WHILE_NODE,"_");}
#line 1476 "y.tab.c"
    break;

  case 23: /* DoWhileStmt: DO Slist WHILE '(' expr ')' ';'  */
#line 79 "flow_statements.y"
                                              {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[-5].no),DO_WHILE_NODE,"_");}
#line 1482 "y.tab.c"
    break;

  case 24: /* RepeatUntilStmt: REPEAT Slist UNTIL '(' expr ')' ';'  */
#line 81 "flow_statements.y"
                                                      {(yyval.no)=makeNonLeafNode((yyvsp[-2].no),(yyvsp[-5].no),REPEAT_UNTIL_NODE,"_");}
#line 1488 "y.tab.c"
    break;

  case 25: /* expr: expr PLUS expr  */
#line 83 "flow_statements.y"
                       {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"+");}
#line 1494 "y.tab.c"
    break;

  case 26: /* expr: expr MINUS expr  */
#line 84 "flow_statements.y"
                      {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"-");}
#line 1500 "y.tab.c"
    break;

  case 27: /* expr: expr MUL expr  */
#line 85 "flow_statements.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"*");}
#line 1506 "y.tab.c"
    break;

  case 28: /* expr: expr DIV expr  */
#line 86 "flow_statements.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"/");}
#line 1512 "y.tab.c"
    break;

  case 29: /* expr: expr LT expr  */
#line 87 "flow_statements.y"
                 {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"<");}
#line 1518 "y.tab.c"
    break;

  case 30: /* expr: expr LTE expr  */
#line 88 "flow_statements.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"<=");}
#line 1524 "y.tab.c"
    break;

  case 31: /* expr: expr GT expr  */
#line 89 "flow_statements.y"
                 {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,">");}
#line 1530 "y.tab.c"
    break;

  case 32: /* expr: expr GTE expr  */
#line 90 "flow_statements.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,">=");}
#line 1536 "y.tab.c"
    break;

  case 33: /* expr: expr EQUALS expr  */
#line 91 "flow_statements.y"
                     {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"==");}
#line 1542 "y.tab.c"
    break;

  case 34: /* expr: expr NOTEQUALS expr  */
#line 92 "flow_statements.y"
                        {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"!=");}
#line 1548 "y.tab.c"
    break;

  case 35: /* expr: expr AND expr  */
#line 93 "flow_statements.y"
                  {(yyval.no)=makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"&&");}
#line 1554 "y.tab.c"
    break;

  case 36: /* expr: expr OR expr  */
#line 94 "flow_statements.y"
                 {(yyval.no)=makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"||");}
#line 1560 "y.tab.c"
    break;

  case 37: /* expr: '(' expr ')'  */
#line 95 "flow_statements.y"
                  {(yyval.no) = (yyvsp[-1].no);}
#line 1566 "y.tab.c"
    break;

  case 38: /* expr: NUM  */
#line 96 "flow_statements.y"
          {(yyval.no) = (yyvsp[0].no);}
#line 1572 "y.tab.c"
    break;

  case 39: /* expr: ID  */
#line 97 "flow_statements.y"
       {(yyval.no) = (yyvsp[0].no);}
#line 1578 "y.tab.c"
    break;


#line 1582 "y.tab.c"

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

#line 100 "flow_statements.y"


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
