/* recognize tokens for the calculator */

%option noyywrap nodefault yylineno
%{
#include "token.h"

%}

%%
"+"     { return PLUS;   }
"-"     { return MINUS;  }
"*"     { return TIMES;  }
"/"     { return DIV;    }
[0-9]+  { return NUMBER; }
[ \t]   { /* skip whitespace */ }
\n      { return EOL;    }
.       { return ERROR;  }
%%

/*int main() {


} */




