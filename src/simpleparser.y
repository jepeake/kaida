// Reference
// ANSI C Yacc Grammar
// https://www.lysator.liu.se/c/ANSI-C-grammar-y.html

%code requires{
	#include "ast.hpp"
	#include <cassert>
	using namespace std;
	extern const astNode *g_root;
	int yylex(void);
	void yyerror(const char *);
}

%union{
	const astNode *nodeptr;
	int intNumber;
	double fpNumber;
	std::string *string;
}

%token IDENTIFIER INT_CONSTANT FLOAT_CONSTANT CHAR_CONSTANT STRING_LITERAL SIZEOF
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME FULLSTOP AND TILDE EXCLAM

%token TYPEDEF EXTERN STATIC AUTO REGISTER QMARK
%token CHAR INT UNSIGNED FLOAT DOUBLE VOID
%token STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN IF

%token EQ SEMIC ADD SUB MUL DIV MOD LESSTHAN GREATERTHAN LBRACKET RBRACKET LCURLYBRACE RCURLYBRACE LTEQ GTEQ
%token EXCLOR INCLOR COMMA COLON LSQUAREBRACKET RSQUAREBRACKET

%type <nodeptr> primary_expression postfix_expression unary_expression multiplicative_expression additive_expression
%type <nodeptr> shift_expression relational_expression equality_expression and_expression exclusive_or_expression inclusive_or_expression
%type <nodeptr> logical_and_expression logical_or_expression conditional_expression assignment_expression expression constant_expression

%type <nodeptr> declaration declaration_specifiers parameter_declaration  external_declaration

%type <nodeptr> declarator direct_declarator   init_declarator

%type <nodeptr>   type_specifier enum_specifier

%type <nodeptr> statement labeled_statement expression_statement iteration_statement selection_statement jump_statement

%type <nodeptr>   type_name   enumerator initializer translation_unit  function_definition block

%type <nodeptr>  parameter_list statement_list identifier_list specifier_qualifier_list initializer_list
%type<nodeptr> declaration_list argument_expression_list init_declarator_list enumerator_list

%type <intNumber> INT_CONSTANT
%type <fpNumber> FLOAT_CONSTANT

%type <string> IDENTIFIER STRING_LITERAL


%start ROOT

%%

ROOT
    : translation_unit { g_root = $1; }
	;

translation_unit
	: external_declaration {$$ = $1;}
	| translation_unit external_declaration {$$ = new translationUnitListNode($1, $2); }
	;

external_declaration
	: function_definition {$$ = $1;}
	| declaration {$$ = $1;}
	;

function_definition
	: type_specifier declarator block {$$ = new funcNode($2, $3);}
	| declarator block {$$ = new funcNode($1, $2);}
	;

declaration
	: type_specifier SEMIC {$$ = $1;}
	| type_specifier init_declarator_list SEMIC {$$ = new declarationNode($1, $2);}
	;

declaration_specifiers
	: type_specifier {$$ = $1;}
	;

declarator
	: direct_declarator	{$$ = $1;}
	;

declaration_list
	: declaration {$$ = $1;}
	| declaration_list declaration {$$ = new declarationListNode($1,$2);}
	;

block
	: LCURLYBRACE RCURLYBRACE {$$ = new block1Node();}
	| LCURLYBRACE statement_list RCURLYBRACE {$$ = new block2Node($2);}
	| LCURLYBRACE declaration_list RCURLYBRACE {$$ = new block3Node($2);}
	| LCURLYBRACE declaration_list statement_list RCURLYBRACE {$$ = new block4Node($2, $3);}
	;

init_declarator_list
	: init_declarator {$$ = $1;}
	| init_declarator_list COMMA init_declarator {$$ = new initDeclaratorListNode($1,$3); }
	;

type_specifier
	: VOID {$$ = new voidNode();}
	| CHAR	{$$ = new charNode();}
	| INT {$$ = new intkeywordNode();}
	| FLOAT	{$$ = new floatkeywordNode();}
	| DOUBLE {$$ = new doubleNode();}
	| UNSIGNED {$$ = new unsignedNode();}
	| enum_specifier
	;

direct_declarator
	: IDENTIFIER {$$ = new identNode(*$1); }
	| LBRACKET declarator RBRACKET {$$ = $2;}
	| direct_declarator LBRACKET parameter_list RBRACKET {$$ = new funcnamewithParams($1,$3);}
	| direct_declarator LBRACKET identifier_list RBRACKET {$$ = new funcnamewithParams($1,$3);}
	| direct_declarator LBRACKET RBRACKET	{$$ = $1;}
	| direct_declarator LSQUAREBRACKET constant_expression RSQUAREBRACKET {$$ = new arraySizeDeclarNode($1, $3);}
	| direct_declarator LSQUAREBRACKET RSQUAREBRACKET { $$ = new arrayDeclarNode($1);}
	;

