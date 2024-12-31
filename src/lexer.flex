%option noyywrap

%{

#include <cstdio>
#include <cstdlib>

#include <string>
#include <iostream>
#include <vector>

extern "C" int fileno(FILE *stream);

#include "simpleparser.tab.hpp"

%}

D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*

%%

"int"			{ fprintf(stderr, "Word : %s\n", yytext);
            yylval.string = new std::string;
            *yylval.string = yytext;
            return INT; }

"float"			{ fprintf(stderr, "Word : %s\n", yytext);
            yylval.string = new std::string;
            *yylval.string = yytext;
            return FLOAT; }

"break"			{ fprintf(stderr, "Word : %s\n", yytext);
            yylval.string = new std::string;
            *yylval.string = yytext;
            return BREAK; }

"case"			{ fprintf(stderr, "Word : %s\n", yytext);
            yylval.string = new std::string;
            *yylval.string = yytext;
            return CASE; }

"char"			{ fprintf(stderr, "Word : %s\n", yytext);
            yylval.string = new std::string;
            *yylval.string = yytext;
            return CHAR; }

"double"			{ fprintf(stderr, "Word : %s\n", yytext);
            yylval.string = new std::string;
            *yylval.string = yytext;
            return DOUBLE; }

"else"			{ fprintf(stderr, "Word : %s\n", yytext);
            yylval.string = new std::string;
            *yylval.string = yytext;
            return ELSE; }

"enum"			{ fprintf(stderr, "Word : %s\n", yytext);
            yylval.string = new std::string;
            *yylval.string = yytext;
            return ENUM; }

"for"			{ fprintf(stderr, "Word : %s\n", yytext);
            yylval.string = new std::string;
            *yylval.string = yytext;
            return FOR; }

"sizeof"			{ fprintf(stderr, "Word : %s\n", yytext);
            yylval.string = new std::string;
            *yylval.string = yytext;
            return SIZEOF; }

"struct"			{ fprintf(stderr, "Word : %s\n", yytext);
            yylval.string = new std::string;
            *yylval.string = yytext;
            return STRUCT; }

"typedef"			{ fprintf(stderr, "Word : %s\n", yytext);
            yylval.string = new std::string;
            *yylval.string = yytext;
            return TYPEDEF; }

"unsigned"			{ fprintf(stderr, "Word : %s\n", yytext);
            yylval.string = new std::string;
            *yylval.string = yytext;
            return UNSIGNED; }

"if"			{ fprintf(stderr, "Word : %s\n", yytext);
            yylval.string = new std::string;
            *yylval.string = yytext;
            return IF; }

"return"	{ fprintf(stderr, "Word : %s\n", yytext);
            yylval.string = new std::string;
            *yylval.string = yytext;
            return RETURN; }

"void"			{ fprintf(stderr, "Word : %s\n", yytext);
            yylval.string = new std::string;
            *yylval.string = yytext;
            return VOID; }

"while"			{ fprintf(stderr, "Word : %s\n", yytext);
            yylval.string = new std::string;
            *yylval.string = yytext;
            return WHILE; }

"union"			{ fprintf(stderr, "Word : %s\n", yytext);
            yylval.string = new std::string;
            *yylval.string = yytext;
            return UNION; }

";"			{
          fprintf(stderr, "Word : %s\n", yytext);
          yylval.string = new std::string;
          *yylval.string = yytext;
          return SEMIC; }

"+"			{
          fprintf(stderr, "Word : %s\n", yytext);
          yylval.string = new std::string;
          *yylval.string = yytext;
          return ADD; }

"-"			{
          fprintf(stderr, "Word : %s\n", yytext);
          yylval.string = new std::string;
          *yylval.string = yytext;
          return SUB; }

"*"			{
          fprintf(stderr, "Word : %s\n", yytext);
          yylval.string = new std::string;
          *yylval.string = yytext;
          return MUL; }

"?"			{
          fprintf(stderr, "Word : %s\n", yytext);
          yylval.string = new std::string;
          *yylval.string = yytext;
          return QMARK; }



"/"			{
          fprintf(stderr, "Word : %s\n", yytext);
          yylval.string = new std::string;
          *yylval.string = yytext;
          return DIV; }

