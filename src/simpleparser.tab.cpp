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

#include "simpleparser.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_INT_CONSTANT = 4,               /* INT_CONSTANT  */
  YYSYMBOL_FLOAT_CONSTANT = 5,             /* FLOAT_CONSTANT  */
  YYSYMBOL_CHAR_CONSTANT = 6,              /* CHAR_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 7,             /* STRING_LITERAL  */
  YYSYMBOL_SIZEOF = 8,                     /* SIZEOF  */
  YYSYMBOL_PTR_OP = 9,                     /* PTR_OP  */
  YYSYMBOL_INC_OP = 10,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 11,                    /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 12,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 13,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 14,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 15,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 16,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 17,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 18,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 19,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 20,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 21,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 22,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 23,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 24,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 25,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 26,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 27,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 28,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 29,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPE_NAME = 30,                 /* TYPE_NAME  */
  YYSYMBOL_FULLSTOP = 31,                  /* FULLSTOP  */
  YYSYMBOL_AND = 32,                       /* AND  */
  YYSYMBOL_TILDE = 33,                     /* TILDE  */
  YYSYMBOL_EXCLAM = 34,                    /* EXCLAM  */
  YYSYMBOL_TYPEDEF = 35,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 36,                    /* EXTERN  */
  YYSYMBOL_STATIC = 37,                    /* STATIC  */
  YYSYMBOL_AUTO = 38,                      /* AUTO  */
  YYSYMBOL_REGISTER = 39,                  /* REGISTER  */
  YYSYMBOL_QMARK = 40,                     /* QMARK  */
  YYSYMBOL_CHAR = 41,                      /* CHAR  */
  YYSYMBOL_INT = 42,                       /* INT  */
  YYSYMBOL_UNSIGNED = 43,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 44,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 45,                    /* DOUBLE  */
  YYSYMBOL_VOID = 46,                      /* VOID  */
  YYSYMBOL_STRUCT = 47,                    /* STRUCT  */
  YYSYMBOL_UNION = 48,                     /* UNION  */
  YYSYMBOL_ENUM = 49,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 50,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 51,                      /* CASE  */
  YYSYMBOL_DEFAULT = 52,                   /* DEFAULT  */
  YYSYMBOL_ELSE = 53,                      /* ELSE  */
  YYSYMBOL_SWITCH = 54,                    /* SWITCH  */
  YYSYMBOL_WHILE = 55,                     /* WHILE  */
  YYSYMBOL_DO = 56,                        /* DO  */
  YYSYMBOL_FOR = 57,                       /* FOR  */
  YYSYMBOL_GOTO = 58,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 59,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 60,                     /* BREAK  */
  YYSYMBOL_RETURN = 61,                    /* RETURN  */
  YYSYMBOL_IF = 62,                        /* IF  */
  YYSYMBOL_EQ = 63,                        /* EQ  */
  YYSYMBOL_SEMIC = 64,                     /* SEMIC  */
  YYSYMBOL_ADD = 65,                       /* ADD  */
  YYSYMBOL_SUB = 66,                       /* SUB  */
  YYSYMBOL_MUL = 67,                       /* MUL  */
  YYSYMBOL_DIV = 68,                       /* DIV  */
  YYSYMBOL_MOD = 69,                       /* MOD  */
  YYSYMBOL_LESSTHAN = 70,                  /* LESSTHAN  */
  YYSYMBOL_GREATERTHAN = 71,               /* GREATERTHAN  */
  YYSYMBOL_LBRACKET = 72,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 73,                  /* RBRACKET  */
  YYSYMBOL_LCURLYBRACE = 74,               /* LCURLYBRACE  */
  YYSYMBOL_RCURLYBRACE = 75,               /* RCURLYBRACE  */
  YYSYMBOL_LTEQ = 76,                      /* LTEQ  */
  YYSYMBOL_GTEQ = 77,                      /* GTEQ  */
  YYSYMBOL_EXCLOR = 78,                    /* EXCLOR  */
  YYSYMBOL_INCLOR = 79,                    /* INCLOR  */
  YYSYMBOL_COMMA = 80,                     /* COMMA  */
  YYSYMBOL_COLON = 81,                     /* COLON  */
  YYSYMBOL_LSQUAREBRACKET = 82,            /* LSQUAREBRACKET  */
  YYSYMBOL_RSQUAREBRACKET = 83,            /* RSQUAREBRACKET  */
  YYSYMBOL_YYACCEPT = 84,                  /* $accept  */
  YYSYMBOL_ROOT = 85,                      /* ROOT  */
  YYSYMBOL_translation_unit = 86,          /* translation_unit  */
  YYSYMBOL_external_declaration = 87,      /* external_declaration  */
  YYSYMBOL_function_definition = 88,       /* function_definition  */
  YYSYMBOL_declaration = 89,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 90,    /* declaration_specifiers  */
  YYSYMBOL_declarator = 91,                /* declarator  */
  YYSYMBOL_declaration_list = 92,          /* declaration_list  */
  YYSYMBOL_block = 93,                     /* block  */
  YYSYMBOL_init_declarator_list = 94,      /* init_declarator_list  */
  YYSYMBOL_type_specifier = 95,            /* type_specifier  */
  YYSYMBOL_direct_declarator = 96,         /* direct_declarator  */
  YYSYMBOL_statement_list = 97,            /* statement_list  */
  YYSYMBOL_init_declarator = 98,           /* init_declarator  */
  YYSYMBOL_constant_expression = 99,       /* constant_expression  */
  YYSYMBOL_identifier_list = 100,          /* identifier_list  */
  YYSYMBOL_statement = 101,                /* statement  */
  YYSYMBOL_conditional_expression = 102,   /* conditional_expression  */
  YYSYMBOL_parameter_list = 103,           /* parameter_list  */
  YYSYMBOL_labeled_statement = 104,        /* labeled_statement  */
  YYSYMBOL_expression_statement = 105,     /* expression_statement  */
  YYSYMBOL_selection_statement = 106,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 107,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 108,           /* jump_statement  */
  YYSYMBOL_assignment_expression = 109,    /* assignment_expression  */
  YYSYMBOL_logical_or_expression = 110,    /* logical_or_expression  */
  YYSYMBOL_expression = 111,               /* expression  */
  YYSYMBOL_unary_expression = 112,         /* unary_expression  */
  YYSYMBOL_logical_and_expression = 113,   /* logical_and_expression  */
  YYSYMBOL_postfix_expression = 114,       /* postfix_expression  */
  YYSYMBOL_primary_expression = 115,       /* primary_expression  */
  YYSYMBOL_type_name = 116,                /* type_name  */
  YYSYMBOL_inclusive_or_expression = 117,  /* inclusive_or_expression  */
  YYSYMBOL_argument_expression_list = 118, /* argument_expression_list  */
  YYSYMBOL_specifier_qualifier_list = 119, /* specifier_qualifier_list  */
  YYSYMBOL_exclusive_or_expression = 120,  /* exclusive_or_expression  */
  YYSYMBOL_and_expression = 121,           /* and_expression  */
  YYSYMBOL_equality_expression = 122,      /* equality_expression  */
  YYSYMBOL_relational_expression = 123,    /* relational_expression  */
  YYSYMBOL_shift_expression = 124,         /* shift_expression  */
  YYSYMBOL_additive_expression = 125,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 126, /* multiplicative_expression  */
  YYSYMBOL_enumerator = 127,               /* enumerator  */
  YYSYMBOL_enumerator_list = 128,          /* enumerator_list  */
  YYSYMBOL_enum_specifier = 129,           /* enum_specifier  */
  YYSYMBOL_parameter_declaration = 130     /* parameter_declaration  */
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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   712

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  146
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  267

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   338


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    64,    64,    68,    69,    73,    74,    78,    79,    83,
      84,    88,    92,    96,    97,   101,   102,   103,   104,   108,
     109,   113,   114,   115,   116,   117,   118,   119,   123,   124,
     125,   126,   127,   128,   129,   133,   134,   138,   139,   143,
     147,   148,   152,   153,   154,   155,   156,   157,   167,   168,
     172,   173,   177,   178,   179,   183,   184,   188,   189,   190,
     194,   195,   196,   197,   201,   202,   203,   204,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     223,   224,   228,   229,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   246,   247,   251,   252,   253,   254,
     255,   256,   257,   258,   262,   263,   264,   265,   266,   270,
     274,   275,   279,   280,   284,   285,   289,   290,   294,   295,
     300,   301,   302,   306,   307,   308,   309,   310,   314,   315,
     316,   320,   321,   322,   326,   327,   328,   329,   335,   336,
     340,   341,   345,   346,   347,   351,   352
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
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "INT_CONSTANT", "FLOAT_CONSTANT", "CHAR_CONSTANT", "STRING_LITERAL",
  "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP",
  "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME", "FULLSTOP", "AND",
  "TILDE", "EXCLAM", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER",
  "QMARK", "CHAR", "INT", "UNSIGNED", "FLOAT", "DOUBLE", "VOID", "STRUCT",
  "UNION", "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "ELSE", "SWITCH",
  "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "IF", "EQ",
  "SEMIC", "ADD", "SUB", "MUL", "DIV", "MOD", "LESSTHAN", "GREATERTHAN",
  "LBRACKET", "RBRACKET", "LCURLYBRACE", "RCURLYBRACE", "LTEQ", "GTEQ",
  "EXCLOR", "INCLOR", "COMMA", "COLON", "LSQUAREBRACKET", "RSQUAREBRACKET",
  "$accept", "ROOT", "translation_unit", "external_declaration",
  "function_definition", "declaration", "declaration_specifiers",
  "declarator", "declaration_list", "block", "init_declarator_list",
  "type_specifier", "direct_declarator", "statement_list",
  "init_declarator", "constant_expression", "identifier_list", "statement",
  "conditional_expression", "parameter_list", "labeled_statement",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "assignment_expression", "logical_or_expression",
  "expression", "unary_expression", "logical_and_expression",
  "postfix_expression", "primary_expression", "type_name",
  "inclusive_or_expression", "argument_expression_list",
  "specifier_qualifier_list", "exclusive_or_expression", "and_expression",
  "equality_expression", "relational_expression", "shift_expression",
  "additive_expression", "multiplicative_expression", "enumerator",
  "enumerator_list", "enum_specifier", "parameter_declaration", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-114)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     179,  -114,  -114,  -114,  -114,  -114,  -114,  -114,    16,    20,
      47,   179,  -114,  -114,  -114,    -8,     0,     1,  -114,    -4,
      93,    53,  -114,  -114,   204,  -114,  -114,    23,     4,  -114,
     108,    29,    93,    99,  -114,   -32,  -114,    77,  -114,  -114,
    -114,   592,   605,   605,   605,   605,   605,   605,   110,    92,
     141,   458,   159,   116,   168,   366,   163,  -114,   605,   605,
     605,  -114,  -114,   277,  -114,     0,   350,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,  -114,     6,     5,    30,   221,    -5,
    -114,   161,   164,   209,   106,    43,   132,    95,    35,   605,
    -114,  -114,    20,  -114,  -114,    20,  -114,   -38,    18,  -114,
    -114,  -114,   169,  -114,  -114,    25,   605,  -114,    93,   458,
     539,  -114,  -114,  -114,  -114,  -114,  -114,   173,   458,   605,
     605,   189,   557,  -114,  -114,  -114,     7,   605,  -114,  -114,
      44,  -114,  -114,   385,   194,  -114,  -114,   605,   605,  -114,
     605,   605,   605,   605,   605,   605,   605,   605,   605,   605,
     605,   605,   605,   259,  -114,  -114,   264,   468,   605,   605,
     605,   605,   605,   605,   605,   605,   605,   605,   605,   605,
     605,   605,   605,   605,   605,  -114,  -114,  -114,  -114,   268,
    -114,   143,  -114,  -114,  -114,  -114,  -114,   143,   199,  -114,
     458,  -114,    45,    75,   201,   557,  -114,    83,  -114,  -114,
     221,    98,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,   161,  -114,  -114,  -114,  -114,   117,
      -2,   164,   209,   106,    43,    43,   132,   132,   132,   132,
      95,    95,    35,    35,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,   458,   458,   605,   640,   458,   605,  -114,   605,
    -114,  -114,  -114,   120,   458,   121,   224,  -114,  -114,   210,
    -114,   -35,   458,   458,  -114,  -114,  -114
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    28,    22,    23,    26,    24,    25,    21,     0,     0,
       0,     2,     3,     5,     6,     0,     0,    12,    27,   144,
       0,     0,     1,     4,     0,     8,     9,    37,     0,    19,
       0,     0,     0,   138,   140,     0,    29,   104,   105,   106,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,     0,     0,
       0,    15,    13,     0,    43,     0,     0,    35,    68,    42,
      44,    45,    46,    47,    82,    48,     0,   134,    80,    84,
      96,    94,   110,   116,   118,   120,   123,   128,   131,     0,
       7,    10,     0,    40,    32,   146,    11,     0,     0,    50,
     104,    34,     0,    39,   134,     0,     0,   142,     0,     0,
       0,    92,    85,    86,    87,    90,    91,     0,     0,     0,
       0,     0,     0,    64,    65,    66,     0,     0,    88,    89,
       0,    17,    14,     0,    37,    16,    36,     0,     0,    56,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   102,   103,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,    20,   145,    31,     0,
      30,     0,    33,   143,   139,   141,    52,   115,     0,   109,
       0,    54,     0,     0,     0,     0,    67,     0,   108,    18,
      81,     0,    83,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    69,    95,   101,   100,    98,   112,     0,
       0,   111,   117,   119,   121,   122,   124,   125,   126,   127,
     129,   130,   132,   133,   135,   136,   137,    41,    51,   114,
      93,    53,     0,     0,     0,     0,     0,     0,    99,     0,
      97,    59,    60,     0,     0,     0,    58,    49,   113,     0,
      62,     0,     0,     0,    61,    63,    57
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -114,  -114,  -114,   272,  -114,    -3,  -114,    15,  -114,     3,
    -114,   -22,  -114,   223,   197,   -27,  -114,   -44,   -30,  -114,
    -114,  -113,  -114,  -114,  -114,    26,  -114,   -11,   -31,   153,
    -114,  -114,  -114,   139,  -114,   105,   134,   135,   133,    33,
      39,    58,    59,   188,   265,  -114,   118
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    10,    11,    12,    13,    14,    95,    15,    63,    64,
      28,    16,    17,    66,    29,   102,    97,    67,    68,    98,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,   188,    81,   219,   189,    82,    83,    84,    85,
      86,    87,    88,    34,    35,    18,    99
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     104,   103,    65,     1,   153,   154,   155,   121,    96,   195,
     111,   112,   113,   114,   115,   116,   104,   103,    25,    19,
     117,    62,   136,     1,    21,   137,   156,   128,   129,   139,
      90,    27,   100,    38,    39,   178,    40,    41,   198,    42,
      43,    65,   179,   107,   126,   140,   138,    22,   108,   130,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     132,    44,    45,    46,    26,   186,    24,   157,    91,   139,
      32,   196,     9,    30,   191,   104,   103,   158,   140,   184,
     134,   250,   245,    31,    92,   140,    89,   140,   187,   136,
      20,   180,     9,   151,    58,    59,    33,    24,   181,   130,
     183,    60,   172,   173,   174,   108,   104,   134,   192,   193,
     177,    93,   101,   164,   165,   175,   197,   198,   242,   166,
     167,   104,   162,   163,   140,   140,    36,   201,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   234,   235,   236,   168,   169,   241,   220,   243,     2,
       3,     4,     5,     6,     7,   140,   246,     8,   109,    96,
     170,   171,   106,   140,   119,   187,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   140,   247,
     123,    94,     1,   218,     2,     3,     4,     5,     6,     7,
     248,   118,     8,   259,   262,   224,   225,   249,   251,   252,
     140,   140,   256,   226,   227,   228,   229,    37,    38,    39,
     260,    40,    41,   120,    42,    43,   104,   257,   265,   266,
       2,     3,     4,     5,     6,     7,   230,   231,     8,   232,
     233,   122,   124,   253,   255,   127,    44,    45,    46,   152,
     159,   161,   160,   261,   194,     2,     3,     4,     5,     6,
       7,     9,   182,     8,   190,    47,    48,    89,    49,    50,
      51,    52,   215,    53,    54,    55,    56,   216,    57,    58,
      59,   237,   240,   244,   264,   258,    60,   263,    24,    61,
      37,    38,    39,    23,    40,    41,   133,    42,    43,   176,
     200,   214,   239,   221,   223,   222,   185,   105,     0,   238,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    44,
      45,    46,     0,     0,     0,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     0,     0,     8,     0,    47,    48,
       0,    49,    50,    51,    52,     0,    53,    54,    55,    56,
       0,    57,    58,    59,     0,     0,     0,     0,     0,    60,
       0,    24,   131,    37,    38,    39,     0,    40,    41,     0,
      42,    43,     0,     0,     0,     0,     0,     0,     0,   100,
      38,    39,     0,    40,    41,     0,    42,    43,     0,     0,
       0,     0,    44,    45,    46,     0,     0,     0,    37,    38,
      39,     0,    40,    41,     0,    42,    43,     0,    44,    45,
      46,    47,    48,     0,    49,    50,    51,    52,     0,    53,
      54,    55,    56,     0,    57,    58,    59,    44,    45,    46,
       0,     0,    60,     0,    24,   135,     0,     0,     0,     0,
     125,    58,    59,     0,     0,     0,    47,    48,    60,    49,
      50,    51,    52,     0,    53,    54,    55,    56,     0,    57,
      58,    59,     0,     0,     0,     0,     0,    60,     0,    24,
     199,    37,    38,    39,     0,    40,    41,     0,    42,    43,
       0,   100,    38,    39,     0,    40,    41,     0,    42,    43,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      44,    45,    46,     0,     0,     0,     0,     0,     0,     0,
      44,    45,    46,     0,     0,     0,     0,     0,     0,    47,
      48,     0,    49,    50,    51,    52,     0,    53,    54,    55,
      56,     0,    57,    58,    59,     0,     0,     0,     0,     0,
      60,     0,    24,    58,    59,     0,     0,     0,     0,     0,
      60,   217,   100,    38,    39,     0,    40,    41,     0,    42,
      43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,    38,    39,     0,    40,    41,     0,    42,    43,     0,
       0,    44,    45,    46,     0,     0,     0,     0,     0,     0,
       2,     3,     4,     5,     6,     7,     0,     0,     8,    44,
      45,    46,     0,     0,     0,   100,    38,    39,     0,    40,
      41,     0,    42,    43,    58,    59,     0,     0,   100,    38,
      39,    60,    40,    41,     0,    42,    43,     0,     0,     0,
       0,    57,    58,    59,    44,    45,    46,     0,     0,    60,
       0,     0,     0,     0,     0,     0,     0,    44,    45,    46,
       0,     0,     0,   100,    38,    39,     0,    40,    41,     0,
      42,    43,     0,     0,     0,     0,     0,    58,    59,     0,
       0,     0,     0,     0,   110,     0,     0,     0,     0,     0,
      58,    59,    44,    45,    46,     0,     0,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    58,    59,     0,     0,     0,
       0,     0,   254
};