statement_list
	: statement {$$ = $1;}
	| statement_list statement {$$ = new statementListNode($1, $2);}
	;

init_declarator
	: declarator {$$ = $1;}
	| declarator EQ assignment_expression {$$ = new initializedDeclaratorNode($1, $3); }
	;

constant_expression
	: conditional_expression {$$ = $1;}
	;

identifier_list
	: IDENTIFIER {$$ = new identNode(*$1);}
	| identifier_list COMMA IDENTIFIER {$$ = new identifierListNode($1, *$3);}
	;

statement
	: labeled_statement	{$$ = $1;}
	| block	{$$ = $1;}
	| expression_statement {$$ = $1;}
	| selection_statement {$$ = $1;}
	| iteration_statement {$$ = $1;}
	| jump_statement {$$ = $1;}
	;

initializer
	: assignment_expression	{$$ = $1;}
	| LCURLYBRACE initializer_list RCURLYBRACE {$$ = new arrayInitializeNode($2);}
	| LCURLYBRACE initializer_list COMMA RCURLYBRACE {$$ = new arrayInitializeNode($2);}
	;

conditional_expression
	: logical_or_expression {$$ = $1;}
	| logical_or_expression QMARK expression COLON conditional_expression {}
	;

parameter_list
	: parameter_declaration	{$$ = $1;}
	| parameter_list COMMA parameter_declaration {$$ = new parameterListNode($1, $3);}
	;

labeled_statement
	: IDENTIFIER COLON statement {$$ = new case1Node(*$1, $3);}
	| CASE constant_expression COLON statement {$$ = new case2Node($2, $4);}
	| DEFAULT COLON statement {$$ = new defaultNode($3);}
	;

expression_statement
	: SEMIC {}
	| expression SEMIC {$$ = $1;}
	;

selection_statement
	: IF LBRACKET expression RBRACKET statement ELSE statement {$$ = new ifElseNode($3, $5, $7);}
	| IF LBRACKET expression RBRACKET statement {$$ = new ifNode($3, $5); }
	| SWITCH LBRACKET expression RBRACKET statement {$$ = new switchNode($3, $5);}
	;

iteration_statement
	: WHILE LBRACKET expression RBRACKET statement {$$ = new whileNode($3,$5);}
	| DO statement WHILE LBRACKET expression RBRACKET SEMIC {}
	| FOR LBRACKET expression_statement expression_statement LBRACKET statement {$$ = new for1Node($3, $4, $6);}
	| FOR LBRACKET expression_statement expression_statement expression RBRACKET statement {$$ = new for2Node($3, $4, $5, $7);}
	;

jump_statement
	: CONTINUE SEMIC {$$ = new continueNode();}
	| BREAK SEMIC {$$ = new breakNode();}
	| RETURN SEMIC {} // need to add?
	| RETURN expression SEMIC {$$ = new returnNode($2);}
	;

assignment_expression
	: conditional_expression {$$ = $1;}
	| unary_expression EQ assignment_expression {$$ = new assignNode($1, $3);}
	| unary_expression MUL_ASSIGN assignment_expression {$$ = new mulAssignNode($1, $3);}
	| unary_expression DIV_ASSIGN assignment_expression {$$ = new divAssignNode($1, $3);}
	| unary_expression MOD_ASSIGN assignment_expression {$$ = new modAssignNode($1, $3);}
	| unary_expression ADD_ASSIGN assignment_expression {$$ = new addAssignNode($1, $3);}
	| unary_expression SUB_ASSIGN assignment_expression {$$ = new subAssignNode($1, $3);}
	| unary_expression LEFT_ASSIGN assignment_expression {$$ = new leftShiftAssignNode($1, $3);}
	| unary_expression RIGHT_ASSIGN assignment_expression {$$ = new rightShiftAssignNode($1, $3);}
	| unary_expression AND_ASSIGN assignment_expression {$$ = new andAssignNode($1, $3);}
	| unary_expression XOR_ASSIGN assignment_expression {$$ = new exclOrAssignNode($1, $3);}
	| unary_expression OR_ASSIGN assignment_expression {$$ = new orAssignNode($1, $3);}
	;

logical_or_expression
	: logical_and_expression {$$ = $1;}
	| logical_or_expression OR_OP logical_and_expression {$$ = new logicalOrNode($1, $3); }
	;

expression
	: assignment_expression {$$ = $1;}
	| expression COMMA assignment_expression {$$ = new expressionListNode($1,$3);}
	;

unary_expression
	: postfix_expression {$$ = $1;}
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| AND unary_expression 	{$$ = new unaryAdrNode($2);} //AND represents '&'
	| ADD unary_expression  {$$ = new unaryMinusNode($2);}
	| SUB unary_expression  {$$ = new unaryPlusNode($2);}
	| TILDE unary_expression 	{$$ = new unaryBitwiseNotNode($2);}
	| EXCLAM unary_expression 	{$$ = new unaryNotNode($2);}
	| SIZEOF unary_expression {}
	| SIZEOF LBRACKET type_name RBRACKET {}
	;

