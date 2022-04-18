%{
int count = 0;
%}
%%
"while"|"if"|"else" {count++; printf("\t keywords: %s", yytext);}
"int"|"float" {count++; printf("\t keywords: %s", yytext);}
[a-zA-Z_][a-zA-Z0-9_]* {count++; printf("\t Identifier: %s", yytext);}
"<="|"=="|"="|"++"|"-"|"*"|"+" {count++; printf("\t operator: %s", yytext);}
"("|")"|"{"|"}"|","|";" {count++; printf("\t Separator: %s", yytext);}
[0-9]*"."[0-9]+ {count++; printf("\t Float: %s", yytext);}
[0-9]+ {count++; printf("\t Integer: %s", yytext);}

%%
int yywrap(){
    return 1;
}
int main(){
    yylex();
    printf("total number of token %d",count);
    return 0;}