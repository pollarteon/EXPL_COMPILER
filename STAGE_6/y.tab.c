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
    NUM = 292,                     /* NUM  */
    STRING = 293,                  /* STRING  */
    END = 294,                     /* END  */
    ID = 295                       /* ID  */
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
#define NUM 292
#define STRING 293
#define END 294
#define ID 295

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

#line 226 "y.tab.c"

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
  YYSYMBOL_NUM = 37,                       /* NUM  */
  YYSYMBOL_STRING = 38,                    /* STRING  */
  YYSYMBOL_END = 39,                       /* END  */
  YYSYMBOL_ID = 40,                        /* ID  */
  YYSYMBOL_41_ = 41,                       /* '{'  */
  YYSYMBOL_42_ = 42,                       /* '}'  */
  YYSYMBOL_43_ = 43,                       /* ';'  */
  YYSYMBOL_44_ = 44,                       /* ','  */
  YYSYMBOL_45_ = 45,                       /* '['  */
  YYSYMBOL_46_ = 46,                       /* ']'  */
  YYSYMBOL_47_ = 47,                       /* '('  */
  YYSYMBOL_48_ = 48,                       /* ')'  */
  YYSYMBOL_49_ = 49,                       /* '='  */
  YYSYMBOL_50_ = 50,                       /* '&'  */
  YYSYMBOL_YYACCEPT = 51,                  /* $accept  */
  YYSYMBOL_program = 52,                   /* program  */
  YYSYMBOL_TypeDefBlock = 53,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 54,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 55,                   /* TypeDef  */
  YYSYMBOL_FieldDeclList = 56,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 57,                 /* FieldDecl  */
  YYSYMBOL_TypeName = 58,                  /* TypeName  */
  YYSYMBOL_GDeclBlock = 59,                /* GDeclBlock  */
  YYSYMBOL_GdeclList = 60,                 /* GdeclList  */
  YYSYMBOL_Gdecl = 61,                     /* Gdecl  */
  YYSYMBOL_GidList = 62,                   /* GidList  */
  YYSYMBOL_Gid = 63,                       /* Gid  */
  YYSYMBOL_FdefBlock = 64,                 /* FdefBlock  */
  YYSYMBOL_Fdef = 65,                      /* Fdef  */
  YYSYMBOL_ParamList = 66,                 /* ParamList  */
  YYSYMBOL_Param = 67,                     /* Param  */
  YYSYMBOL_MainBlock = 68,                 /* MainBlock  */
  YYSYMBOL_LdeclBlock = 69,                /* LdeclBlock  */
  YYSYMBOL_LdecList = 70,                  /* LdecList  */
  YYSYMBOL_Ldecl = 71,                     /* Ldecl  */
  YYSYMBOL_IdList = 72,                    /* IdList  */
  YYSYMBOL_Lid = 73,                       /* Lid  */
  YYSYMBOL_Body = 74,                      /* Body  */
  YYSYMBOL_Type = 75,                      /* Type  */
  YYSYMBOL_Slist = 76,                     /* Slist  */
  YYSYMBOL_Stmt = 77,                      /* Stmt  */
  YYSYMBOL_InputStmt = 78,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 79,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 80,                   /* AsgStmt  */
  YYSYMBOL_BreakStmt = 81,                 /* BreakStmt  */
  YYSYMBOL_BreakpointStmt = 82,            /* BreakpointStmt  */
  YYSYMBOL_ContinueStmt = 83,              /* ContinueStmt  */
  YYSYMBOL_Ifstmt = 84,                    /* Ifstmt  */
  YYSYMBOL_WhileStmt = 85,                 /* WhileStmt  */
  YYSYMBOL_DoWhileStmt = 86,               /* DoWhileStmt  */
  YYSYMBOL_ReturnStmt = 87,                /* ReturnStmt  */
  YYSYMBOL_expr = 88,                      /* expr  */
  YYSYMBOL_ArgList = 89,                   /* ArgList  */
  YYSYMBOL_Identifier = 90,                /* Identifier  */
  YYSYMBOL_index = 91                      /* index  */
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
#define YYLAST   432

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  221

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
       2,     2,     2,     2,     2,     2,     2,     2,    50,     2,
      47,    48,     2,     2,    44,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    43,
       2,    49,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,    42,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    45,    45,    46,    47,    53,    54,    57,    58,    61,
      90,    91,    94,   106,   107,   108,   115,   116,   118,   118,
     120,   149,   157,   159,   163,   167,   171,   175,   179,   188,
     188,   190,   240,   270,   273,   277,   282,   303,   329,   330,
     331,   333,   333,   335,   367,   375,   377,   380,   386,   387,
     389,   390,   391,   400,   403,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   419,   424,   426,   431,   433,
     435,   437,   442,   445,   447,   449,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     482,   501,   502,   503,   504,   508,   511,   515,   528,   540,
     552,   574,   598
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
  "MAIN", "RETURN", "BREAKPOINT", "TYPE", "ENDTYPE", "NUM", "STRING",
  "END", "ID", "'{'", "'}'", "';'", "','", "'['", "']'", "'('", "')'",
  "'='", "'&'", "$accept", "program", "TypeDefBlock", "TypeDefList",
  "TypeDef", "FieldDeclList", "FieldDecl", "TypeName", "GDeclBlock",
  "GdeclList", "Gdecl", "GidList", "Gid", "FdefBlock", "Fdef", "ParamList",
  "Param", "MainBlock", "LdeclBlock", "LdecList", "Ldecl", "IdList", "Lid",
  "Body", "Type", "Slist", "Stmt", "InputStmt", "OutputStmt", "AsgStmt",
  "BreakStmt", "BreakpointStmt", "ContinueStmt", "Ifstmt", "WhileStmt",
  "DoWhileStmt", "ReturnStmt", "expr", "ArgList", "Identifier", "index", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-100)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -28,   -23,    12,    70,   -13,    18,  -100,  -100,    52,    19,
     211,  -100,   216,  -100,  -100,  -100,  -100,  -100,  -100,    73,
    -100,     6,    27,    19,   211,  -100,  -100,    39,  -100,  -100,
    -100,    47,  -100,    46,  -100,  -100,    51,    -7,    13,  -100,
      81,  -100,  -100,   103,  -100,  -100,   132,  -100,   139,   -22,
    -100,     6,   166,    45,  -100,   138,  -100,    84,  -100,     9,
    -100,   186,   175,    86,   195,   223,  -100,   215,  -100,    93,
     249,   186,   217,   227,  -100,  -100,  -100,   143,  -100,    20,
     280,   231,   249,   186,   219,  -100,  -100,   229,  -100,    71,
    -100,   236,   232,   233,   235,   245,   280,   238,   240,   297,
     250,   252,    -3,   280,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,   239,   251,  -100,   256,   249,  -100,
    -100,  -100,    20,  -100,    -3,   297,   297,   297,   299,  -100,
    -100,  -100,  -100,  -100,   168,   297,   347,  -100,  -100,   297,
    -100,  -100,   260,  -100,   297,  -100,   270,  -100,   255,   134,
     142,   174,   269,     5,   182,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,  -100,   382,
     271,  -100,   355,  -100,   275,   276,   308,   298,   297,  -100,
     382,   204,  -100,   137,   137,  -100,  -100,  -100,   205,   388,
     164,   164,   164,   164,   410,   410,   277,  -100,  -100,  -100,
     280,   280,   214,   297,  -100,   297,    85,   234,   -19,   382,
     281,   280,   285,   286,  -100,  -100,   261,  -100,  -100,   288,
    -100
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
       0,    97,     0,     0,    54,    55,    56,    57,    61,    64,
      62,    58,    59,    60,    63,     0,    37,     0,     0,    25,
      47,    43,     0,   100,     0,     0,     0,     0,     0,    63,
      68,    70,    92,    93,    97,     0,     0,    94,    69,     0,
     101,    53,    63,    49,     0,    32,     0,    44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,   102,
       0,    48,     0,    31,     0,     0,     0,     0,     0,    89,
      96,     0,    91,    76,    77,    78,    79,    80,    88,    87,
      81,    83,    82,    84,    85,    86,    98,    67,    65,    66,
       0,     0,     0,     0,    90,     0,     0,     0,     0,    95,
       0,     0,     0,     0,    74,    99,     0,    72,    73,     0,
      71
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -100,  -100,  -100,  -100,   331,  -100,   307,  -100,  -100,  -100,
     321,  -100,   290,  -100,   318,   292,   278,    10,   -56,  -100,
     279,  -100,   224,   -79,    11,   -95,   -99,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,   -67,   -94,  -100,   -80,
     150
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     5,     6,    31,    32,    33,    10,    19,
      20,    38,    39,    24,    25,    57,    58,    11,    70,    77,
      78,    89,    90,    81,    59,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   129,   169,   181,   137,
     170
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     115,   128,    91,   117,   141,   136,   201,     1,    16,    17,
      91,    36,     7,   114,    67,    82,   115,     4,    18,    21,
      26,    27,   140,   115,   214,    87,    56,   118,    12,   141,
      21,   149,   150,   151,    42,    27,   142,   101,    48,   146,
      49,   154,   132,   133,   148,   134,    37,   102,   115,    68,
     172,    22,   135,   179,    13,   102,    50,    51,     4,   180,
      88,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,    40,    16,    17,    28,    29,    43,
      79,    15,    16,    17,   202,    18,    46,    30,    79,    44,
      91,    47,    18,    62,    92,    93,    94,   211,     8,   212,
       9,    95,    34,    16,    17,   206,   207,   141,   141,   209,
      96,    97,    98,    18,   121,   122,   216,   141,    99,   100,
     115,   115,    76,    16,    17,   101,   115,   115,    65,    52,
      65,   115,    66,    18,    72,   102,   115,   155,   156,   157,
     158,   159,   157,   158,   159,   155,   156,   157,   158,   159,
      53,   160,   161,   162,   163,   164,   165,   166,   167,   160,
     161,   162,   163,   164,   165,   166,   167,   155,   156,   157,
     158,   159,    85,    16,    17,    54,    55,   155,   156,   157,
     158,   159,   175,    18,    64,   155,   156,   157,   158,   159,
     176,   160,   161,   162,   163,   164,   165,   166,   167,   160,
     161,   162,   163,   164,   165,   166,   167,    61,   155,   156,
     157,   158,   159,   139,    69,   153,    71,   155,   156,   157,
     158,   159,   177,   161,   162,   163,   164,   165,   166,   167,
     182,   160,   161,   162,   163,   164,   165,   166,   167,    91,
      73,    23,    17,    92,    93,    94,    28,    29,   203,   213,
      95,    18,   204,    16,    17,    75,    30,    80,    83,    96,
      97,    98,   208,    18,    84,   119,    91,    99,   100,   120,
      92,    93,    94,   116,   101,   219,   123,    95,   143,   124,
     125,   130,   126,   131,   102,    91,    96,    97,    98,    92,
      93,    94,   127,   138,    99,   100,    95,   139,   145,   171,
     144,   101,    91,   174,    91,    96,    97,    98,    92,    93,
      94,   102,   173,    99,   100,   152,   178,   196,   198,   199,
     101,   200,   205,   201,    96,    97,    98,   215,   217,   218,
     102,   220,    99,   100,   132,   133,    14,   134,    45,   101,
      35,    60,    41,    74,   135,    63,   147,   102,     0,   102,
     155,   156,   157,   158,   159,   210,    86,     0,   155,   156,
     157,   158,   159,     0,   160,   161,   162,   163,   164,   165,
     166,   167,   160,   161,   162,   163,   164,   165,   166,   167,
       0,     0,     0,     0,     0,   155,   156,   157,   158,   159,
     168,   155,   156,   157,   158,   159,     0,     0,   197,   160,
     161,   162,   163,   164,   165,   166,   167,   162,   163,   164,
     165,   166,   167,   155,   156,   157,   158,   159,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   162,
     163,   164,   165
};