"%"			{
          fprintf(stderr, "Word : %s\n", yytext);
          yylval.string = new std::string;
          *yylval.string = yytext;
          return MOD; }
"<"			{
          fprintf(stderr, "Word : %s\n", yytext);
          yylval.string = new std::string;
          *yylval.string = yytext;
          return LESSTHAN; }

">"			{
          fprintf(stderr, "Word : %s\n", yytext);
          yylval.string = new std::string;
          *yylval.string = yytext;
          return GREATERTHAN; }

[(]		{
          fprintf(stderr, "Word : %s\n", yytext);
          yylval.string = new std::string;
          *yylval.string = yytext;
          return LBRACKET; }

[)]  	  {
          fprintf(stderr, "Word : %s\n", yytext);
          yylval.string = new std::string;
          *yylval.string = yytext;
          return RBRACKET; }

"&"			{
          fprintf(stderr, "Word : %s\n", yytext);
          yylval.string = new std::string;
          *yylval.string = yytext;
          return AND; }

[{]  {
          fprintf(stderr, "Word : %s\n", yytext);
          yylval.string = new std::string;
          *yylval.string = yytext;
          return LCURLYBRACE; }

[}]  {
          fprintf(stderr, "Word : %s\n", yytext);
          yylval.string = new std::string;
          *yylval.string = yytext;
          return RCURLYBRACE; }

"="			{ fprintf(stderr, "Word : %s\n", yytext);
           yylval.string = new std::string;
           *yylval.string = yytext;
           return EQ; }

"<="			{ fprintf(stderr, "Word : %s\n", yytext);
           yylval.string = new std::string;
           *yylval.string = yytext;
           return LTEQ; }

">="			{ fprintf(stderr, "Word : %s\n", yytext);
           yylval.string = new std::string;
           *yylval.string = yytext;
           return GTEQ; }

"=="			{ fprintf(stderr, "Word : %s\n", yytext);
           yylval.string = new std::string;
           *yylval.string = yytext;
           return EQ_OP; }

"!="			{ fprintf(stderr, "Word : %s\n", yytext);
           yylval.string = new std::string;
           *yylval.string = yytext;
           return NE_OP; }

"^"			{ fprintf(stderr, "Word : %s\n", yytext);
           yylval.string = new std::string;
           *yylval.string = yytext;
           return EXCLOR; }

"|"			{ fprintf(stderr, "Word : %s\n", yytext);
           yylval.string = new std::string;
           *yylval.string = yytext;
           return INCLOR; }

"&&"			{ fprintf(stderr, "Word : %s\n", yytext);
           yylval.string = new std::string;
           *yylval.string = yytext;
           return AND_OP; }

"||"			{ fprintf(stderr, "Word : %s\n", yytext);
           yylval.string = new std::string;
           *yylval.string = yytext;
           return OR_OP; }

","			{ fprintf(stderr, "Word : %s\n", yytext);
           yylval.string = new std::string;
           *yylval.string = yytext;
           return COMMA; }

":"			{ fprintf(stderr, "Word : %s\n", yytext);
           yylval.string = new std::string;
           *yylval.string = yytext;
           return COLON; }

"..."			{ fprintf(stderr, "Word : %s\n", yytext);
           yylval.string = new std::string;
           *yylval.string = yytext;
           return ELLIPSIS; }

">>="			{ fprintf(stderr, "Word : %s\n", yytext);
           yylval.string = new std::string;
           *yylval.string = yytext;
           return RIGHT_ASSIGN; }

"<<="			{ fprintf(stderr, "Word : %s\n", yytext);
           yylval.string = new std::string;
           *yylval.string = yytext;
           return LEFT_ASSIGN; }

"=+"			{ fprintf(stderr, "Word : %s\n", yytext);
           yylval.string = new std::string;
           *yylval.string = yytext;
           return ADD_ASSIGN; }

"-+"			{ fprintf(stderr, "Word : %s\n", yytext);
           yylval.string = new std::string;
           *yylval.string = yytext;
           return SUB_ASSIGN; }

"/="			{ fprintf(stderr, "Word : %s\n", yytext);
           yylval.string = new std::string;
           *yylval.string = yytext;
           return DIV_ASSIGN; }

