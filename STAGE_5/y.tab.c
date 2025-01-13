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

#line 219 "y.tab.c"

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
  YYSYMBOL_MAIN = 36,                      /* MAIN  */
  YYSYMBOL_RETURN = 37,                    /* RETURN  */
  YYSYMBOL_BREAKPOINT = 38,                /* BREAKPOINT  */
  YYSYMBOL_39_ = 39,                       /* ';'  */
  YYSYMBOL_40_ = 40,                       /* ','  */
  YYSYMBOL_41_ = 41,                       /* '['  */
  YYSYMBOL_42_ = 42,                       /* ']'  */
  YYSYMBOL_43_ = 43,                       /* '('  */
  YYSYMBOL_44_ = 44,                       /* ')'  */
  YYSYMBOL_45_ = 45,                       /* '{'  */
  YYSYMBOL_46_ = 46,                       /* '}'  */
  YYSYMBOL_47_ = 47,                       /* '='  */
  YYSYMBOL_48_ = 48,                       /* '&'  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_program = 50,                   /* program  */
  YYSYMBOL_GDeclBlock = 51,                /* GDeclBlock  */
  YYSYMBOL_GdeclList = 52,                 /* GdeclList  */
  YYSYMBOL_Gdecl = 53,                     /* Gdecl  */
  YYSYMBOL_GidList = 54,                   /* GidList  */
  YYSYMBOL_Gid = 55,                       /* Gid  */
  YYSYMBOL_FdefBlock = 56,                 /* FdefBlock  */
  YYSYMBOL_Fdef = 57,                      /* Fdef  */
  YYSYMBOL_ParamList = 58,                 /* ParamList  */
  YYSYMBOL_Param = 59,                     /* Param  */
  YYSYMBOL_MainBlock = 60,                 /* MainBlock  */
  YYSYMBOL_LdeclBlock = 61,                /* LdeclBlock  */
  YYSYMBOL_LdecList = 62,                  /* LdecList  */
  YYSYMBOL_Ldecl = 63,                     /* Ldecl  */
  YYSYMBOL_IdList = 64,                    /* IdList  */
  YYSYMBOL_Lid = 65,                       /* Lid  */
  YYSYMBOL_Body = 66,                      /* Body  */
  YYSYMBOL_Type = 67,                      /* Type  */
  YYSYMBOL_Slist = 68,                     /* Slist  */
  YYSYMBOL_Stmt = 69,                      /* Stmt  */
  YYSYMBOL_InputStmt = 70,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 71,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 72,                   /* AsgStmt  */
  YYSYMBOL_BreakStmt = 73,                 /* BreakStmt  */
  YYSYMBOL_BreakpointStmt = 74,            /* BreakpointStmt  */
  YYSYMBOL_ContinueStmt = 75,              /* ContinueStmt  */
  YYSYMBOL_Ifstmt = 76,                    /* Ifstmt  */
  YYSYMBOL_WhileStmt = 77,                 /* WhileStmt  */
  YYSYMBOL_DoWhileStmt = 78,               /* DoWhileStmt  */
  YYSYMBOL_ReturnStmt = 79,                /* ReturnStmt  */
  YYSYMBOL_expr = 80,                      /* expr  */
  YYSYMBOL_ArgList = 81,                   /* ArgList  */
  YYSYMBOL_Identifier = 82,                /* Identifier  */
  YYSYMBOL_index = 83                      /* index  */
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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   438

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  202

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   293


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
       2,     2,     2,     2,     2,     2,     2,     2,    48,     2,
      43,    44,     2,     2,    40,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    39,
       2,    47,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    41,     2,    42,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    39,    39,    40,    41,    42,    48,    49,    51,    51,
      53,    77,    85,    87,    91,    95,    99,   103,   107,   116,
     116,   118,   162,   192,   195,   199,   208,   234,   235,   236,
     238,   238,   240,   267,   275,   277,   280,   286,   287,   289,
     290,   292,   295,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   311,   316,   318,   323,   325,   327,   329,
     333,   336,   338,   340,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   373,   392,
     393,   394,   395,   399,   402,   406,   419,   431,   443,   459,
     473
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
  "CONTINUE", "DECL", "ENDDECL", "INT", "STR", "MAIN", "RETURN",
  "BREAKPOINT", "';'", "','", "'['", "']'", "'('", "')'", "'{'", "'}'",
  "'='", "'&'", "$accept", "program", "GDeclBlock", "GdeclList", "Gdecl",
  "GidList", "Gid", "FdefBlock", "Fdef", "ParamList", "Param", "MainBlock",
  "LdeclBlock", "LdecList", "Ldecl", "IdList", "Lid", "Body", "Type",
  "Slist", "Stmt", "InputStmt", "OutputStmt", "AsgStmt", "BreakStmt",
  "BreakpointStmt", "ContinueStmt", "Ifstmt", "WhileStmt", "DoWhileStmt",
  "ReturnStmt", "expr", "ArgList", "Identifier", "index", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-150)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      48,    83,    -7,    42,    15,  -150,  -150,  -150,  -150,   107,
    -150,    47,     2,  -150,   215,    -7,    24,  -150,  -150,    41,
    -150,  -150,    65,    49,   120,  -150,    67,   111,   106,   112,
     116,   132,   137,   215,   142,   145,    14,   153,    -5,   100,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,   154,  -150,  -150,   157,  -150,   199,   -28,  -150,    47,
     158,  -150,    -5,    14,    14,    14,    14,   235,  -150,  -150,
    -150,  -150,    81,    14,   343,  -150,  -150,  -150,  -150,  -150,
      14,     0,   166,  -150,    -3,  -150,   195,  -150,   179,   168,
     253,   378,   177,   279,   287,   182,     8,   311,    14,    14,
      14,    14,    14,    14,    14,    14,    14,    14,    14,    14,
      14,  -150,   351,   175,    20,   185,   130,  -150,  -150,   144,
     220,   197,   198,   202,   221,   210,    14,  -150,   378,    59,
    -150,    97,    97,  -150,  -150,  -150,   386,   410,    89,    89,
      89,    89,   127,   127,  -150,   179,   209,   254,  -150,  -150,
     164,  -150,    74,   215,   222,  -150,  -150,    14,   215,   215,
     319,    14,  -150,   220,   179,   214,  -150,  -150,   255,  -150,
     133,  -150,   156,  -150,   225,    71,   176,     7,   378,   224,
     220,  -150,  -150,  -150,    74,  -150,   261,  -150,   215,   243,
     250,  -150,  -150,   244,  -150,  -150,   203,  -150,  -150,  -150,
     252,  -150
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     4,     7,    39,    40,     0,
       9,     0,     0,     1,     0,    39,     0,    20,     3,     0,
       6,     8,     0,    13,     0,    12,     0,     0,     0,     0,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      42,    43,    44,    45,    49,    52,    50,    46,    47,    48,
      51,     0,    19,     2,     0,    16,     0,     0,    10,     0,
       0,    88,     0,     0,     0,     0,     0,     0,    56,    58,
      80,    81,    85,     0,     0,    82,    57,    89,     5,    41,
       0,     0,     0,    18,     0,    24,     0,    11,    29,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    63,     0,     0,     0,    14,     0,    17,    25,     0,
       0,     0,     0,    86,     0,     0,     0,    77,    84,     0,
      79,    64,    65,    66,    67,    68,    76,    75,    69,    71,
      70,    72,    73,    74,    55,    29,     0,     0,    23,    28,
       0,    31,     0,     0,     0,    53,    54,     0,     0,     0,
       0,     0,    78,     0,    29,     0,    27,    30,     0,    35,
       0,    34,     0,    26,     0,     0,     0,     0,    83,     0,
       0,    15,    36,    32,     0,    38,    51,    87,     0,     0,
       0,    62,    22,     0,    33,    37,     0,    60,    61,    21,
       0,    59
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -150,  -150,  -150,  -150,   289,  -150,   240,  -150,   305,   241,
     213,    23,  -141,  -150,   180,  -150,   169,  -149,     4,   -32,
     -29,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
     189,   -33,  -150,   -14,   205
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     9,    10,    24,    25,    16,    17,    84,
      85,     5,   120,   150,   151,   170,   171,   154,    86,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    91,   129,    75,    92
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      51,    67,    27,    74,   163,    11,     7,     8,    19,    30,
      79,    70,    71,    11,   179,    27,    83,    70,    71,    51,
      19,    27,    72,   180,    77,    51,    14,    18,    72,    12,
      90,   193,    93,    94,     7,     8,   159,   116,    79,    53,
      97,   117,    13,    38,   113,    26,   191,   112,    89,    15,
       8,    73,   127,    51,    22,    54,    38,    73,    15,     8,
     116,    23,    38,   128,   146,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,    27,    55,
       1,   168,     2,    28,    29,    30,    31,   188,   169,   189,
      56,    32,    57,   160,    98,    99,   100,   101,   102,   161,
      33,    34,    35,   162,   100,   101,   102,    27,    36,    37,
      78,    60,    28,    29,    30,    31,     6,     7,     8,    38,
      32,   172,    64,   152,    96,    61,   175,   176,   178,    33,
      34,    35,    98,    99,   100,   101,   102,    36,    37,    51,
      20,     7,     8,    79,    51,    51,    79,    79,    38,    62,
     105,   106,   107,   108,   152,    63,   196,    64,    51,    58,
      59,    51,    51,    27,     7,     8,   185,    79,    28,    29,
      30,    31,   183,   184,    51,    65,    32,   149,     7,     8,
      66,    68,    51,    27,    69,    33,    34,    35,    28,    29,
      30,    31,    76,    36,    37,   190,    32,   166,     7,     8,
      81,    80,    82,    88,    38,    33,    34,    35,   115,   118,
      27,   119,   121,    36,    37,    28,    29,    30,    31,   123,
     145,   200,    27,    32,    38,   126,   147,    28,    29,    30,
      31,   153,    33,    34,    35,    32,   155,   156,   158,   159,
      36,    37,    27,   157,    33,    34,    35,    28,    29,    30,
      31,    38,    36,    37,   164,    95,   181,   165,    98,    99,
     100,   101,   102,    38,    33,    34,    35,   187,   173,   182,
     192,   195,    36,    37,   103,   104,   105,   106,   107,   108,
     109,   110,   197,    38,    98,    99,   100,   101,   102,   198,
     199,   201,    98,    99,   100,   101,   102,   122,    21,    87,
     103,   104,   105,   106,   107,   108,   109,   110,   103,   104,
     105,   106,   107,   108,   109,   110,    98,    99,   100,   101,
     102,    52,   114,   124,    98,    99,   100,   101,   102,   148,
     167,   125,   103,   104,   105,   106,   107,   108,   109,   110,
     103,   104,   105,   106,   107,   108,   109,   110,    98,    99,
     100,   101,   102,   194,     0,   130,    98,    99,   100,   101,
     102,   186,   174,   177,   103,   104,   105,   106,   107,   108,
     109,   110,   103,   104,   105,   106,   107,   108,   109,   110,
       0,     0,   111,    98,    99,   100,   101,   102,     0,     0,
     144,    98,    99,   100,   101,   102,     0,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   110,     0,   104,   105,
     106,   107,   108,   109,   110,    98,    99,   100,   101,   102,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,   106,   107,   108,   109,   110
};

