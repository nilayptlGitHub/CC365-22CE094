%{ 
#include<stdio.h> 
#include<string.h> 
%} 
  
/* Rules Section*/
%% 
([^0-9\n]) ;
[0-9]+   {printf("%s\n",yytext);}
\n {return 0;} 
%% 
  
int yywrap(void){} 
  
int main() 
{    
    printf("Enter a string containing Numbers(digit) : ");
    yylex(); 
    
    return 0; 
} 