static const yytype_int16 yycheck[] =
{
      80,    96,     5,    82,   103,    99,    25,    35,    30,    31,
       5,     5,     0,    80,     5,    71,    96,    40,    40,     8,
      10,    10,   102,   103,    43,     5,    48,    83,    41,   128,
      19,   125,   126,   127,    24,    24,   103,    40,    45,   118,
      47,   135,    37,    38,   124,    40,    40,    50,   128,    40,
     144,    32,    47,    48,    36,    50,    43,    44,    40,   153,
      40,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,    47,    30,    31,    30,    31,    40,
      69,    29,    30,    31,   178,    40,    40,    40,    77,    42,
       5,    40,    40,    48,     9,    10,    11,    12,    28,    14,
      30,    16,    29,    30,    31,   200,   201,   206,   207,   203,
      25,    26,    27,    40,    43,    44,   211,   216,    33,    34,
     200,   201,    29,    30,    31,    40,   206,   207,    44,    48,
      44,   211,    48,    40,    48,    50,   216,     3,     4,     5,
       6,     7,     5,     6,     7,     3,     4,     5,     6,     7,
      47,    17,    18,    19,    20,    21,    22,    23,    24,    17,
      18,    19,    20,    21,    22,    23,    24,     3,     4,     5,
       6,     7,    29,    30,    31,    43,    37,     3,     4,     5,
       6,     7,    48,    40,    46,     3,     4,     5,     6,     7,
      48,    17,    18,    19,    20,    21,    22,    23,    24,    17,
      18,    19,    20,    21,    22,    23,    24,    41,     3,     4,
       5,     6,     7,    45,    28,    47,    41,     3,     4,     5,
       6,     7,    48,    18,    19,    20,    21,    22,    23,    24,
      48,    17,    18,    19,    20,    21,    22,    23,    24,     5,
      45,    30,    31,     9,    10,    11,    30,    31,    44,    15,
      16,    40,    48,    30,    31,    40,    40,     8,    41,    25,
      26,    27,    48,    40,    37,    46,     5,    33,    34,    40,
       9,    10,    11,    42,    40,    14,    40,    16,    39,    47,
      47,    43,    47,    43,    50,     5,    25,    26,    27,     9,
      10,    11,    47,    43,    33,    34,    16,    45,    42,    39,
      49,    40,     5,    48,     5,    25,    26,    27,     9,    10,
      11,    50,    42,    33,    34,    16,    47,    46,    43,    43,
      40,    13,    45,    25,    25,    26,    27,    46,    43,    43,
      50,    43,    33,    34,    37,    38,     5,    40,    31,    40,
      19,    51,    24,    65,    47,    53,   122,    50,    -1,    50,
       3,     4,     5,     6,     7,   205,    77,    -1,     3,     4,
       5,     6,     7,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      43,     3,     4,     5,     6,     7,    -1,    -1,    43,    17,
      18,    19,    20,    21,    22,    23,    24,    19,    20,    21,
      22,    23,    24,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      20,    21,    22
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    35,    52,    53,    40,    54,    55,     0,    28,    30,
      59,    68,    41,    36,    55,    29,    30,    31,    40,    60,
      61,    75,    32,    30,    64,    65,    68,    75,    30,    31,
      40,    56,    57,    58,    29,    61,     5,    40,    62,    63,
      47,    65,    68,    40,    42,    57,    40,    40,    45,    47,
      43,    44,    48,    47,    43,    37,    48,    66,    67,    75,
      63,    41,    48,    66,    46,    44,    48,     5,    40,    28,
      69,    41,    48,    45,    67,    40,    29,    70,    71,    75,
       8,    74,    69,    41,    37,    29,    71,     5,    40,    72,
      73,     5,     9,    10,    11,    16,    25,    26,    27,    33,
      34,    40,    50,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    90,    42,    74,    69,    46,
      40,    43,    44,    40,    47,    47,    47,    47,    76,    87,
      43,    43,    37,    38,    40,    47,    88,    90,    43,    45,
      90,    77,    87,    39,    49,    42,    74,    73,    90,    88,
      88,    88,    16,    47,    88,     3,     4,     5,     6,     7,
      17,    18,    19,    20,    21,    22,    23,    24,    43,    88,
      91,    39,    88,    42,    48,    48,    48,    48,    47,    48,
      88,    89,    48,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    46,    43,    43,    43,
      13,    25,    88,    44,    48,    45,    76,    76,    48,    88,
      91,    12,    14,    15,    43,    46,    76,    43,    43,    14,
      43
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    52,    52,    53,    53,    54,    54,    55,
      56,    56,    57,    58,    58,    58,    59,    59,    60,    60,
      61,    62,    62,    63,    63,    63,    63,    63,    63,    64,
      64,    65,    65,    66,    66,    67,    67,    68,    69,    69,
      69,    70,    70,    71,    72,    72,    73,    73,    74,    74,
      75,    75,    75,    76,    76,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    78,    79,    80,    81,    82,
      83,    84,    84,    85,    86,    87,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    89,    89,    90,    90,    90,
      90,    90,    91
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
       1,     1,     1,     1,     1,     5,     5,     4,     2,     2,
       2,    10,     8,     8,     7,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     3,     1,     1,     1,     3,     1,     1,     4,     7,
       2,     2,     1
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
#line 45 "expl.y"
                                                    {printf("Program Finished\n");exit(1);}
#line 1487 "y.tab.c"
    break;

  case 3: /* program: TypeDefBlock GDeclBlock MainBlock  */
#line 46 "expl.y"
                                      {printf("Program Finished\n");exit(1);}
#line 1493 "y.tab.c"
    break;

  case 4: /* program: TypeDefBlock MainBlock  */
#line 47 "expl.y"
                          {printf("Program Finished\n");exit(1);}
#line 1499 "y.tab.c"
    break;

  case 5: /* TypeDefBlock: TYPE TypeDefList ENDTYPE  */
#line 53 "expl.y"
                                        {PrintTypeTable();}
#line 1505 "y.tab.c"
    break;

  case 7: /* TypeDefList: TypeDefList TypeDef  */
#line 57 "expl.y"
                                  {}
#line 1511 "y.tab.c"
    break;

  case 8: /* TypeDefList: TypeDef  */
#line 58 "expl.y"
            {}
#line 1517 "y.tab.c"
    break;

  case 9: /* TypeDef: ID '{' FieldDeclList '}'  */
#line 61 "expl.y"
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
#line 1550 "y.tab.c"
    break;

  case 10: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 90 "expl.y"
                                        {(yyval.fieldlist) =Finstall((yyvsp[-1].fieldlist),(yyvsp[0].fieldlist));}
#line 1556 "y.tab.c"
    break;

  case 11: /* FieldDeclList: FieldDecl  */
#line 91 "expl.y"
              {(yyval.fieldlist)=(yyvsp[0].fieldlist);}
#line 1562 "y.tab.c"
    break;

  case 12: /* FieldDecl: TypeName ID ';'  */
#line 94 "expl.y"
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
#line 1578 "y.tab.c"
    break;

  case 13: /* TypeName: INT  */
#line 106 "expl.y"
               {(yyval.string)="int";}
#line 1584 "y.tab.c"
    break;

  case 14: /* TypeName: STR  */
#line 107 "expl.y"
        {(yyval.string)="str";}
#line 1590 "y.tab.c"
    break;

  case 15: /* TypeName: ID  */
#line 108 "expl.y"
       {(yyval.string)=(yyvsp[0].no)->varname;}
#line 1596 "y.tab.c"
    break;

  case 16: /* GDeclBlock: DECL GdeclList ENDDECL  */
#line 115 "expl.y"
                                    {print_GSymbolTable();L_cleanup();local_binding=1;param_binding=1;}
#line 1602 "y.tab.c"
    break;

  case 17: /* GDeclBlock: DECL ENDDECL  */
#line 116 "expl.y"
               {}
#line 1608 "y.tab.c"
    break;

  case 18: /* GdeclList: GdeclList Gdecl  */
#line 118 "expl.y"
                            {}
#line 1614 "y.tab.c"
    break;

  case 19: /* GdeclList: Gdecl  */
#line 118 "expl.y"
                                       {}
#line 1620 "y.tab.c"
    break;

  case 20: /* Gdecl: Type GidList ';'  */
#line 120 "expl.y"
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
#line 1653 "y.tab.c"
    break;

  case 21: /* GidList: GidList ',' Gid  */
#line 149 "expl.y"
                          {
  struct tnode* IDNode = (yyvsp[0].no);
  struct tnode* temp = (yyvsp[-2].no);
  while (temp->right != NULL) {  
      temp = temp->right;
  }
  temp->right = IDNode;  
  (yyval.no) = (yyvsp[-2].no); 
}
#line 1667 "y.tab.c"
    break;

  case 23: /* Gid: ID  */
#line 159 "expl.y"
        {
  G_Install((yyvsp[0].no)->varname,NULL,1,-1,NULL,-1);
   (yyval.no)=createNode(-1,1,-1,NULL,NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
}
#line 1676 "y.tab.c"
    break;

  case 24: /* Gid: ID '[' NUM ']'  */
#line 163 "expl.y"
                {
  G_Install((yyvsp[-3].no)->varname,NULL,(yyvsp[-1].no)->val,-1,NULL,-1);
  (yyval.no)=createNode(-1,(yyvsp[-1].no)->val,1,NULL,NULL,(yyvsp[-3].no)->varname,-1,NULL,NULL);
}
#line 1685 "y.tab.c"
    break;

  case 25: /* Gid: ID '[' NUM ']' '[' NUM ']'  */
#line 167 "expl.y"
                            {
  G_Install((yyvsp[-6].no)->varname,NULL,(yyvsp[-4].no)->val,(yyvsp[-1].no)->val,NULL,-1);
   (yyval.no) = createNode(-1,(yyvsp[-4].no)->val,(yyvsp[-1].no)->val,NULL,NULL,(yyvsp[-6].no)->varname,-1,NULL,NULL);
}
#line 1694 "y.tab.c"
    break;

  case 26: /* Gid: MUL ID  */
#line 171 "expl.y"
         { //this is for Pointer
  G_Install((yyvsp[0].no)->varname,TLookup("pointer"),1,-1,NULL,-1);
  (yyval.no) = createNode(-1,1,-1,TLookup("pointer"),NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
}
#line 1703 "y.tab.c"
    break;

  case 27: /* Gid: ID '(' ParamList ')'  */
#line 175 "expl.y"
                       {
  G_Install((yyvsp[-3].no)->varname,NULL,1,-1,(yyvsp[-1].plist),flabel++);
  (yyval.no) = createNode(-1,1,-1,NULL,NULL,(yyvsp[-3].no)->varname,-1,NULL,NULL);
}
#line 1712 "y.tab.c"
    break;

  case 28: /* Gid: ID '(' ')'  */
#line 179 "expl.y"
            {
  G_Install((yyvsp[-2].no)->varname,NULL,1,-1,NULL,flabel++);
  (yyval.no) = createNode(-1,1,-1,NULL,NULL,(yyvsp[-2].no)->varname,-1,NULL,NULL);
}
#line 1721 "y.tab.c"
    break;

  case 31: /* Fdef: Type ID '(' ParamList ')' '{' LdeclBlock Body '}'  */
#line 190 "expl.y"
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
#line 1776 "y.tab.c"
    break;

  case 32: /* Fdef: Type ID '(' ')' '{' LdeclBlock Body '}'  */
#line 240 "expl.y"
                                         {
  char* definition_type = (yyvsp[-7].string);
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
    returnStmt_checker((yyvsp[-1].no),TLookup(definition_type)); //return statement checker..............
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
#line 1810 "y.tab.c"
    break;

  case 33: /* ParamList: ParamList ',' Param  */
#line 270 "expl.y"
                                {
  (yyval.plist) = append_param_list((yyvsp[-2].plist),(yyvsp[0].plist));
}
#line 1818 "y.tab.c"
    break;

  case 34: /* ParamList: Param  */
#line 273 "expl.y"
         {
  (yyval.plist) = (yyvsp[0].plist);
}
#line 1826 "y.tab.c"
    break;

  case 35: /* Param: Type ID  */
#line 277 "expl.y"
                {
  Typetable* param_type = TLookup((yyvsp[-1].string));
  L_Install((yyvsp[0].no)->varname,param_type,1);
  (yyval.plist) = create_param_list(param_type,(yyvsp[0].no)->varname);
}
#line 1836 "y.tab.c"
    break;

  case 36: /* Param: Type MUL ID  */
#line 282 "expl.y"
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
#line 1857 "y.tab.c"
    break;

  case 37: /* MainBlock: INT MAIN '(' ')' '{' LdeclBlock Body '}'  */
#line 303 "expl.y"
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
#line 1882 "y.tab.c"
    break;

  case 38: /* LdeclBlock: DECL LdecList ENDDECL  */
#line 329 "expl.y"
                                   {local_binding=1;}
#line 1888 "y.tab.c"
    break;

  case 39: /* LdeclBlock: DECL ENDDECL  */
#line 330 "expl.y"
               {local_binding=1;}
#line 1894 "y.tab.c"
    break;

  case 40: /* LdeclBlock: %empty  */
#line 331 "expl.y"
             {}
#line 1900 "y.tab.c"
    break;

  case 41: /* LdecList: LdecList Ldecl  */
#line 333 "expl.y"
                           {}
#line 1906 "y.tab.c"
    break;

  case 42: /* LdecList: Ldecl  */
#line 333 "expl.y"
                                      {}
#line 1912 "y.tab.c"
    break;

  case 43: /* Ldecl: Type IdList ';'  */
#line 335 "expl.y"
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
#line 1948 "y.tab.c"
    break;

  case 44: /* IdList: IdList ',' Lid  */
#line 367 "expl.y"
                        {
  struct tnode* IDNode = (yyvsp[0].no);
  struct tnode* temp = (yyvsp[-2].no);
  while (temp->right != NULL) {  
      temp = temp->right;
  }
  temp->right = IDNode;  
  (yyval.no) = (yyvsp[-2].no); 
}
#line 1962 "y.tab.c"
    break;

  case 46: /* Lid: ID  */
#line 377 "expl.y"
        {
   (yyval.no)=createNode(-1,1,-1,NULL,NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
}
#line 1970 "y.tab.c"
    break;

  case 47: /* Lid: MUL ID  */
#line 380 "expl.y"
         { //this is for Pointer
  (yyval.no) = createNode(-1,1,-1,TLookup("pointer"),NULL,(yyvsp[0].no)->varname,-1,NULL,NULL);
}
#line 1978 "y.tab.c"
    break;

  case 48: /* Body: PBEGIN Slist ReturnStmt END  */
#line 386 "expl.y"
                                  {(yyval.no) = createNode(-1,1,1,NULL,NULL,NULL,CONNECTOR_NODE,(yyvsp[-2].no),(yyvsp[-1].no));}
#line 1984 "y.tab.c"
    break;

  case 49: /* Body: PBEGIN ReturnStmt END  */
#line 387 "expl.y"
                        {(yyval.no)=(yyvsp[-1].no);}
#line 1990 "y.tab.c"
    break;

  case 50: /* Type: INT  */
#line 389 "expl.y"
           {(yyval.string) = "int";}
#line 1996 "y.tab.c"
    break;

  case 51: /* Type: STR  */
#line 390 "expl.y"
      {(yyval.string) = "str";}
#line 2002 "y.tab.c"
    break;

  case 52: /* Type: ID  */
#line 391 "expl.y"
     {
    char* type_name = (yyvsp[0].no)->varname;
    if(TLookup((yyvsp[0].no)->varname)==NULL){
      printf("ERROR : The Following type is not user-defined %s\n",type_name);
      return -1;
    }
    (yyval.string)=(yyvsp[0].no)->varname;
  }
#line 2015 "y.tab.c"
    break;

  case 53: /* Slist: Slist Stmt  */
#line 400 "expl.y"
                   {
  (yyval.no)=createNode(-1,1,1,NULL,NULL,NULL,CONNECTOR_NODE,(yyvsp[-1].no),(yyvsp[0].no));
}
#line 2023 "y.tab.c"
    break;

  case 54: /* Slist: Stmt  */
#line 403 "expl.y"
       {(yyval.no)=(yyvsp[0].no);}
#line 2029 "y.tab.c"
    break;

  case 55: /* Stmt: InputStmt  */
#line 406 "expl.y"
                 {(yyval.no)=(yyvsp[0].no);}
#line 2035 "y.tab.c"
    break;

  case 56: /* Stmt: OutputStmt  */
#line 407 "expl.y"
             {(yyval.no)=(yyvsp[0].no);}
#line 2041 "y.tab.c"
    break;

  case 57: /* Stmt: AsgStmt  */
#line 408 "expl.y"
         {(yyval.no)=(yyvsp[0].no);}
#line 2047 "y.tab.c"
    break;

  case 58: /* Stmt: Ifstmt  */
#line 409 "expl.y"
        {(yyval.no)=(yyvsp[0].no);}
#line 2053 "y.tab.c"
    break;

  case 59: /* Stmt: WhileStmt  */
#line 410 "expl.y"
           {(yyval.no)=(yyvsp[0].no);}
#line 2059 "y.tab.c"
    break;

  case 60: /* Stmt: DoWhileStmt  */
#line 411 "expl.y"
             {(yyval.no)=(yyvsp[0].no);}
#line 2065 "y.tab.c"
    break;

  case 61: /* Stmt: BreakStmt  */
#line 412 "expl.y"
           {(yyval.no)=(yyvsp[0].no);}
#line 2071 "y.tab.c"
    break;

  case 62: /* Stmt: ContinueStmt  */
#line 413 "expl.y"
              {(yyval.no)=(yyvsp[0].no);}
#line 2077 "y.tab.c"
    break;

  case 63: /* Stmt: ReturnStmt  */
#line 414 "expl.y"
            {(yyval.no)=(yyvsp[0].no);}
#line 2083 "y.tab.c"
    break;

  case 64: /* Stmt: BreakpointStmt  */
#line 415 "expl.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 2089 "y.tab.c"
    break;

  case 65: /* InputStmt: READ '(' Identifier ')' ';'  */
#line 419 "expl.y"
                                        {
    // printf("Reading");
    (yyval.no) = makeNonLeafNode((yyvsp[-2].no),NULL,READ_NODE,"_");
  }
#line 2098 "y.tab.c"
    break;

  case 66: /* OutputStmt: WRITE '(' expr ')' ';'  */
#line 424 "expl.y"
                                    {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),NULL,WRITE_NODE,"_");}
#line 2104 "y.tab.c"
    break;

  case 67: /* AsgStmt: Identifier '=' expr ';'  */
#line 426 "expl.y"
                                  {
  // printf("%s\n",$1->Gentry->name);
  (yyval.no) = makeNonLeafNode((yyvsp[-3].no),(yyvsp[-1].no),OPERATOR_NODE,"=");
  }
#line 2113 "y.tab.c"
    break;

  case 68: /* BreakStmt: BREAK ';'  */
#line 431 "expl.y"
                      {(yyval.no)=makeNonLeafNode(NULL,NULL,BREAK_NODE,"_");}
#line 2119 "y.tab.c"
    break;

  case 69: /* BreakpointStmt: BREAKPOINT ';'  */
#line 433 "expl.y"
                                {(yyval.no)=makeNonLeafNode(NULL,NULL,BREAKPOINT_NODE,"_");}
#line 2125 "y.tab.c"
    break;

  case 70: /* ContinueStmt: CONTINUE ';'  */
#line 435 "expl.y"
                            {(yyval.no)=makeNonLeafNode(NULL,NULL,CONTINUE_NODE,"_");}
#line 2131 "y.tab.c"
    break;

  case 71: /* Ifstmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF ';'  */
#line 437 "expl.y"
                                                         {
  struct tnode* if_else_node = makeNonLeafNode((yyvsp[-7].no),(yyvsp[-4].no),IF_ELSE_NODE,"_");
  if_else_node->middle = (yyvsp[-2].no);
  (yyval.no) = if_else_node;
}
#line 2141 "y.tab.c"
    break;

  case 72: /* Ifstmt: IF '(' expr ')' THEN Slist ENDIF ';'  */
#line 442 "expl.y"
                                       {(yyval.no) = makeNonLeafNode((yyvsp[-5].no),(yyvsp[-2].no),IF_NODE,"_");}
#line 2147 "y.tab.c"
    break;

  case 73: /* WhileStmt: WHILE '(' expr ')' DO Slist ENDWHILE ';'  */
#line 445 "expl.y"
                                                     {(yyval.no) = makeNonLeafNode((yyvsp[-5].no),(yyvsp[-2].no),WHILE_NODE,"_");}
#line 2153 "y.tab.c"
    break;

  case 74: /* DoWhileStmt: DO Slist WHILE '(' expr ')' ';'  */
#line 447 "expl.y"
                                              {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[-5].no),DO_WHILE_NODE,"_");}
#line 2159 "y.tab.c"
    break;

  case 75: /* ReturnStmt: RETURN expr ';'  */
#line 449 "expl.y"
                             {(yyval.no) = makeNonLeafNode((yyvsp[-1].no),NULL,RETURN_NODE,"_");}
#line 2165 "y.tab.c"
    break;

  case 76: /* expr: expr PLUS expr  */
#line 451 "expl.y"
                       {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"+");}