static const yytype_int16 yycheck[] =
{
      14,    33,     7,    36,   145,     1,    34,    35,     4,    14,
      39,     3,     4,     9,   163,     7,    44,     3,     4,    33,
      16,     7,    14,   164,    38,    39,    11,     4,    14,    36,
      63,   180,    65,    66,    34,    35,    29,    40,    67,    16,
      73,    44,     0,    48,    44,    43,    39,    80,    62,    34,
      35,    43,    44,    67,     7,    14,    48,    43,    34,    35,
      40,    14,    48,    96,    44,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,     7,    14,
      32,     7,    34,    12,    13,    14,    15,    16,    14,    18,
      41,    20,    43,   126,     5,     6,     7,     8,     9,    40,
      29,    30,    31,    44,     7,     8,     9,     7,    37,    38,
      10,    44,    12,    13,    14,    15,    33,    34,    35,    48,
      20,   153,    41,   119,    43,    14,   158,   159,   161,    29,
      30,    31,     5,     6,     7,     8,     9,    37,    38,   153,
      33,    34,    35,   172,   158,   159,   175,   176,    48,    43,
      23,    24,    25,    26,   150,    43,   188,    41,   172,    39,
      40,   175,   176,     7,    34,    35,    10,   196,    12,    13,
      14,    15,    39,    40,   188,    43,    20,    33,    34,    35,
      43,    39,   196,     7,    39,    29,    30,    31,    12,    13,
      14,    15,    39,    37,    38,    19,    20,    33,    34,    35,
      43,    47,     3,    45,    48,    29,    30,    31,    42,    14,
       7,    32,    44,    37,    38,    12,    13,    14,    15,    42,
      45,    18,     7,    20,    48,    43,    41,    12,    13,    14,
      15,    11,    29,    30,    31,    20,    39,    39,    17,    29,
      37,    38,     7,    41,    29,    30,    31,    12,    13,    14,
      15,    48,    37,    38,    45,    20,    42,     3,     5,     6,
       7,     8,     9,    48,    29,    30,    31,    42,    46,    14,
      46,    10,    37,    38,    21,    22,    23,    24,    25,    26,
      27,    28,    39,    48,     5,     6,     7,     8,     9,    39,
      46,    39,     5,     6,     7,     8,     9,    44,     9,    59,
      21,    22,    23,    24,    25,    26,    27,    28,    21,    22,
      23,    24,    25,    26,    27,    28,     5,     6,     7,     8,
       9,    16,    81,    44,     5,     6,     7,     8,     9,   116,
     150,    44,    21,    22,    23,    24,    25,    26,    27,    28,
      21,    22,    23,    24,    25,    26,    27,    28,     5,     6,
       7,     8,     9,   184,    -1,    44,     5,     6,     7,     8,
       9,   172,   157,    44,    21,    22,    23,    24,    25,    26,
      27,    28,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    39,     5,     6,     7,     8,     9,    -1,    -1,
      39,     5,     6,     7,     8,     9,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    22,    23,
      24,    25,    26,    27,    28,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    32,    34,    50,    51,    60,    33,    34,    35,    52,
      53,    67,    36,     0,    11,    34,    56,    57,    60,    67,
      33,    53,     7,    14,    54,    55,    43,     7,    12,    13,
      14,    15,    20,    29,    30,    31,    37,    38,    48,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    82,    57,    60,    14,    14,    41,    43,    39,    40,
      44,    14,    43,    43,    41,    43,    43,    68,    39,    39,
       3,     4,    14,    43,    80,    82,    39,    82,    10,    69,
      47,    43,     3,    44,    58,    59,    67,    55,    45,    82,
      80,    80,    83,    80,    80,    20,    43,    80,     5,     6,
       7,     8,     9,    21,    22,    23,    24,    25,    26,    27,
      28,    39,    80,    44,    58,    42,    40,    44,    14,    32,
      61,    44,    44,    42,    44,    44,    43,    44,    80,    81,
      44,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    39,    45,    44,    41,    59,    33,
      62,    63,    67,    11,    66,    39,    39,    41,    17,    29,
      80,    40,    44,    61,    45,     3,    33,    63,     7,    14,
      64,    65,    68,    46,    83,    68,    68,    44,    80,    66,
      61,    42,    14,    39,    40,    10,    79,    42,    16,    18,
      19,    39,    46,    66,    65,    10,    68,    39,    39,    46,
      18,    39
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    50,    50,    50,    51,    51,    52,    52,
      53,    54,    54,    55,    55,    55,    55,    55,    55,    56,
      56,    57,    57,    58,    58,    59,    60,    61,    61,    61,
      62,    62,    63,    64,    64,    65,    65,    66,    66,    67,
      67,    68,    68,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    70,    71,    72,    73,    74,    75,    76,
      76,    77,    78,    79,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    81,    81,    82,    82,    82,    82,    82,
      83
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     1,     4,     3,     2,     2,     1,
       3,     3,     1,     1,     4,     7,     2,     4,     3,     2,
       1,     9,     8,     3,     1,     2,     8,     3,     2,     0,
       2,     1,     3,     3,     1,     1,     2,     4,     3,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     5,     4,     2,     2,     2,    10,
       8,     8,     7,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     3,
       1,     1,     1,     3,     1,     1,     4,     7,     2,     2,
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
  case 2: /* program: GDeclBlock FdefBlock MainBlock  */
#line 39 "expl.y"
                                        {printf("Program finished\n");exit(1);}
#line 1460 "y.tab.c"
    break;

  case 3: /* program: GDeclBlock MainBlock  */
#line 40 "expl.y"
                         {printf("Program finished\n");exit(1);}
#line 1466 "y.tab.c"
    break;

  case 4: /* program: MainBlock  */
#line 41 "expl.y"
              {printf("Program finished\n");exit(1);}
#line 1472 "y.tab.c"
    break;

  case 5: /* program: GDeclBlock PBEGIN Slist END  */
#line 42 "expl.y"
                                {printf("Program finished\n");exit(1);}
#line 1478 "y.tab.c"
    break;

  case 6: /* GDeclBlock: DECL GdeclList ENDDECL  */
#line 48 "expl.y"
                                    {print_GSymbolTable();L_cleanup();local_binding=1;param_binding=1;}
#line 1484 "y.tab.c"
    break;

  case 7: /* GDeclBlock: DECL ENDDECL  */
#line 49 "expl.y"
               {}
#line 1490 "y.tab.c"
    break;

  case 8: /* GdeclList: GdeclList Gdecl  */
#line 51 "expl.y"
                            {}
#line 1496 "y.tab.c"
    break;

  case 9: /* GdeclList: Gdecl  */
#line 51 "expl.y"
                                       {}
#line 1502 "y.tab.c"
    break;

  case 10: /* Gdecl: Type GidList ';'  */
#line 53 "expl.y"
                         {
  int declaration_type = (yyvsp[-2].integer);
  struct tnode* varList = (yyvsp[-1].no); //varList contains List of variables
  while(varList!=NULL){
    struct Gsymbol* Gentry = GLookUp(varList->varname);
    if(Gentry->type==POINTER_TYPE){ //if variable inserted as a pointer type
      if(declaration_type==INTEGER_TYPE){
        Gentry->type = POINTER_INT_TYPE;
      }
      if(declaration_type==STRING_TYPE){
        Gentry->type =POINTER_STR_TYPE;
      }
    }
    else if(Gentry->type==-1){
      Gentry->type = declaration_type;
    }
    else{
      printf("ERROR: REDECLARATION OF VARIABLE %s\n",Gentry->name);
      exit(1);
    }
    varList=varList->right;
  }
}
#line 1530 "y.tab.c"
    break;

  case 11: /* GidList: GidList ',' Gid  */
#line 77 "expl.y"
                          {
  struct tnode* IDNode = (yyvsp[0].no);
  struct tnode* temp = (yyvsp[-2].no);
  while (temp->right != NULL) {  
      temp = temp->right;
  }
  temp->right = IDNode;  
  (yyval.no) = (yyvsp[-2].no); 
}
#line 1544 "y.tab.c"
    break;

  case 13: /* Gid: ID  */
#line 87 "expl.y"
        {
  G_Install((yyvsp[0].no)->varname,-1,1,-1,NULL,-1);
   (yyval.no)=createNode(-1,1,-1,-1,NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
}
#line 1553 "y.tab.c"
    break;

  case 14: /* Gid: ID '[' NUM ']'  */
#line 91 "expl.y"
                {
  G_Install((yyvsp[-3].no)->varname,-1,(yyvsp[-1].no)->val,-1,NULL,-1);
  (yyval.no)=createNode(-1,(yyvsp[-1].no)->val,1,1,NULL,(yyvsp[-3].no)->varname,-1,NULL,NULL);
}
#line 1562 "y.tab.c"
    break;

  case 15: /* Gid: ID '[' NUM ']' '[' NUM ']'  */
#line 95 "expl.y"
                            {
  G_Install((yyvsp[-6].no)->varname,-1,(yyvsp[-4].no)->val,(yyvsp[-1].no)->val,NULL,-1);
   (yyval.no) = createNode(-1,(yyvsp[-4].no)->val,(yyvsp[-1].no)->val,1,NULL,(yyvsp[-6].no)->varname,-1,NULL,NULL);
}
#line 1571 "y.tab.c"
    break;

  case 16: /* Gid: MUL ID  */
#line 99 "expl.y"
         { //this is for Pointer
  G_Install((yyvsp[0].no)->varname,POINTER_TYPE,1,-1,NULL,-1);
  (yyval.no) = createNode(-1,1,-1,POINTER_TYPE,NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
}
#line 1580 "y.tab.c"
    break;

  case 17: /* Gid: ID '(' ParamList ')'  */
#line 103 "expl.y"
                       {
  G_Install((yyvsp[-3].no)->varname,-1,1,-1,(yyvsp[-1].plist),flabel++);
  (yyval.no) = createNode(-1,1,-1,-1,NULL,(yyvsp[-3].no)->varname,-1,NULL,NULL);
}
#line 1589 "y.tab.c"
    break;

  case 18: /* Gid: ID '(' ')'  */
#line 107 "expl.y"
            {
  G_Install((yyvsp[-2].no)->varname,-1,1,-1,NULL,flabel++);
  (yyval.no) = createNode(-1,1,-1,-1,NULL,(yyvsp[-2].no)->varname,-1,NULL,NULL);
}
#line 1598 "y.tab.c"
    break;

  case 21: /* Fdef: Type ID '(' ParamList ')' '{' LdeclBlock Body '}'  */
#line 118 "expl.y"
                                                         {
  int definition_type = (yyvsp[-8].integer);
  struct ParamList* defintion_param_list = (yyvsp[-5].plist);
  struct Gsymbol* Gentry = (yyvsp[-7].no)->Gentry;
  if(Gentry==NULL){
    printf("ERROR: FUNCTION NOT DECLARED %s\n",(yyvsp[-7].no)->varname);
    return -1;
  }
  //checking param equivalence
  struct ParamList* temp1 = defintion_param_list;
  struct ParamList* temp2 = Gentry->param_list;
  while(temp1!=NULL && temp2!=NULL){
    if(strcmp(temp1->name,temp2->name)!=0 || temp1->type!=temp2->type){
      printf("ERROR: FUNCTION MISMATCH %s\n",Gentry->name);
      return -1;
    }
    temp1=temp1->next;
    temp2=temp2->next;
  }
  if(temp1!=NULL || temp2!=NULL){
    printf("ERROR: FUNCTION DECLARATION UNMATCHED: %s\n",Gentry->name);
    return -1;
  }
  //Generating Header and Cleaning Up Local Symbol Table
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
    returnStmt_checker((yyvsp[-1].no),(yyvsp[-8].integer)); //return statement checker..............
    fprintf(target_file,"F%d:\n",Gentry->flabel);
    function_begin_code_gen(target_file,Ltable);
    code_gen((yyvsp[-1].no),target_file);
    L_cleanup();
    local_binding=1;
    param_binding=1;
    fclose(target_file);
}
#line 1647 "y.tab.c"
    break;

  case 22: /* Fdef: Type ID '(' ')' '{' LdeclBlock Body '}'  */
#line 162 "expl.y"
                                         {
  int definition_type = (yyvsp[-7].integer);
  struct Gsymbol* Gentry = GLookUp((yyvsp[-6].no)->varname);
  if(Gentry==NULL){
    printf("ERROR: FUNCTION NOT DECLARED %s\n",(yyvsp[-6].no)->varname);
    return -1;
  }
  //checking param equivalence
  if(Gentry->param_list==NULL){
    FILE* target_file = fopen("code.xsm","w");
    print_Ltable();
    printf("Preorder of Syntax Tree : ");
    preorder((yyvsp[-1].no));
    printf("\n\n");
    returnStmt_checker((yyvsp[-1].no),(yyvsp[-7].integer)); //return statement checker..............
    fprintf(target_file,"F%d:\n",Gentry->flabel);
    function_begin_code_gen(target_file,Ltable);
    code_gen((yyvsp[-1].no),target_file);
    L_cleanup();
    local_binding=1;
    param_binding=1;
  }else{
    printf("ERROR: FUNCTION DECLARATION UNMATCHED\n");
    return -1;
  }



}
#line 1681 "y.tab.c"
    break;

  case 23: /* ParamList: ParamList ',' Param  */
#line 192 "expl.y"
                                {
  (yyval.plist) = append_param_list((yyvsp[-2].plist),(yyvsp[0].plist));
}
#line 1689 "y.tab.c"
    break;

  case 24: /* ParamList: Param  */
#line 195 "expl.y"
         {
  (yyval.plist) = (yyvsp[0].plist);
}
#line 1697 "y.tab.c"
    break;

  case 25: /* Param: Type ID  */
#line 199 "expl.y"
                {
  L_Install((yyvsp[0].no)->varname,(yyvsp[-1].integer),1);
  (yyval.plist) = create_param_list((yyvsp[-1].integer),(yyvsp[0].no)->varname);
}
#line 1706 "y.tab.c"
    break;

  case 26: /* MainBlock: INT MAIN '(' ')' '{' LdeclBlock Body '}'  */
#line 208 "expl.y"
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
    returnStmt_checker((yyvsp[-1].no),INTEGER_TYPE);
    fprintf(target_file,"MAIN:\n");
    function_begin_code_gen(target_file,Ltable);
    int result_reg =code_gen((yyvsp[-1].no),target_file);
    L_cleanup();
    local_binding=1;
    fclose(target_file);
}
#line 1731 "y.tab.c"
    break;

  case 27: /* LdeclBlock: DECL LdecList ENDDECL  */
#line 234 "expl.y"
                                   {local_binding=1;}
#line 1737 "y.tab.c"
    break;

  case 28: /* LdeclBlock: DECL ENDDECL  */
#line 235 "expl.y"
               {local_binding=1;}
#line 1743 "y.tab.c"
    break;

  case 29: /* LdeclBlock: %empty  */
#line 236 "expl.y"
             {}
#line 1749 "y.tab.c"
    break;

  case 30: /* LdecList: LdecList Ldecl  */
#line 238 "expl.y"
                           {}
#line 1755 "y.tab.c"
    break;

  case 31: /* LdecList: Ldecl  */
#line 238 "expl.y"
                                      {}
#line 1761 "y.tab.c"
    break;

  case 32: /* Ldecl: Type IdList ';'  */
#line 240 "expl.y"
                        {
  int declaration_type = (yyvsp[-2].integer);
  struct tnode* varList = (yyvsp[-1].no); //varList contains List of variables

  while(varList!=NULL){
    struct Lsymbol* Lentry = LLookUp(varList->varname);
    if(Lentry==NULL){
      if(varList->type==POINTER_TYPE){
        if(declaration_type==INTEGER_TYPE){
          L_Install(varList->varname,POINTER_INT_TYPE,0);
        }
        if(declaration_type==STRING_TYPE){
          L_Install(varList->varname,POINTER_STR_TYPE,0);
        }
      }
      else
      L_Install(varList->varname,declaration_type,0);
    }
    else{
      printf("ERROR: REDECLARATION OF LOCAL VARIABLE IN %s\n",Lentry->name);
      exit(1);
    }
    varList=varList->right;
  }
  
}
#line 1792 "y.tab.c"
    break;

  case 33: /* IdList: IdList ',' Lid  */
#line 267 "expl.y"
                        {
  struct tnode* IDNode = (yyvsp[0].no);
  struct tnode* temp = (yyvsp[-2].no);
  while (temp->right != NULL) {  
      temp = temp->right;
  }
  temp->right = IDNode;  
  (yyval.no) = (yyvsp[-2].no); 
}
#line 1806 "y.tab.c"
    break;

  case 35: /* Lid: ID  */
#line 277 "expl.y"
        {
   (yyval.no)=createNode(-1,1,-1,-1,NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
}
#line 1814 "y.tab.c"
    break;

  case 36: /* Lid: MUL ID  */
#line 280 "expl.y"
         { //this is for Pointer
  (yyval.no) = createNode(-1,1,-1,POINTER_TYPE,NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
}
#line 1822 "y.tab.c"
    break;

  case 37: /* Body: PBEGIN Slist ReturnStmt END  */
#line 286 "expl.y"
                                  {(yyval.no) = createNode(-1,1,1,-1,NULL,NULL,CONNECTOR_NODE,(yyvsp[-2].no),(yyvsp[-1].no));}
#line 1828 "y.tab.c"
    break;

  case 38: /* Body: PBEGIN Slist END  */
#line 287 "expl.y"
                   {(yyval.no)=(yyvsp[-1].no);}
#line 1834 "y.tab.c"
    break;

  case 39: /* Type: INT  */
#line 289 "expl.y"
           {(yyval.integer) = INTEGER_TYPE;}
#line 1840 "y.tab.c"
    break;

  case 40: /* Type: STR  */
#line 290 "expl.y"
      {(yyval.integer) = STRING_TYPE;}
#line 1846 "y.tab.c"
    break;

  case 41: /* Slist: Slist Stmt  */
#line 292 "expl.y"
                   {
  (yyval.no)=createNode(-1,1,1,-1,NULL,NULL,CONNECTOR_NODE,(yyvsp[-1].no),(yyvsp[0].no));
}
#line 1854 "y.tab.c"
    break;

  case 42: /* Slist: Stmt  */
#line 295 "expl.y"
       {(yyval.no)=(yyvsp[0].no);}
#line 1860 "y.tab.c"
    break;

  case 43: /* Stmt: InputStmt  */
#line 298 "expl.y"
                 {(yyval.no)=(yyvsp[0].no);}
#line 1866 "y.tab.c"
    break;

  case 44: /* Stmt: OutputStmt  */
#line 299 "expl.y"
             {(yyval.no)=(yyvsp[0].no);}
#line 1872 "y.tab.c"
    break;

  case 45: /* Stmt: AsgStmt  */
#line 300 "expl.y"
         {(yyval.no)=(yyvsp[0].no);}
#line 1878 "y.tab.c"
    break;

  case 46: /* Stmt: Ifstmt  */
#line 301 "expl.y"
        {(yyval.no)=(yyvsp[0].no);}
#line 1884 "y.tab.c"
    break;

  case 47: /* Stmt: WhileStmt  */
#line 302 "expl.y"
           {(yyval.no)=(yyvsp[0].no);}
#line 1890 "y.tab.c"
    break;

  case 48: /* Stmt: DoWhileStmt  */
#line 303 "expl.y"
             {(yyval.no)=(yyvsp[0].no);}
#line 1896 "y.tab.c"
    break;

  case 49: /* Stmt: BreakStmt  */
#line 304 "expl.y"
           {(yyval.no)=(yyvsp[0].no);}
#line 1902 "y.tab.c"
    break;

  case 50: /* Stmt: ContinueStmt  */
#line 305 "expl.y"
              {(yyval.no)=(yyvsp[0].no);}
#line 1908 "y.tab.c"
    break;

  case 51: /* Stmt: ReturnStmt  */
#line 306 "expl.y"
            {(yyval.no)=(yyvsp[0].no);}
#line 1914 "y.tab.c"
    break;

  case 52: /* Stmt: BreakpointStmt  */
#line 307 "expl.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 1920 "y.tab.c"
    break;

  case 53: /* InputStmt: READ '(' Identifier ')' ';'  */
#line 311 "expl.y"
                                        {
    // printf("Reading");
    (yyval.no) = makeNonLeafNode((yyvsp[-2].no),NULL,READ_NODE,"_");
  }
#line 1929 "y.tab.c"
    break;

  case 54: /* OutputStmt: WRITE '(' expr ')' ';'  */
#line 316 "expl.y"
                                    {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),NULL,WRITE_NODE,"_");}
#line 1935 "y.tab.c"
    break;

  case 55: /* AsgStmt: Identifier '=' expr ';'  */
#line 318 "expl.y"
                                  {
  // printf("%s\n",$1->Gentry->name);
  (yyval.no) = makeNonLeafNode((yyvsp[-3].no),(yyvsp[-1].no),OPERATOR_NODE,"=");
  }
#line 1944 "y.tab.c"
    break;

  case 56: /* BreakStmt: BREAK ';'  */
#line 323 "expl.y"
                      {(yyval.no)=makeNonLeafNode(NULL,NULL,BREAK_NODE,"_");}
#line 1950 "y.tab.c"
    break;

  case 57: /* BreakpointStmt: BREAKPOINT ';'  */
#line 325 "expl.y"
                                {(yyval.no)=makeNonLeafNode(NULL,NULL,BREAKPOINT_NODE,"_");}
#line 1956 "y.tab.c"
    break;

  case 58: /* ContinueStmt: CONTINUE ';'  */
#line 327 "expl.y"
                            {(yyval.no)=makeNonLeafNode(NULL,NULL,CONTINUE_NODE,"_");}
#line 1962 "y.tab.c"
    break;

  case 59: /* Ifstmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF ';'  */
#line 329 "expl.y"
                                                         {
  struct tnode* statements_node = makeNonLeafNode((yyvsp[-4].no),(yyvsp[-2].no),ELSE_NODE,"_");
  (yyval.no) = makeNonLeafNode((yyvsp[-7].no),statements_node,IF_NODE,"_");
}
#line 1971 "y.tab.c"
    break;

  case 60: /* Ifstmt: IF '(' expr ')' THEN Slist ENDIF ';'  */
#line 333 "expl.y"
                                       {(yyval.no) = makeNonLeafNode((yyvsp[-5].no),(yyvsp[-2].no),IF_NODE,"_");}
#line 1977 "y.tab.c"
    break;

  case 61: /* WhileStmt: WHILE '(' expr ')' DO Slist ENDWHILE ';'  */
#line 336 "expl.y"
                                                     {(yyval.no) = makeNonLeafNode((yyvsp[-5].no),(yyvsp[-2].no),WHILE_NODE,"_");}
#line 1983 "y.tab.c"
    break;

  case 62: /* DoWhileStmt: DO Slist WHILE '(' expr ')' ';'  */
#line 338 "expl.y"
                                              {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[-5].no),DO_WHILE_NODE,"_");}