static const yytype_int16 yycheck[] =
{
      31,    31,    24,     3,     9,    10,    11,    51,    30,   122,
      41,    42,    43,    44,    45,    46,    47,    47,    15,     3,
      47,    24,    66,     3,     9,    19,    31,    58,    59,    64,
      27,    16,     3,     4,     5,    73,     7,     8,    73,    10,
      11,    63,    80,    75,    55,    80,    40,     0,    80,    60,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      63,    32,    33,    34,    64,   109,    74,    72,    64,    64,
      74,    64,    72,    72,   118,   106,   106,    82,    80,   106,
      65,    83,   195,    82,    80,    80,    63,    80,   110,   133,
      74,    73,    72,    63,    65,    66,     3,    74,    80,   110,
      75,    72,    67,    68,    69,    80,   137,    92,   119,   120,
      95,     3,    83,    70,    71,    89,   127,    73,    73,    76,
      77,   152,    16,    17,    80,    80,    73,   138,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,    12,    13,   190,   158,    73,    41,
      42,    43,    44,    45,    46,    80,    73,    49,    81,   181,
      65,    66,    63,    80,    72,   187,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,    80,    81,
      64,    73,     3,   157,    41,    42,    43,    44,    45,    46,
      73,    81,    49,    73,    73,   162,   163,    80,   242,   243,
      80,    80,   246,   164,   165,   166,   167,     3,     4,     5,
     254,     7,     8,    72,    10,    11,   247,   247,   262,   263,
      41,    42,    43,    44,    45,    46,   168,   169,    49,   170,
     171,    72,    64,   244,   245,    72,    32,    33,    34,    18,
      79,    32,    78,   254,    55,    41,    42,    43,    44,    45,
      46,    72,    83,    49,    81,    51,    52,    63,    54,    55,
      56,    57,     3,    59,    60,    61,    62,     3,    64,    65,
      66,     3,    73,    72,    64,   249,    72,    53,    74,    75,
       3,     4,     5,    11,     7,     8,    63,    10,    11,    92,
     137,   152,   187,   159,   161,   160,   108,    32,    -1,   181,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    45,    46,    -1,    -1,    49,    -1,    51,    52,
      -1,    54,    55,    56,    57,    -1,    59,    60,    61,    62,
      -1,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    75,     3,     4,     5,    -1,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    32,    33,    34,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,     8,    -1,    10,    11,    -1,    32,    33,
      34,    51,    52,    -1,    54,    55,    56,    57,    -1,    59,
      60,    61,    62,    -1,    64,    65,    66,    32,    33,    34,
      -1,    -1,    72,    -1,    74,    75,    -1,    -1,    -1,    -1,
      64,    65,    66,    -1,    -1,    -1,    51,    52,    72,    54,
      55,    56,    57,    -1,    59,    60,    61,    62,    -1,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      75,     3,     4,     5,    -1,     7,     8,    -1,    10,    11,
      -1,     3,     4,     5,    -1,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,    54,    55,    56,    57,    -1,    59,    60,    61,
      62,    -1,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    65,    66,    -1,    -1,    -1,    -1,    -1,
      72,    73,     3,     4,     5,    -1,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,     8,    -1,    10,    11,    -1,
      -1,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    45,    46,    -1,    -1,    49,    32,
      33,    34,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
       8,    -1,    10,    11,    65,    66,    -1,    -1,     3,     4,
       5,    72,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    64,    65,    66,    32,    33,    34,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      65,    66,    32,    33,    34,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    72
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    41,    42,    43,    44,    45,    46,    49,    72,
      85,    86,    87,    88,    89,    91,    95,    96,   129,     3,
      74,    91,     0,    87,    74,    93,    64,    91,    94,    98,
      72,    82,    74,     3,   127,   128,    73,     3,     4,     5,
       7,     8,    10,    11,    32,    33,    34,    51,    52,    54,
      55,    56,    57,    59,    60,    61,    62,    64,    65,    66,
      72,    75,    89,    92,    93,    95,    97,   101,   102,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   117,   120,   121,   122,   123,   124,   125,   126,    63,
      93,    64,    80,     3,    73,    90,    95,   100,   103,   130,
       3,    83,    99,   102,   112,   128,    63,    75,    80,    81,
      72,   112,   112,   112,   112,   112,   112,    99,    81,    72,
      72,   101,    72,    64,    64,    64,   111,    72,   112,   112,
     111,    75,    89,    97,    91,    75,   101,    19,    40,    64,
      80,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    63,    18,     9,    10,    11,    31,    72,    82,    79,
      78,    32,    16,    17,    70,    71,    76,    77,    12,    13,
      65,    66,    67,    68,    69,   109,    98,    91,    73,    80,
      73,    80,    83,    75,    99,   127,   101,    95,   116,   119,
      81,   101,   111,   111,    55,   105,    64,   111,    73,    75,
     113,   111,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   117,     3,     3,    73,   109,   118,
     111,   120,   121,   122,   123,   123,   124,   124,   124,   124,
     125,   125,   126,   126,   112,   112,   112,     3,   130,   119,
      73,   101,    73,    73,    72,   105,    73,    81,    73,    80,
      83,   101,   101,   111,    72,   111,   101,   102,   109,    73,
     101,   111,    73,    53,    64,   101,   101
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    86,    86,    87,    87,    88,    88,    89,
      89,    90,    91,    92,    92,    93,    93,    93,    93,    94,
      94,    95,    95,    95,    95,    95,    95,    95,    96,    96,
      96,    96,    96,    96,    96,    97,    97,    98,    98,    99,
     100,   100,   101,   101,   101,   101,   101,   101,   102,   102,
     103,   103,   104,   104,   104,   105,   105,   106,   106,   106,
     107,   107,   107,   107,   108,   108,   108,   108,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     110,   110,   111,   111,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   113,   113,   114,   114,   114,   114,
     114,   114,   114,   114,   115,   115,   115,   115,   115,   116,
     117,   117,   118,   118,   119,   119,   120,   120,   121,   121,
     122,   122,   122,   123,   123,   123,   123,   123,   124,   124,
     124,   125,   125,   125,   126,   126,   126,   126,   127,   127,
     128,   128,   129,   129,   129,   130,   130
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     2,     2,
       3,     1,     1,     1,     2,     2,     3,     3,     4,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     4,     3,     4,     3,     1,     2,     1,     3,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     5,
       1,     3,     3,     4,     3,     1,     2,     7,     5,     5,
       5,     7,     6,     7,     2,     2,     2,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     3,     1,     3,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     4,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     1,     1,     1,     3,     1,
       1,     3,     1,     3,     2,     1,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     3,
       1,     3,     4,     5,     2,     2,     1
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
  case 2: /* ROOT: translation_unit  */
#line 64 "src/simpleparser.y"
                       { g_root = (yyvsp[0].nodeptr); }
#line 1476 "src/simpleparser.tab.cpp"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 68 "src/simpleparser.y"
                               {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 1482 "src/simpleparser.tab.cpp"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 69 "src/simpleparser.y"
                                                {(yyval.nodeptr) = new translationUnitListNode((yyvsp[-1].nodeptr), (yyvsp[0].nodeptr)); }
#line 1488 "src/simpleparser.tab.cpp"
    break;

  case 5: /* external_declaration: function_definition  */
#line 73 "src/simpleparser.y"
                              {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 1494 "src/simpleparser.tab.cpp"
    break;

  case 6: /* external_declaration: declaration  */
#line 74 "src/simpleparser.y"
                      {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 1500 "src/simpleparser.tab.cpp"
    break;

  case 7: /* function_definition: type_specifier declarator block  */
#line 78 "src/simpleparser.y"
                                          {(yyval.nodeptr) = new funcNode((yyvsp[-1].nodeptr), (yyvsp[0].nodeptr));}
#line 1506 "src/simpleparser.tab.cpp"
    break;

  case 8: /* function_definition: declarator block  */
#line 79 "src/simpleparser.y"
                           {(yyval.nodeptr) = new funcNode((yyvsp[-1].nodeptr), (yyvsp[0].nodeptr));}
#line 1512 "src/simpleparser.tab.cpp"
    break;

  case 9: /* declaration: type_specifier SEMIC  */
#line 83 "src/simpleparser.y"
                               {(yyval.nodeptr) = (yyvsp[-1].nodeptr);}
#line 1518 "src/simpleparser.tab.cpp"
    break;

  case 10: /* declaration: type_specifier init_declarator_list SEMIC  */
#line 84 "src/simpleparser.y"
                                                    {(yyval.nodeptr) = new declarationNode((yyvsp[-2].nodeptr), (yyvsp[-1].nodeptr));}
#line 1524 "src/simpleparser.tab.cpp"
    break;

  case 11: /* declaration_specifiers: type_specifier  */
#line 88 "src/simpleparser.y"
                         {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 1530 "src/simpleparser.tab.cpp"
    break;

  case 12: /* declarator: direct_declarator  */
#line 92 "src/simpleparser.y"
                                {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 1536 "src/simpleparser.tab.cpp"
    break;

  case 13: /* declaration_list: declaration  */
#line 96 "src/simpleparser.y"
                      {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 1542 "src/simpleparser.tab.cpp"
    break;

  case 14: /* declaration_list: declaration_list declaration  */
#line 97 "src/simpleparser.y"
                                       {(yyval.nodeptr) = new declarationListNode((yyvsp[-1].nodeptr),(yyvsp[0].nodeptr));}
#line 1548 "src/simpleparser.tab.cpp"
    break;

  case 15: /* block: LCURLYBRACE RCURLYBRACE  */
#line 101 "src/simpleparser.y"
                                  {(yyval.nodeptr) = new block1Node();}
#line 1554 "src/simpleparser.tab.cpp"
    break;

  case 16: /* block: LCURLYBRACE statement_list RCURLYBRACE  */
#line 102 "src/simpleparser.y"
                                                 {(yyval.nodeptr) = new block2Node((yyvsp[-1].nodeptr));}
#line 1560 "src/simpleparser.tab.cpp"
    break;

  case 17: /* block: LCURLYBRACE declaration_list RCURLYBRACE  */
#line 103 "src/simpleparser.y"
                                                   {(yyval.nodeptr) = new block3Node((yyvsp[-1].nodeptr));}
#line 1566 "src/simpleparser.tab.cpp"
    break;

  case 18: /* block: LCURLYBRACE declaration_list statement_list RCURLYBRACE  */
#line 104 "src/simpleparser.y"
                                                                  {(yyval.nodeptr) = new block4Node((yyvsp[-2].nodeptr), (yyvsp[-1].nodeptr));}
#line 1572 "src/simpleparser.tab.cpp"
    break;

  case 19: /* init_declarator_list: init_declarator  */
#line 108 "src/simpleparser.y"
                          {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 1578 "src/simpleparser.tab.cpp"
    break;

  case 20: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 109 "src/simpleparser.y"
                                                     {(yyval.nodeptr) = new initDeclaratorListNode((yyvsp[-2].nodeptr),(yyvsp[0].nodeptr)); }
#line 1584 "src/simpleparser.tab.cpp"
    break;

  case 21: /* type_specifier: VOID  */
#line 113 "src/simpleparser.y"
               {(yyval.nodeptr) = new voidNode();}
#line 1590 "src/simpleparser.tab.cpp"
    break;

  case 22: /* type_specifier: CHAR  */
#line 114 "src/simpleparser.y"
                {(yyval.nodeptr) = new charNode();}
#line 1596 "src/simpleparser.tab.cpp"
    break;

  case 23: /* type_specifier: INT  */
#line 115 "src/simpleparser.y"
              {(yyval.nodeptr) = new intkeywordNode();}
#line 1602 "src/simpleparser.tab.cpp"
    break;

  case 24: /* type_specifier: FLOAT  */
#line 116 "src/simpleparser.y"
                {(yyval.nodeptr) = new floatkeywordNode();}
#line 1608 "src/simpleparser.tab.cpp"
    break;

  case 25: /* type_specifier: DOUBLE  */
#line 117 "src/simpleparser.y"
                 {(yyval.nodeptr) = new doubleNode();}
#line 1614 "src/simpleparser.tab.cpp"
    break;

  case 26: /* type_specifier: UNSIGNED  */
#line 118 "src/simpleparser.y"
                   {(yyval.nodeptr) = new unsignedNode();}
#line 1620 "src/simpleparser.tab.cpp"
    break;

  case 28: /* direct_declarator: IDENTIFIER  */
#line 123 "src/simpleparser.y"
                     {(yyval.nodeptr) = new identNode(*(yyvsp[0].string)); }
#line 1626 "src/simpleparser.tab.cpp"
    break;

  case 29: /* direct_declarator: LBRACKET declarator RBRACKET  */
#line 124 "src/simpleparser.y"
                                       {(yyval.nodeptr) = (yyvsp[-1].nodeptr);}
#line 1632 "src/simpleparser.tab.cpp"
    break;

  case 30: /* direct_declarator: direct_declarator LBRACKET parameter_list RBRACKET  */
#line 125 "src/simpleparser.y"
                                                             {(yyval.nodeptr) = new funcnamewithParams((yyvsp[-3].nodeptr),(yyvsp[-1].nodeptr));}
#line 1638 "src/simpleparser.tab.cpp"
    break;

  case 31: /* direct_declarator: direct_declarator LBRACKET identifier_list RBRACKET  */
#line 126 "src/simpleparser.y"
                                                              {(yyval.nodeptr) = new funcnamewithParams((yyvsp[-3].nodeptr),(yyvsp[-1].nodeptr));}
#line 1644 "src/simpleparser.tab.cpp"
    break;

  case 32: /* direct_declarator: direct_declarator LBRACKET RBRACKET  */
#line 127 "src/simpleparser.y"
                                                {(yyval.nodeptr) = (yyvsp[-2].nodeptr);}
#line 1650 "src/simpleparser.tab.cpp"
    break;

  case 33: /* direct_declarator: direct_declarator LSQUAREBRACKET constant_expression RSQUAREBRACKET  */
#line 128 "src/simpleparser.y"
                                                                              {(yyval.nodeptr) = new arraySizeDeclarNode((yyvsp[-3].nodeptr), (yyvsp[-1].nodeptr));}
#line 1656 "src/simpleparser.tab.cpp"
    break;

  case 34: /* direct_declarator: direct_declarator LSQUAREBRACKET RSQUAREBRACKET  */
#line 129 "src/simpleparser.y"
                                                          { (yyval.nodeptr) = new arrayDeclarNode((yyvsp[-2].nodeptr));}
#line 1662 "src/simpleparser.tab.cpp"
    break;

  case 35: /* statement_list: statement  */
#line 133 "src/simpleparser.y"
                    {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 1668 "src/simpleparser.tab.cpp"
    break;

  case 36: /* statement_list: statement_list statement  */
#line 134 "src/simpleparser.y"
                                   {(yyval.nodeptr) = new statementListNode((yyvsp[-1].nodeptr), (yyvsp[0].nodeptr));}
#line 1674 "src/simpleparser.tab.cpp"
    break;

  case 37: /* init_declarator: declarator  */
#line 138 "src/simpleparser.y"
                     {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 1680 "src/simpleparser.tab.cpp"
    break;

  case 38: /* init_declarator: declarator EQ assignment_expression  */
#line 139 "src/simpleparser.y"
                                              {(yyval.nodeptr) = new initializedDeclaratorNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr)); }
#line 1686 "src/simpleparser.tab.cpp"
    break;

  case 39: /* constant_expression: conditional_expression  */
#line 143 "src/simpleparser.y"
                                 {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 1692 "src/simpleparser.tab.cpp"
    break;

  case 40: /* identifier_list: IDENTIFIER  */
#line 147 "src/simpleparser.y"
                     {(yyval.nodeptr) = new identNode(*(yyvsp[0].string));}
#line 1698 "src/simpleparser.tab.cpp"
    break;

  case 41: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 148 "src/simpleparser.y"
                                           {(yyval.nodeptr) = new identifierListNode((yyvsp[-2].nodeptr), *(yyvsp[0].string));}
#line 1704 "src/simpleparser.tab.cpp"
    break;

  case 42: /* statement: labeled_statement  */
#line 152 "src/simpleparser.y"
                                {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 1710 "src/simpleparser.tab.cpp"
    break;

  case 43: /* statement: block  */
#line 153 "src/simpleparser.y"
                {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 1716 "src/simpleparser.tab.cpp"
    break;

  case 44: /* statement: expression_statement  */
#line 154 "src/simpleparser.y"
                               {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 1722 "src/simpleparser.tab.cpp"
    break;

  case 45: /* statement: selection_statement  */
#line 155 "src/simpleparser.y"
                              {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 1728 "src/simpleparser.tab.cpp"
    break;

  case 46: /* statement: iteration_statement  */
#line 156 "src/simpleparser.y"
                              {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 1734 "src/simpleparser.tab.cpp"
    break;

  case 47: /* statement: jump_statement  */
#line 157 "src/simpleparser.y"
                         {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 1740 "src/simpleparser.tab.cpp"
    break;

  case 48: /* conditional_expression: logical_or_expression  */
#line 167 "src/simpleparser.y"
                                {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 1746 "src/simpleparser.tab.cpp"
    break;

  case 49: /* conditional_expression: logical_or_expression QMARK expression COLON conditional_expression  */
#line 168 "src/simpleparser.y"
                                                                              {}
#line 1752 "src/simpleparser.tab.cpp"
    break;

  case 50: /* parameter_list: parameter_declaration  */
#line 172 "src/simpleparser.y"
                                {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 1758 "src/simpleparser.tab.cpp"
    break;

  case 51: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 173 "src/simpleparser.y"
                                                     {(yyval.nodeptr) = new parameterListNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr));}
#line 1764 "src/simpleparser.tab.cpp"
    break;

  case 52: /* labeled_statement: IDENTIFIER COLON statement  */
#line 177 "src/simpleparser.y"
                                     {(yyval.nodeptr) = new case1Node(*(yyvsp[-2].string), (yyvsp[0].nodeptr));}
#line 1770 "src/simpleparser.tab.cpp"
    break;

  case 53: /* labeled_statement: CASE constant_expression COLON statement  */
#line 178 "src/simpleparser.y"
                                                   {(yyval.nodeptr) = new case2Node((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr));}
#line 1776 "src/simpleparser.tab.cpp"
    break;

  case 54: /* labeled_statement: DEFAULT COLON statement  */
#line 179 "src/simpleparser.y"
                                  {(yyval.nodeptr) = new defaultNode((yyvsp[0].nodeptr));}
#line 1782 "src/simpleparser.tab.cpp"
    break;

  case 55: /* expression_statement: SEMIC  */
#line 183 "src/simpleparser.y"
                {}
#line 1788 "src/simpleparser.tab.cpp"
    break;

  case 56: /* expression_statement: expression SEMIC  */
#line 184 "src/simpleparser.y"
                           {(yyval.nodeptr) = (yyvsp[-1].nodeptr);}
#line 1794 "src/simpleparser.tab.cpp"
    break;

  case 57: /* selection_statement: IF LBRACKET expression RBRACKET statement ELSE statement  */
#line 188 "src/simpleparser.y"
                                                                   {(yyval.nodeptr) = new ifElseNode((yyvsp[-4].nodeptr), (yyvsp[-2].nodeptr), (yyvsp[0].nodeptr));}
#line 1800 "src/simpleparser.tab.cpp"
    break;

  case 58: /* selection_statement: IF LBRACKET expression RBRACKET statement  */
#line 189 "src/simpleparser.y"
                                                    {(yyval.nodeptr) = new ifNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr)); }
#line 1806 "src/simpleparser.tab.cpp"
    break;

  case 59: /* selection_statement: SWITCH LBRACKET expression RBRACKET statement  */
#line 190 "src/simpleparser.y"
                                                        {(yyval.nodeptr) = new switchNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr));}
#line 1812 "src/simpleparser.tab.cpp"
    break;

  case 60: /* iteration_statement: WHILE LBRACKET expression RBRACKET statement  */
#line 194 "src/simpleparser.y"
                                                       {(yyval.nodeptr) = new whileNode((yyvsp[-2].nodeptr),(yyvsp[0].nodeptr));}
#line 1818 "src/simpleparser.tab.cpp"
    break;

  case 61: /* iteration_statement: DO statement WHILE LBRACKET expression RBRACKET SEMIC  */
#line 195 "src/simpleparser.y"
                                                                {}
#line 1824 "src/simpleparser.tab.cpp"
    break;

  case 62: /* iteration_statement: FOR LBRACKET expression_statement expression_statement LBRACKET statement  */
#line 196 "src/simpleparser.y"
                                                                                    {(yyval.nodeptr) = new for1Node((yyvsp[-3].nodeptr), (yyvsp[-2].nodeptr), (yyvsp[0].nodeptr));}
#line 1830 "src/simpleparser.tab.cpp"
    break;

  case 63: /* iteration_statement: FOR LBRACKET expression_statement expression_statement expression RBRACKET statement  */
#line 197 "src/simpleparser.y"
                                                                                               {(yyval.nodeptr) = new for2Node((yyvsp[-4].nodeptr), (yyvsp[-3].nodeptr), (yyvsp[-2].nodeptr), (yyvsp[0].nodeptr));}
#line 1836 "src/simpleparser.tab.cpp"
    break;

  case 64: /* jump_statement: CONTINUE SEMIC  */
#line 201 "src/simpleparser.y"
                         {(yyval.nodeptr) = new continueNode();}
#line 1842 "src/simpleparser.tab.cpp"
    break;

  case 65: /* jump_statement: BREAK SEMIC  */
#line 202 "src/simpleparser.y"
                      {(yyval.nodeptr) = new breakNode();}
#line 1848 "src/simpleparser.tab.cpp"
    break;

  case 66: /* jump_statement: RETURN SEMIC  */
#line 203 "src/simpleparser.y"
                       {}
#line 1854 "src/simpleparser.tab.cpp"
    break;

  case 67: /* jump_statement: RETURN expression SEMIC  */
#line 204 "src/simpleparser.y"
                                  {(yyval.nodeptr) = new returnNode((yyvsp[-1].nodeptr));}
#line 1860 "src/simpleparser.tab.cpp"
    break;

  case 68: /* assignment_expression: conditional_expression  */
#line 208 "src/simpleparser.y"
                                 {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 1866 "src/simpleparser.tab.cpp"
    break;

  case 69: /* assignment_expression: unary_expression EQ assignment_expression  */
#line 209 "src/simpleparser.y"
                                                    {(yyval.nodeptr) = new assignNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr));}
#line 1872 "src/simpleparser.tab.cpp"
    break;

  case 70: /* assignment_expression: unary_expression MUL_ASSIGN assignment_expression  */
#line 210 "src/simpleparser.y"
                                                            {(yyval.nodeptr) = new mulAssignNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr));}
#line 1878 "src/simpleparser.tab.cpp"
    break;

  case 71: /* assignment_expression: unary_expression DIV_ASSIGN assignment_expression  */
#line 211 "src/simpleparser.y"
                                                            {(yyval.nodeptr) = new divAssignNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr));}
#line 1884 "src/simpleparser.tab.cpp"
    break;

  case 72: /* assignment_expression: unary_expression MOD_ASSIGN assignment_expression  */
#line 212 "src/simpleparser.y"
                                                            {(yyval.nodeptr) = new modAssignNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr));}
#line 1890 "src/simpleparser.tab.cpp"
    break;

  case 73: /* assignment_expression: unary_expression ADD_ASSIGN assignment_expression  */
#line 213 "src/simpleparser.y"
                                                            {(yyval.nodeptr) = new addAssignNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr));}
#line 1896 "src/simpleparser.tab.cpp"
    break;

  case 74: /* assignment_expression: unary_expression SUB_ASSIGN assignment_expression  */
#line 214 "src/simpleparser.y"
                                                            {(yyval.nodeptr) = new subAssignNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr));}
