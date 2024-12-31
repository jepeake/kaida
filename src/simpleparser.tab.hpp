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

#ifndef YY_YY_SRC_SIMPLEPARSER_TAB_HPP_INCLUDED
# define YY_YY_SRC_SIMPLEPARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 5 "src/simpleparser.y"

	#include "ast.hpp"
	#include <cassert>
	using namespace std;
	extern const astNode *g_root;
	int yylex(void);
	void yyerror(const char *);

#line 58 "src/simpleparser.tab.hpp"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    INT_CONSTANT = 259,            /* INT_CONSTANT  */
    FLOAT_CONSTANT = 260,          /* FLOAT_CONSTANT  */
    CHAR_CONSTANT = 261,           /* CHAR_CONSTANT  */
    STRING_LITERAL = 262,          /* STRING_LITERAL  */
    SIZEOF = 263,                  /* SIZEOF  */
    PTR_OP = 264,                  /* PTR_OP  */
    INC_OP = 265,                  /* INC_OP  */
    DEC_OP = 266,                  /* DEC_OP  */
    LEFT_OP = 267,                 /* LEFT_OP  */
    RIGHT_OP = 268,                /* RIGHT_OP  */
    LE_OP = 269,                   /* LE_OP  */
    GE_OP = 270,                   /* GE_OP  */
    EQ_OP = 271,                   /* EQ_OP  */
    NE_OP = 272,                   /* NE_OP  */
    AND_OP = 273,                  /* AND_OP  */
    OR_OP = 274,                   /* OR_OP  */
    MUL_ASSIGN = 275,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 276,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 277,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 278,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 279,              /* SUB_ASSIGN  */
    LEFT_ASSIGN = 280,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 281,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 282,              /* AND_ASSIGN  */
    XOR_ASSIGN = 283,              /* XOR_ASSIGN  */
    OR_ASSIGN = 284,               /* OR_ASSIGN  */
    TYPE_NAME = 285,               /* TYPE_NAME  */
    FULLSTOP = 286,                /* FULLSTOP  */
    AND = 287,                     /* AND  */
    TILDE = 288,                   /* TILDE  */
    EXCLAM = 289,                  /* EXCLAM  */
    TYPEDEF = 290,                 /* TYPEDEF  */
    EXTERN = 291,                  /* EXTERN  */
    STATIC = 292,                  /* STATIC  */
    AUTO = 293,                    /* AUTO  */
    REGISTER = 294,                /* REGISTER  */
    QMARK = 295,                   /* QMARK  */
    CHAR = 296,                    /* CHAR  */
    INT = 297,                     /* INT  */
    UNSIGNED = 298,                /* UNSIGNED  */
    FLOAT = 299,                   /* FLOAT  */
    DOUBLE = 300,                  /* DOUBLE  */
    VOID = 301,                    /* VOID  */
    STRUCT = 302,                  /* STRUCT  */
    UNION = 303,                   /* UNION  */
    ENUM = 304,                    /* ENUM  */
    ELLIPSIS = 305,                /* ELLIPSIS  */
    CASE = 306,                    /* CASE  */
    DEFAULT = 307,                 /* DEFAULT  */
    ELSE = 308,                    /* ELSE  */
    SWITCH = 309,                  /* SWITCH  */
    WHILE = 310,                   /* WHILE  */
    DO = 311,                      /* DO  */
    FOR = 312,                     /* FOR  */
    GOTO = 313,                    /* GOTO  */
    CONTINUE = 314,                /* CONTINUE  */
    BREAK = 315,                   /* BREAK  */
    RETURN = 316,                  /* RETURN  */
    IF = 317,                      /* IF  */
    EQ = 318,                      /* EQ  */
    SEMIC = 319,                   /* SEMIC  */
    ADD = 320,                     /* ADD  */
    SUB = 321,                     /* SUB  */
    MUL = 322,                     /* MUL  */
    DIV = 323,                     /* DIV  */
    MOD = 324,                     /* MOD  */
    LESSTHAN = 325,                /* LESSTHAN  */
    GREATERTHAN = 326,             /* GREATERTHAN  */
    LBRACKET = 327,                /* LBRACKET  */
    RBRACKET = 328,                /* RBRACKET  */
    LCURLYBRACE = 329,             /* LCURLYBRACE  */
    RCURLYBRACE = 330,             /* RCURLYBRACE  */
    LTEQ = 331,                    /* LTEQ  */
    GTEQ = 332,                    /* GTEQ  */
    EXCLOR = 333,                  /* EXCLOR  */
    INCLOR = 334,                  /* INCLOR  */
    COMMA = 335,                   /* COMMA  */
    COLON = 336,                   /* COLON  */
    LSQUAREBRACKET = 337,          /* LSQUAREBRACKET  */
    RSQUAREBRACKET = 338           /* RSQUAREBRACKET  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "src/simpleparser.y"

	const astNode *nodeptr;
	int intNumber;
	double fpNumber;
	std::string *string;

#line 165 "src/simpleparser.tab.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SRC_SIMPLEPARSER_TAB_HPP_INCLUDED  */
