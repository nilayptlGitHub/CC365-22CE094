%{ 
#include<stdio.h> 
#include<string.h> 
%} 
  
/* Rules Section*/
%% 
([Cc][Hh][Aa][Rr][Uu][Ss][Aa][Tt])      {printf("university");}
\n {return 0;} 
%% 
  
int yywrap(void){} 
  
int main() 
{    
    printf("Enter a string : ");
    yylex(); 
    
    return 0; 
} 