#line 1902 "src/simpleparser.tab.cpp"
    break;

  case 75: /* assignment_expression: unary_expression LEFT_ASSIGN assignment_expression  */
#line 215 "src/simpleparser.y"
                                                             {(yyval.nodeptr) = new leftShiftAssignNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr));}
#line 1908 "src/simpleparser.tab.cpp"
    break;

  case 76: /* assignment_expression: unary_expression RIGHT_ASSIGN assignment_expression  */
#line 216 "src/simpleparser.y"
                                                              {(yyval.nodeptr) = new rightShiftAssignNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr));}
#line 1914 "src/simpleparser.tab.cpp"
    break;

  case 77: /* assignment_expression: unary_expression AND_ASSIGN assignment_expression  */
#line 217 "src/simpleparser.y"
                                                            {(yyval.nodeptr) = new andAssignNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr));}
#line 1920 "src/simpleparser.tab.cpp"
    break;

  case 78: /* assignment_expression: unary_expression XOR_ASSIGN assignment_expression  */
#line 218 "src/simpleparser.y"
                                                            {(yyval.nodeptr) = new exclOrAssignNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr));}
#line 1926 "src/simpleparser.tab.cpp"
    break;

  case 79: /* assignment_expression: unary_expression OR_ASSIGN assignment_expression  */