#line 1989 "y.tab.c"
    break;

  case 63: /* ReturnStmt: RETURN expr ';'  */
#line 340 "expl.y"
                             {(yyval.no) = makeNonLeafNode((yyvsp[-1].no),NULL,RETURN_NODE,"_");}
#line 1995 "y.tab.c"
    break;

  case 64: /* expr: expr PLUS expr  */
#line 342 "expl.y"
                       {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"+");}
#line 2001 "y.tab.c"
    break;

  case 65: /* expr: expr MINUS expr  */
#line 343 "expl.y"
                      {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"-");}
#line 2007 "y.tab.c"
    break;

  case 66: /* expr: expr MUL expr  */
#line 344 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"*");}
#line 2013 "y.tab.c"
    break;

  case 67: /* expr: expr DIV expr  */
#line 345 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"/");}
#line 2019 "y.tab.c"
    break;

  case 68: /* expr: expr MOD expr  */
#line 346 "expl.y"
                  {(yyval.no)=makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"%");}
#line 2025 "y.tab.c"
    break;

  case 69: /* expr: expr LT expr  */
#line 347 "expl.y"
                 {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"<");}
#line 2031 "y.tab.c"
    break;

  case 70: /* expr: expr LTE expr  */
#line 348 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"<=");}
#line 2037 "y.tab.c"
    break;

  case 71: /* expr: expr GT expr  */