#line 2171 "y.tab.c"
    break;

  case 77: /* expr: expr MINUS expr  */
#line 452 "expl.y"
                      {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"-");}
#line 2177 "y.tab.c"
    break;

  case 78: /* expr: expr MUL expr  */
#line 453 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"*");}
#line 2183 "y.tab.c"
    break;

  case 79: /* expr: expr DIV expr  */
#line 454 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"/");}
#line 2189 "y.tab.c"
    break;

  case 80: /* expr: expr MOD expr  */
#line 455 "expl.y"
                  {(yyval.no)=makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"%");}
#line 2195 "y.tab.c"
    break;

  case 81: /* expr: expr LT expr  */
#line 456 "expl.y"
                 {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"<");}
#line 2201 "y.tab.c"
    break;

  case 82: /* expr: expr LTE expr  */
#line 457 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"<=");}
#line 2207 "y.tab.c"
    break;

  case 83: /* expr: expr GT expr  */
#line 458 "expl.y"
                 {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,">");}
#line 2213 "y.tab.c"
    break;

  case 84: /* expr: expr GTE expr  */
#line 459 "expl.y"
                  {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,">=");}
#line 2219 "y.tab.c"
    break;

  case 85: /* expr: expr EQUALS expr  */
#line 460 "expl.y"
                     {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"==");}
