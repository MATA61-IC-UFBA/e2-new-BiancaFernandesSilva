/* main.c */

#include <stdio.h>
#include "token.h"

extern int yylex();
extern char *yytext;

int main(int argc, char **argv)
{
    token_t token = -1;
    while (token != EOL){
        token=yylex();          //chamada do próximo token
        if (token == ERROR){
            printf("erro léxico: %s\n", yytext);
        } else if (token == NUMBER){
            printf("constante decimal: %s\n", yytext);
        } else {        
            printf("Código do token: %d\n", token);
        }        
    }
}