"*="			{ fprintf(stderr, "Word : %s\n", yytext);
           yylval.string = new std::string;
           *yylval.string = yytext;
           return MUL_ASSIGN; }

"%="			{ fprintf(stderr, "Word : %s\n", yytext);
           yylval.string = new std::string;
           *yylval.string = yytext;
           return MOD_ASSIGN; }

"&="			{ fprintf(stderr, "Word : %s\n", yytext);
           yylval.string = new std::string;
           *yylval.string = yytext;
           return AND_ASSIGN; }

"^="			{ fprintf(stderr, "Word : %s\n", yytext);
           yylval.string = new std::string;
           *yylval.string = yytext;
           return XOR_ASSIGN; }

"|="			{ fprintf(stderr, "Word : %s\n", yytext);
           yylval.string = new std::string;
           *yylval.string = yytext;
           return OR_ASSIGN; }

">>"			{ fprintf(stderr, "Word : %s\n", yytext);
           yylval.string = new std::string;
           *yylval.string = yytext;
           return RIGHT_OP; }

"<<"			{ fprintf(stderr, "Word : %s\n", yytext);
           yylval.string = new std::string;
           *yylval.string = yytext;
           return LEFT_OP; }

"++"			{ fprintf(stderr, "Word : %s\n", yytext);
           yylval.string = new std::string;
           *yylval.string = yytext;
           return INC_OP; }

"--"			{ fprintf(stderr, "Word : %s\n", yytext);
           yylval.string = new std::string;
           *yylval.string = yytext;
           return DEC_OP; }

"->"			{ fprintf(stderr, "Word : %s\n", yytext);
           yylval.string = new std::string;
           *yylval.string = yytext;
           return PTR_OP; }

"["  {
          fprintf(stderr, "Word : %s\n", yytext);
          yylval.string = new std::string;
          *yylval.string = yytext;
          return LSQUAREBRACKET; }

"]"  {
          fprintf(stderr, "Word : %s\n", yytext);
          yylval.string = new std::string;
          *yylval.string = yytext;
          return RSQUAREBRACKET; }

"."  {
          fprintf(stderr, "Word : %s\n", yytext);
          yylval.string = new std::string;
          *yylval.string = yytext;
          return FULLSTOP; }

"&"  {
          fprintf(stderr, "Word : %s\n", yytext);
          yylval.string = new std::string;
          *yylval.string = yytext;
          return AND; }

"~"  {
          fprintf(stderr, "Word : %s\n", yytext);
          yylval.string = new std::string;
          *yylval.string = yytext;
          return TILDE; }

"!"  {
          fprintf(stderr, "Word : %s\n", yytext);
          yylval.string = new std::string;
          *yylval.string = yytext;
          return EXCLAM; }

0[xX]{H}+{IS}?			{ fprintf(stderr, "Number : %s/n", yytext), yylval.intNumber = atoi(yytext); return(INT_CONSTANT); }

0{D}+{IS}?				{ fprintf(stderr, "Number : %s/n", yytext), yylval.intNumber = atoi(yytext); return(INT_CONSTANT); }

{D}+{IS}?				{ fprintf(stderr, "Number : %s/n", yytext), yylval.intNumber = atoi(yytext); return(INT_CONSTANT); }

L?'(\\.|[^\\'])+'		{}

{L}({L}|{D})*			{ fprintf(stderr, "Word : %s/n", yytext), yylval.string = new std::string(yytext); return(IDENTIFIER);}

{D}+{E}{FS}?			{ fprintf(stderr, "Number : %s/n", yytext), yylval.intNumber = atof(yytext); return(FLOAT_CONSTANT); }

{D}*"."{D}+({E})?{FS}?	{ fprintf(stderr, "Number : %s/n", yytext), yylval.intNumber = atof(yytext); return(FLOAT_CONSTANT); }

{D}+"."{D}*({E})?{FS}?	{ fprintf(stderr, "Number : %s/n", yytext), yylval.intNumber = atof(yytext); return(FLOAT_CONSTANT); }

[ \t\r\n]+ {;}

. { fprintf(stderr, "invalid token \n"); exit (1); }

%%

/* Error handler. This will get called if none of the rules match. */
void yyerror (char const *s)
{
  fprintf (stderr, "lex error: %s\n", s);
  exit(1);
}
