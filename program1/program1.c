%{
#include <stdio.h>
int line = 0 ,  tab = 0 ,  space = 0 , character = 0;
%}
%%
\n {line++;}
\t {tab++;}
[ ] {space++;}
. {character++;}
%%
int yywrap()  { return 1;}
int main(){
 yylex();
 printf("Number of lines %d \n",line);
 printf("Number of tab %d \n",tab);
 printf("Number of space %d \n",space);
 printf("Number of character %d \n",character);
 return 0;
}