#line 349 "expl.y"
                 {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,">");}
#line 2043 "y.tab.c"
    break;

  case 72: /* expr: expr GTE expr  */
#line 350 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,">=");}
#line 2049 "y.tab.c"
    break;

  case 73: /* expr: expr EQUALS expr  */
#line 351 "expl.y"
                     {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"==");}
#line 2055 "y.tab.c"
    break;

  case 74: /* expr: expr NOTEQUALS expr  */
#line 352 "expl.y"
                        {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"!=");}
#line 2061 "y.tab.c"
    break;

  case 75: /* expr: expr AND expr  */
#line 353 "expl.y"
                  {(yyval.no)=makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"&&");}
#line 2067 "y.tab.c"
    break;

  case 76: /* expr: expr OR expr  */
#line 354 "expl.y"
                 {(yyval.no)=makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"||");}
#line 2073 "y.tab.c"
    break;

  case 77: /* expr: ID '(' ')'  */
#line 355 "expl.y"
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
#line 2096 "y.tab.c"
    break;

  case 78: /* expr: ID '(' ArgList ')'  */
#line 373 "expl.y"
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
#line 2120 "y.tab.c"
    break;

  case 79: /* expr: '(' expr ')'  */
#line 392 "expl.y"
                  {(yyval.no) = (yyvsp[-1].no);}