#line 219 "src/simpleparser.y"
                                                           {(yyval.nodeptr) = new orAssignNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr));}
#line 1932 "src/simpleparser.tab.cpp"
    break;

  case 80: /* logical_or_expression: logical_and_expression  */
#line 223 "src/simpleparser.y"
                                 {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 1938 "src/simpleparser.tab.cpp"
    break;

  case 81: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 224 "src/simpleparser.y"
                                                             {(yyval.nodeptr) = new logicalOrNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr)); }
#line 1944 "src/simpleparser.tab.cpp"
    break;

  case 82: /* expression: assignment_expression  */
#line 228 "src/simpleparser.y"
                                {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 1950 "src/simpleparser.tab.cpp"
    break;

  case 83: /* expression: expression COMMA assignment_expression  */
#line 229 "src/simpleparser.y"
                                                 {(yyval.nodeptr) = new expressionListNode((yyvsp[-2].nodeptr),(yyvsp[0].nodeptr));}
#line 1956 "src/simpleparser.tab.cpp"
    break;

  case 84: /* unary_expression: postfix_expression  */
#line 233 "src/simpleparser.y"
                             {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 1962 "src/simpleparser.tab.cpp"
    break;

  case 87: /* unary_expression: AND unary_expression  */
#line 236 "src/simpleparser.y"
                                {(yyval.nodeptr) = new unaryAdrNode((yyvsp[0].nodeptr));}
#line 1968 "src/simpleparser.tab.cpp"
    break;

  case 88: /* unary_expression: ADD unary_expression  */
#line 237 "src/simpleparser.y"
                                {(yyval.nodeptr) = new unaryMinusNode((yyvsp[0].nodeptr));}
#line 1974 "src/simpleparser.tab.cpp"
    break;

  case 89: /* unary_expression: SUB unary_expression  */
#line 238 "src/simpleparser.y"
                                {(yyval.nodeptr) = new unaryPlusNode((yyvsp[0].nodeptr));}
#line 1980 "src/simpleparser.tab.cpp"
    break;

  case 90: /* unary_expression: TILDE unary_expression  */
#line 239 "src/simpleparser.y"
                                        {(yyval.nodeptr) = new unaryBitwiseNotNode((yyvsp[0].nodeptr));}
#line 1986 "src/simpleparser.tab.cpp"
    break;

  case 91: /* unary_expression: EXCLAM unary_expression  */
#line 240 "src/simpleparser.y"
                                        {(yyval.nodeptr) = new unaryNotNode((yyvsp[0].nodeptr));}
#line 1992 "src/simpleparser.tab.cpp"
    break;

  case 92: /* unary_expression: SIZEOF unary_expression  */
#line 241 "src/simpleparser.y"
                                  {}
#line 1998 "src/simpleparser.tab.cpp"
    break;

  case 93: /* unary_expression: SIZEOF LBRACKET type_name RBRACKET  */
#line 242 "src/simpleparser.y"
                                             {}
#line 2004 "src/simpleparser.tab.cpp"
    break;

  case 94: /* logical_and_expression: inclusive_or_expression  */
#line 246 "src/simpleparser.y"
                                  {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 2010 "src/simpleparser.tab.cpp"
    break;

  case 95: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 247 "src/simpleparser.y"
                                                                {(yyval.nodeptr) = new logicalAndNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr)); }
#line 2016 "src/simpleparser.tab.cpp"
    break;

  case 96: /* postfix_expression: primary_expression  */
#line 251 "src/simpleparser.y"
                             {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 2022 "src/simpleparser.tab.cpp"
    break;

  case 97: /* postfix_expression: postfix_expression LSQUAREBRACKET expression RSQUAREBRACKET  */
#line 252 "src/simpleparser.y"
                                                                      {(yyval.nodeptr) = new arrayIndexNode((yyvsp[-3].nodeptr), (yyvsp[-1].nodeptr));}
#line 2028 "src/simpleparser.tab.cpp"
    break;

  case 98: /* postfix_expression: postfix_expression LBRACKET RBRACKET  */
#line 253 "src/simpleparser.y"
                                               {(yyval.nodeptr) = new func1CallNode((yyvsp[-2].nodeptr));}
#line 2034 "src/simpleparser.tab.cpp"
    break;

  case 99: /* postfix_expression: postfix_expression LBRACKET argument_expression_list RBRACKET  */
#line 254 "src/simpleparser.y"
                                                                        {(yyval.nodeptr) = new func2CallNode((yyvsp[-3].nodeptr), (yyvsp[-1].nodeptr));}
#line 2040 "src/simpleparser.tab.cpp"
    break;

  case 102: /* postfix_expression: postfix_expression INC_OP  */
#line 257 "src/simpleparser.y"
                                    {(yyval.nodeptr) = new unaryIncNode((yyvsp[-1].nodeptr));}
#line 2046 "src/simpleparser.tab.cpp"
    break;

  case 103: /* postfix_expression: postfix_expression DEC_OP  */
#line 258 "src/simpleparser.y"
                                        {(yyval.nodeptr) = new unaryDecNode((yyvsp[-1].nodeptr));}
#line 2052 "src/simpleparser.tab.cpp"
    break;

  case 104: /* primary_expression: IDENTIFIER  */
#line 262 "src/simpleparser.y"
                     {(yyval.nodeptr) = new identNode(*(yyvsp[0].string));}
#line 2058 "src/simpleparser.tab.cpp"
    break;

  case 105: /* primary_expression: INT_CONSTANT  */
#line 263 "src/simpleparser.y"
                       {(yyval.nodeptr) = new intNode((yyvsp[0].intNumber));}
#line 2064 "src/simpleparser.tab.cpp"
    break;

  case 106: /* primary_expression: FLOAT_CONSTANT  */
#line 264 "src/simpleparser.y"
                         {(yyval.nodeptr) = new floatNode((yyvsp[0].fpNumber));}
#line 2070 "src/simpleparser.tab.cpp"
    break;

  case 107: /* primary_expression: STRING_LITERAL  */
#line 265 "src/simpleparser.y"
                         {}
#line 2076 "src/simpleparser.tab.cpp"
    break;

  case 108: /* primary_expression: LBRACKET expression RBRACKET  */
#line 266 "src/simpleparser.y"
                                       {(yyval.nodeptr) = (yyvsp[-1].nodeptr);}
#line 2082 "src/simpleparser.tab.cpp"
    break;

  case 109: /* type_name: specifier_qualifier_list  */
#line 270 "src/simpleparser.y"
                                   {}
#line 2088 "src/simpleparser.tab.cpp"
    break;

  case 110: /* inclusive_or_expression: exclusive_or_expression  */
#line 274 "src/simpleparser.y"
                                  {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 2094 "src/simpleparser.tab.cpp"
    break;

  case 111: /* inclusive_or_expression: inclusive_or_expression INCLOR exclusive_or_expression  */
#line 275 "src/simpleparser.y"
                                                                 {(yyval.nodeptr) = new orNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr)); }
#line 2100 "src/simpleparser.tab.cpp"
    break;

  case 112: /* argument_expression_list: assignment_expression  */
#line 279 "src/simpleparser.y"
                                {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 2106 "src/simpleparser.tab.cpp"
    break;

  case 113: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 280 "src/simpleparser.y"
                                                               {(yyval.nodeptr) = new argumentExpressionListNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr));}
