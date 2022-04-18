%{
#include <stdio.h>
int count = 0;
%}
%%
[a-zA-Z_][a-zA-Z0-9_]* {count++;}
%%
int yywrap()  { return 1;}
int main(){
 yylex();
 printf("total number of identifers are %d",count);

 return 0;
}