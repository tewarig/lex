%{
int numberCount = 0;
int floatCount = 0;
%}
%%
[0-9]+ {numberCount++;}
[0-9]*"."[0-9]+ {floatCount++;}
%%
int yywrap(){
    return 1;
}
int main(){
    yylex();
    printf("count of number is %d",numberCount);
    printf("count of float is %d",floatCount);
    return 0;
}