#line 2112 "src/simpleparser.tab.cpp"
    break;

  case 114: /* specifier_qualifier_list: type_specifier specifier_qualifier_list  */
#line 284 "src/simpleparser.y"
                                                  {}
#line 2118 "src/simpleparser.tab.cpp"
    break;

  case 115: /* specifier_qualifier_list: type_specifier  */
#line 285 "src/simpleparser.y"
                         {}
#line 2124 "src/simpleparser.tab.cpp"
    break;

  case 116: /* exclusive_or_expression: and_expression  */
#line 289 "src/simpleparser.y"
                         {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 2130 "src/simpleparser.tab.cpp"
    break;

  case 117: /* exclusive_or_expression: exclusive_or_expression EXCLOR and_expression  */
#line 290 "src/simpleparser.y"
                                                        {(yyval.nodeptr) = new exclOrNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr)); }
#line 2136 "src/simpleparser.tab.cpp"
    break;

  case 118: /* and_expression: equality_expression  */
#line 294 "src/simpleparser.y"
                              {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 2142 "src/simpleparser.tab.cpp"
    break;

  case 119: /* and_expression: and_expression AND equality_expression  */
#line 295 "src/simpleparser.y"
                                                 {(yyval.nodeptr) = new andNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr)); }
#line 2148 "src/simpleparser.tab.cpp"
    break;

  case 120: /* equality_expression: relational_expression  */
