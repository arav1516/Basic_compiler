%{
#include<stdio.h>
#include<string.h>
#include<math.h>
#include "y.tab.h"
FILE *lexout;

%}

%%
"int"			{fprintf(lexout,"TYPE : int\n");return int_data;}
"char *"		{fprintf(lexout,"TYPE : char pointer\n");return string_data;}
"while"			{fprintf(lexout,"WHILE : while\n");return while_loop;}
"if"			{fprintf(lexout,"IF : if\n");return if_statement;}
"else"			{fprintf(lexout,"ELSE : else\n");return else_statement;}
"return"		{fprintf(lexout,"RETURN :return\n");return return_command;}
[a-zA-Z][a-zA-Z0-9_]* 	{fprintf(lexout,"IDENTIFIER : %s\n",yytext);yylval.str=strdup(yytext);return identifier;}
\"[a-zA-Z0-9_ ]*\" 	{fprintf(lexout,"TYPE : string");yylval.str=strdup(yytext);return string;}
[0-9]+			{fprintf(lexout,"INTEGER : %d\n",yylval.number=atoi(yytext));return integer;}
","			{fprintf(lexout,"COMMA : ,\n");return comma;}
"="			{fprintf(lexout,"ASSIGN : =\n");return assignment_or_equals;}
"+"			{fprintf(lexout,"PLUS : +\n");return plus;}
"-"			{fprintf(lexout,"MINUS : -\n");return minus;}
"*"			{fprintf(lexout,"MULTIPLY : *\n");return multiply;}
"/"			{fprintf(lexout,"DIVIDE : /\n");return divide;}
";"			{fprintf(lexout,"SEMICOLON : ;\n");return semicolon;}
"<"			{fprintf(lexout,"LESS_THAN : <\n");return less_than;}
">"			{fprintf(lexout,"GREATER_THAN : >\n");return greater_than;}
"<="			{fprintf(lexout,"LESS_THAN_EQUAL : <=\n");return less_than_equal;}
">="			{fprintf(lexout,"GREATER_THAN_EQUAL : >=\n");return greater_than_equal;}
"&"			{fprintf(lexout,"BITWISE_AND : &\n");return bitwise_and;}
\{			{fprintf(lexout,"OPEN_CURLY :{\n");return open_curly;}
\}			{fprintf(lexout,"CLOSED_CURLY :} \n");return closed_curly;}
\[			{fprintf(lexout,"OPEN_SQUARE :[ \n");return open_square;}
\]			{fprintf(lexout,"CLOSED_SQUARE :]\n");return closed_square;}
\(			{fprintf(lexout,"OPEN_PARANTHESIS :(\n");return open_paranthesis;}
\)			{fprintf(lexout,"CLOSED_PARANTHESIS :)\n");return closed_paranthesis;}
"=="			{fprintf(lexout,"CHECK_EQUALS : ==\n");return check_equals;}
"!="			{fprintf(lexout,"CHECK_NOT_EQUALS : !=\n");return check_not_equals;}
\/\*(.)*\*\/		{fprintf(lexout,"COMMENT : %s\n",yytext);}	
[ \t\n]+		;
%%
int yywrap()
{
	return 1;
}	