#line 2225 "y.tab.c"
    break;

  case 86: /* expr: expr NOTEQUALS expr  */
#line 461 "expl.y"
                        {(yyval.no) = makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"!=");}
#line 2231 "y.tab.c"
    break;

  case 87: /* expr: expr AND expr  */
#line 462 "expl.y"
                  {(yyval.no)=makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"&&");}
#line 2237 "y.tab.c"
    break;

  case 88: /* expr: expr OR expr  */
#line 463 "expl.y"
                 {(yyval.no)=makeNonLeafNode((yyvsp[-2].no),(yyvsp[0].no),OPERATOR_NODE,"||");}
#line 2243 "y.tab.c"
    break;

  case 89: /* expr: ID '(' ')'  */
#line 464 "expl.y"
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
#line 2266 "y.tab.c"
    break;

  case 90: /* expr: ID '(' ArgList ')'  */
#line 482 "expl.y"
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
#line 2290 "y.tab.c"
    break;

  case 91: /* expr: '(' expr ')'  */
#line 501 "expl.y"
                  {(yyval.no) = (yyvsp[-1].no);}
#line 2296 "y.tab.c"
    break;

  case 92: /* expr: NUM  */
#line 502 "expl.y"
          {(yyval.no) = (yyvsp[0].no);}