#line 300 "src/simpleparser.y"
                                {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 2154 "src/simpleparser.tab.cpp"
    break;

  case 121: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 301 "src/simpleparser.y"
                                                          {(yyval.nodeptr) = new equalNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr)); }
#line 2160 "src/simpleparser.tab.cpp"
    break;

  case 122: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 302 "src/simpleparser.y"
                                                          {(yyval.nodeptr) = new notEqualNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr)); }
#line 2166 "src/simpleparser.tab.cpp"
    break;

  case 123: /* relational_expression: shift_expression  */
#line 306 "src/simpleparser.y"
                           {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 2172 "src/simpleparser.tab.cpp"
    break;

  case 124: /* relational_expression: relational_expression LESSTHAN shift_expression  */
#line 307 "src/simpleparser.y"
                                                          {(yyval.nodeptr) = new lessThanNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr)); }
#line 2178 "src/simpleparser.tab.cpp"
    break;

  case 125: /* relational_expression: relational_expression GREATERTHAN shift_expression  */
#line 308 "src/simpleparser.y"
                                                             {(yyval.nodeptr) = new greaterThanNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr)); }
#line 2184 "src/simpleparser.tab.cpp"
    break;

  case 126: /* relational_expression: relational_expression LTEQ shift_expression  */
#line 309 "src/simpleparser.y"
                                                      {(yyval.nodeptr) = new lessThanOrEqualNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr)); }
