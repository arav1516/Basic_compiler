%{
#include <stdio.h>
#include <string.h>
#include <math.h>
int yylex();
void yyerror(char const *s);
extern FILE *yyin,*yyout,*lexout;

%}



%token int_data string_data while_loop if_statement else_statement return_command comma plus minus multiply divide assignment_or_equals semicolon less_than greater_than less_than_equal greater_than_equal open_curly closed_curly open_square closed_square open_paranthesis closed_paranthesis check_equals check_not_equals bitwise_and

%union{
	char *str;
	int number;
}

%token <str> string
%token <str> identifier
%token <number> integer
//%right less_than greater_than less_than_equal greater_than_equal
%right bitwise_and
%left plus minus
%left multiply divide
%left open_paranthesis closed_paranthesis

%%

programs	:	
	 	|	program
	 	;

program		:	statement {fprintf(yyout,"\n");}	
		|	func_definition {fprintf(yyout,"\n");}
	 	|	func_declaration {fprintf(yyout,"\n");}
		|	program func_definition {fprintf(yyout,"\n");}
		|	program func_declaration {fprintf(yyout,"\n");}
		|	program statement {fprintf(yyout,"\n");}
		;

var_declaration	:	INT_DATA id assignment_or_equals arithmetic_expression semicolon {fprintf(yyout,"Assignment : =\n");}
		|	INT_DATA id semicolon
		|	STRING_DATA id assignment_or_equals STRING semicolon {fprintf(yyout,"Assignment : =\n");} 
		|	STRING_DATA id semicolon
		;

		     	



func_definition		:	INT_DATA id open_paranthesis func_args closed_paranthesis open_curly statements closed_curly {fprintf(yyout,"Function declared above\n\n");}
			|	STRING_DATA id open_paranthesis func_args closed_paranthesis open_curly statements closed_curly {fprintf(yyout,"Function declared above\n\n");}
		 	;

func_declaration	:	INT_DATA id open_paranthesis func_args closed_paranthesis semicolon {fprintf(yyout,"Function declared above\n\n");}
		 	|	STRING_DATA id open_paranthesis func_args closed_paranthesis semicolon {fprintf(yyout,"Function declared above\n\n");}
			;
statements		: 	
	    		|	statements statement
			;
			
statement		:	assignment_statement
	  		|	func_call_statement {fprintf(yyout,"Function call ends \n\n");}
	  		|	var_declaration
			|	if_else {fprintf(yyout,"If Condition Ends \n\n");}
			|	while_statement_statement {fprintf(yyout,"While Loop Ends \n\n");}
			|	return_statement {fprintf(yyout,"Return statement \n\n");}
			;

func_args		:	
	   		|	INT_DATA id {fprintf(yyout,"Function Arguments Passed Above\n\n");}
	   		|	STRING_DATA id {fprintf(yyout,"Function Arguments Passed Above\n\n");}
			|	INT_DATA id comma func_args
			|	STRING_DATA id comma func_args
			;

assignment_statement 	:	id assignment_or_equals arithmetic_expression semicolon
		     	;


return_statement	:	return_command semicolon 
		 	|	return_command boolean_expression semicolon 
		 	;

func_call_statement	:	id open_paranthesis bunch_of_identifiers closed_paranthesis semicolon
			;


while_statement_statement	:	while_loop open_paranthesis boolean_expression closed_paranthesis open_curly statements closed_curly
			  	;

if_else			:	if_statement open_paranthesis boolean_expression closed_paranthesis open_curly statements closed_curly else_statement open_curly statements closed_curly
	  		;

bunch_of_identifiers 	:	
		      	|	boolean_expression
			|	bunch_of_identifiers comma boolean_expression
			;


boolean_expression	: 	boolean_expression check_equals arithmetic_expression {fprintf(yyout,"operation : == \n");}
		   	|	boolean_expression check_not_equals arithmetic_expression {fprintf(yyout,"operation : != \n");}
			|	boolean_expression less_than arithmetic_expression {fprintf(yyout,"operation : < \n");}
			|	boolean_expression greater_than arithmetic_expression {fprintf(yyout,"operation : > \n");}
			|	boolean_expression less_than_equal arithmetic_expression {fprintf(yyout,"operation : <= \n");}
			|	boolean_expression greater_than_equal arithmetic_expression {fprintf(yyout,"operation : >= \n");}
			|	arithmetic_expression
			;


arithmetic_expression	:	open_paranthesis arithmetic_expression closed_paranthesis
			|	arithmetic_expression bitwise_and arithmetic_expression {fprintf(yyout,"operation : & \n");}
		      	|	arithmetic_expression plus arithmetic_expression {fprintf(yyout,"operation : + \n");}
			|	arithmetic_expression minus arithmetic_expression {fprintf(yyout,"operation : - \n");}
			|	arithmetic_expression multiply arithmetic_expression {fprintf(yyout,"operation : * \n");}
			|	arithmetic_expression divide arithmetic_expression {fprintf(yyout,"operation : / \n");}
			|	integer	{fprintf(yyout,"Integer : %d \n", $1);}
			|	STRING  //{fprintf(yyout,"string : %s \n", $1);}
			|	id open_square  boolean_expression closed_square {fprintf(yyout,"SQUARE BRACKET USED : [] \n");}
			|	id //{fprintf(yyout,"Identifier : %s \n", $1);}
			;
			
id			:	identifier {fprintf(yyout,"IDENTIFIER : %s \n",$1);}
			;
			
STRING			:	string	{fprintf(yyout,"STRING : %s \n",$1);}
			;

INT_DATA		:	int_data {fprintf(yyout,"datatype : int\n");}
			;	
			
STRING_DATA		:	string_data {fprintf(yyout,"datatype : char pointer\n");}
			
%%


int main()
{
	yyin=fopen("sample1.cu","r");
	//yyin=fopen("sample2.cu","r");
	yyout=fopen("parser.txt","w");
	lexout=fopen("lexer.txt","w");
	yyparse();
	return 0;
}

void yyerror(char const *s)
{
	printf("Syntax Error\n");
}


	