#line 2126 "y.tab.c"
    break;

  case 80: /* expr: NUM  */
#line 393 "expl.y"
          {(yyval.no) = (yyvsp[0].no);}
#line 2132 "y.tab.c"
    break;

  case 81: /* expr: STRING  */
#line 394 "expl.y"
           {(yyval.no)=(yyvsp[0].no);}
#line 2138 "y.tab.c"
    break;

  case 82: /* expr: Identifier  */
#line 395 "expl.y"
               {(yyval.no)=(yyvsp[0].no);}
#line 2144 "y.tab.c"
    break;

  case 83: /* ArgList: ArgList ',' expr  */
#line 399 "expl.y"
                           {
  (yyval.arglist)=append_arglist((yyvsp[-2].arglist),(yyvsp[0].no));
}
#line 2152 "y.tab.c"
    break;

  case 84: /* ArgList: expr  */
#line 402 "expl.y"
       {
  (yyval.arglist)=create_arglist((yyvsp[0].no));
}
#line 2160 "y.tab.c"
    break;

  case 85: /* Identifier: ID  */
#line 406 "expl.y"
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
#line 2178 "y.tab.c"
    break;

  case 86: /* Identifier: ID '[' index ']'  */
#line 419 "expl.y"
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
#line 2195 "y.tab.c"
    break;

  case 87: /* Identifier: ID '[' index ']' '[' index ']'  */