#line 2190 "src/simpleparser.tab.cpp"
    break;

  case 127: /* relational_expression: relational_expression GTEQ shift_expression  */
#line 310 "src/simpleparser.y"
                                                      {(yyval.nodeptr) = new greaterThanOrEqualNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr)); }
#line 2196 "src/simpleparser.tab.cpp"
    break;

  case 128: /* shift_expression: additive_expression  */
#line 314 "src/simpleparser.y"
                              {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 2202 "src/simpleparser.tab.cpp"
    break;

  case 129: /* shift_expression: shift_expression LEFT_OP additive_expression  */
#line 315 "src/simpleparser.y"
                                                       {(yyval.nodeptr) = new leftShiftNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr)); }
#line 2208 "src/simpleparser.tab.cpp"
    break;

  case 130: /* shift_expression: shift_expression RIGHT_OP additive_expression  */
#line 316 "src/simpleparser.y"
                                                        {(yyval.nodeptr) = new rightShiftNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr)); }
#line 2214 "src/simpleparser.tab.cpp"
    break;

  case 131: /* additive_expression: multiplicative_expression  */
#line 320 "src/simpleparser.y"
                                    {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 2220 "src/simpleparser.tab.cpp"
    break;

  case 132: /* additive_expression: additive_expression ADD multiplicative_expression  */
#line 321 "src/simpleparser.y"
                                                            {(yyval.nodeptr) = new addNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr)); }