#line 2302 "y.tab.c"
    break;

  case 93: /* expr: STRING  */
#line 503 "expl.y"
           {(yyval.no)=(yyvsp[0].no);}
#line 2308 "y.tab.c"
    break;

  case 94: /* expr: Identifier  */
#line 504 "expl.y"
               {(yyval.no)=(yyvsp[0].no);}
#line 2314 "y.tab.c"
    break;

  case 95: /* ArgList: ArgList ',' expr  */
#line 508 "expl.y"
                           {
  (yyval.arglist)=append_arglist((yyvsp[-2].arglist),(yyvsp[0].no));
}
#line 2322 "y.tab.c"
    break;

  case 96: /* ArgList: expr  */
#line 511 "expl.y"
       {
  (yyval.arglist)=create_arglist((yyvsp[0].no));
}
#line 2330 "y.tab.c"
    break;

  case 97: /* Identifier: ID  */
#line 515 "expl.y"
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
#line 2348 "y.tab.c"
    break;

  case 98: /* Identifier: ID '[' index ']'  */
#line 528 "expl.y"
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
#line 2365 "y.tab.c"
    break;

  case 99: /* Identifier: ID '[' index ']' '[' index ']'  */
#line 540 "expl.y"
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
#line 2382 "y.tab.c"
    break;

  case 100: /* Identifier: MUL ID  */
#line 552 "expl.y"
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
#line 2409 "y.tab.c"
    break;

  case 101: /* Identifier: '&' Identifier  */
#line 574 "expl.y"
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
#line 2436 "y.tab.c"
    break;

  case 102: /* index: expr  */
#line 598 "expl.y"
             {(yyval.no)=(yyvsp[0].no);}
#line 2442 "y.tab.c"
    break;


#line 2446 "y.tab.c"

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

#line 600 "expl.y"


void yyerror(char const *s)
{
    printf("yyerror %s",s);
}


int main(void) {
  FILE* input_file = fopen("input.txt","r");
  yyin = input_file;
  TypeTableCreate();
  yyparse();

 return 0;
}