#line 431 "expl.y"
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
#line 2212 "y.tab.c"
    break;

  case 88: /* Identifier: MUL ID  */
#line 443 "expl.y"
         {
    struct tnode* IDNode = (yyvsp[0].no);
    int table_type = check_identifier(IDNode);
    if (table_type == 1) {//GLOBAL variable
        // Pointer dereferencing checks
        if (IDNode->Gentry->type != POINTER_INT_TYPE && IDNode->Gentry->type != POINTER_STR_TYPE) {
            printf("ERROR: DEREFERENCING A NON-POINTER VARIABLE %s\n", IDNode->Gentry->name);
            exit(1);
        }
        IDNode->type = (IDNode->Gentry->type == POINTER_INT_TYPE) ? INTEGER_TYPE : STRING_TYPE;
    }

    struct tnode* dereference_node = makeNonLeafNode(IDNode, NULL, DEREFERENCE_NODE, "_");
    dereference_node->type = IDNode->type;
    (yyval.no) = dereference_node;
}
#line 2233 "y.tab.c"
    break;

  case 89: /* Identifier: '&' Identifier  */
#line 459 "expl.y"
                 {
    struct tnode* IDNode = (yyvsp[0].no);
    int table_type = check_identifier(IDNode);

    if (table_type == 1) {//GLOBAL variable
        struct tnode* addressNode = makeNonLeafNode(IDNode, NULL, ADDRESS_NODE, "_");
        addressNode->type = (IDNode->Gentry->type == INTEGER_TYPE || IDNode->Gentry->type == POINTER_INT_TYPE)
                                ? POINTER_INT_TYPE
                                : POINTER_STR_TYPE;
        (yyval.no) = addressNode;
    }
}
#line 2250 "y.tab.c"
    break;

  case 90: /* index: expr  */
#line 473 "expl.y"
             {(yyval.no)=(yyvsp[0].no);}
#line 2256 "y.tab.c"
    break;


#line 2260 "y.tab.c"

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

#line 475 "expl.y"


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