#line 2226 "src/simpleparser.tab.cpp"
    break;

  case 133: /* additive_expression: additive_expression SUB multiplicative_expression  */
#line 322 "src/simpleparser.y"
                                                            {(yyval.nodeptr) = new subNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr)); }
#line 2232 "src/simpleparser.tab.cpp"
    break;

  case 134: /* multiplicative_expression: unary_expression  */
#line 326 "src/simpleparser.y"
                           {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 2238 "src/simpleparser.tab.cpp"
    break;

  case 135: /* multiplicative_expression: multiplicative_expression MUL unary_expression  */
#line 327 "src/simpleparser.y"
                                                         {(yyval.nodeptr) = new mulNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr)); }
#line 2244 "src/simpleparser.tab.cpp"
    break;

  case 136: /* multiplicative_expression: multiplicative_expression DIV unary_expression  */
#line 328 "src/simpleparser.y"
                                                         {(yyval.nodeptr) = new divNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr)); }
#line 2250 "src/simpleparser.tab.cpp"
    break;

  case 137: /* multiplicative_expression: multiplicative_expression MOD unary_expression  */
#line 329 "src/simpleparser.y"
                                                         {(yyval.nodeptr) = new modNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr)); }
#line 2256 "src/simpleparser.tab.cpp"
    break;

  case 138: /* enumerator: IDENTIFIER  */
#line 335 "src/simpleparser.y"
                     {(yyval.nodeptr) = new enumDeclar2Node(*(yyvsp[0].string));}
#line 2262 "src/simpleparser.tab.cpp"
    break;

  case 139: /* enumerator: IDENTIFIER EQ constant_expression  */
#line 336 "src/simpleparser.y"
                                            {(yyval.nodeptr) = new enumDeclar1Node(*(yyvsp[-2].string), (yyvsp[0].nodeptr));}
#line 2268 "src/simpleparser.tab.cpp"
    break;

  case 140: /* enumerator_list: enumerator  */
#line 340 "src/simpleparser.y"
                     {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 2274 "src/simpleparser.tab.cpp"
    break;

  case 141: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 341 "src/simpleparser.y"
                                           {(yyval.nodeptr) = new enumeratorListNode((yyvsp[-2].nodeptr), (yyvsp[0].nodeptr));}
#line 2280 "src/simpleparser.tab.cpp"
    break;

  case 142: /* enum_specifier: ENUM LCURLYBRACE enumerator_list RCURLYBRACE  */
#line 345 "src/simpleparser.y"
                                                       {(yyval.nodeptr) = new enumInstant1Node((yyvsp[-1].nodeptr));}
#line 2286 "src/simpleparser.tab.cpp"
    break;

  case 143: /* enum_specifier: ENUM IDENTIFIER LCURLYBRACE enumerator_list RCURLYBRACE  */
#line 346 "src/simpleparser.y"
                                                                  {(yyval.nodeptr) = new enumInstant2Node(*(yyvsp[-3].string), (yyvsp[-1].nodeptr));}
#line 2292 "src/simpleparser.tab.cpp"
    break;

  case 144: /* enum_specifier: ENUM IDENTIFIER  */
#line 347 "src/simpleparser.y"
                          {(yyval.nodeptr) = new enumInstant3Node(*(yyvsp[0].string));}
#line 2298 "src/simpleparser.tab.cpp"
    break;

  case 145: /* parameter_declaration: declaration_specifiers declarator  */
#line 351 "src/simpleparser.y"
                                                {(yyval.nodeptr) = new declarationNode((yyvsp[-1].nodeptr), (yyvsp[0].nodeptr));}
#line 2304 "src/simpleparser.tab.cpp"
    break;

  case 146: /* parameter_declaration: declaration_specifiers  */
#line 352 "src/simpleparser.y"
                                 {(yyval.nodeptr) = (yyvsp[0].nodeptr);}
#line 2310 "src/simpleparser.tab.cpp"
    break;


#line 2314 "src/simpleparser.tab.cpp"

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

#line 360 "src/simpleparser.y"


const astNode *g_root;

const astNode *parseAST()
{
	g_root = 0;
	yyparse();
	return g_root;
}