logical_and_expression
	: inclusive_or_expression {$$ = $1;}
	| logical_and_expression AND_OP inclusive_or_expression {$$ = new logicalAndNode($1, $3); }
	;

postfix_expression
	: primary_expression {$$ = $1;}
	| postfix_expression LSQUAREBRACKET expression RSQUAREBRACKET {$$ = new arrayIndexNode($1, $3);}
	| postfix_expression LBRACKET RBRACKET {$$ = new func1CallNode($1);}
	| postfix_expression LBRACKET argument_expression_list RBRACKET {$$ = new func2CallNode($1, $3);}
	| postfix_expression FULLSTOP IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP {$$ = new unaryIncNode($1);}
	| postfix_expression DEC_OP	{$$ = new unaryDecNode($1);}
	;

primary_expression
	: IDENTIFIER {$$ = new identNode(*$1);}
	| INT_CONSTANT {$$ = new intNode($1);}
	| FLOAT_CONSTANT {$$ = new floatNode($1);}
	| STRING_LITERAL {}
	| LBRACKET expression RBRACKET {$$ = $2;}
	;

type_name
	: specifier_qualifier_list {}
	;

inclusive_or_expression
	: exclusive_or_expression {$$ = $1;}
	| inclusive_or_expression INCLOR exclusive_or_expression {$$ = new orNode($1, $3); }
	;

argument_expression_list
	: assignment_expression	{$$ = $1;}
	| argument_expression_list COMMA assignment_expression {$$ = new argumentExpressionListNode($1, $3);}
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list {}
	| type_specifier {}
	;

exclusive_or_expression
	: and_expression {$$ = $1;}
	| exclusive_or_expression EXCLOR and_expression {$$ = new exclOrNode($1, $3); }
	;

and_expression
	: equality_expression {$$ = $1;}
	| and_expression AND equality_expression {$$ = new andNode($1, $3); }
	;


equality_expression
	: relational_expression {$$ = $1;}
	| equality_expression EQ_OP relational_expression {$$ = new equalNode($1, $3); }
	| equality_expression NE_OP relational_expression {$$ = new notEqualNode($1, $3); }
	;

relational_expression
	: shift_expression {$$ = $1;}
	| relational_expression LESSTHAN shift_expression {$$ = new lessThanNode($1, $3); }
	| relational_expression GREATERTHAN shift_expression {$$ = new greaterThanNode($1, $3); }
	| relational_expression LTEQ shift_expression {$$ = new lessThanOrEqualNode($1, $3); }
	| relational_expression GTEQ shift_expression {$$ = new greaterThanOrEqualNode($1, $3); }
	;

shift_expression
	: additive_expression {$$ = $1;}
	| shift_expression LEFT_OP additive_expression {$$ = new leftShiftNode($1, $3); }
	| shift_expression RIGHT_OP additive_expression	{$$ = new rightShiftNode($1, $3); }
	;

additive_expression
	: multiplicative_expression {$$ = $1;}
	| additive_expression ADD multiplicative_expression {$$ = new addNode($1, $3); }
	| additive_expression SUB multiplicative_expression {$$ = new subNode($1, $3); }
	;

multiplicative_expression
	: unary_expression {$$ = $1;}
	| multiplicative_expression MUL unary_expression {$$ = new mulNode($1, $3); }
	| multiplicative_expression DIV unary_expression {$$ = new divNode($1, $3); }
	| multiplicative_expression MOD unary_expression {$$ = new modNode($1, $3); }
	;



enumerator
	: IDENTIFIER {$$ = new enumDeclar2Node(*$1);}
	| IDENTIFIER EQ constant_expression {$$ = new enumDeclar1Node(*$1, $3);}
	;

enumerator_list
	: enumerator {$$ = $1;}
	| enumerator_list COMMA enumerator {$$ = new enumeratorListNode($1, $3);}
	;

enum_specifier
	: ENUM LCURLYBRACE enumerator_list RCURLYBRACE {$$ = new enumInstant1Node($3);}
	| ENUM IDENTIFIER LCURLYBRACE enumerator_list RCURLYBRACE {$$ = new enumInstant2Node(*$2, $4);}
	| ENUM IDENTIFIER {$$ = new enumInstant3Node(*$2);}
	;

parameter_declaration
	: declaration_specifiers declarator	{$$ = new declarationNode($1, $2);}
	| declaration_specifiers {$$ = $1;}
	;

initializer_list
	: initializer {$$ = $1}
	| initializer_list COMMA initializer {$$ = new initializerList($1, $3);}
	;

%%

const astNode *g_root;

const astNode *parseAST()
{
	g_root = 0;
	yyparse();
	return g_root;
}
