README 

In the sample1.cu file the code is correct 
And in the sample2.cu file the code is incorrect (see that else(x>0) also has a condition.)

The code can be compiled using 	lex cucu.l
				yacc -d cucu.y
				cc lex.yy.c y.tab.c -o cucu
Then executing it as ./cucu

By default the code sample1.cu will run if you want to change that so go in the file cucu.y and in the int main comment out the //yyin = fopen("sample1.cu","r") and uncomment the yyin=fopen("sample2.cu","r") line.
				

ASSUMPTIONS

1)I am assuming that an underscore can also be present as part of a string.
	
2)In the assignment operation I am not doing the type checking

3)I am assuming as seen in the samples that with if there is an associated else
so it would only be appropriate to use if{} else{} together

4)Not taking the unary minus into consideration

5)In while loop and if and else I am only allowing boolean expressions and arithmetic expressions to be part of the thing

6)I am not assuming the role of boolean exprssions in assigment statements
	
7)And I am taking bitwise_and to be right associative

8)Only char * is correct
  char    * is not correct

9)I am printing the parser output a bit differently than ma'am is doing.

10)I am not assuming the existence of char ** , I am only allowing int and char * to be present as instructed.

11)I am not dealing with multiline comments. That means the comment should not have a \n in it.
