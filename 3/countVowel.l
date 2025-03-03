/*lex program to count number of vowels in string*/
%option noyywrap
%{ 
#include<stdio.h> 
#include<string.h> 
int c = 0; 
int v = 0;
%} 
  
/* Rules Section*/
%% 
[aeiouAEIOU] {v++;}
[a-zA-Z]    {c++;}
\n {return 0;}
%% 
  
/*int yywrap(void){}*/ 
  
int main() 
{    
    // The function that starts the analysis
    printf("Enter a string : "); 
    yylex(); 
    printf("No of vowels in given string = %d\n", v);
    return 0; 
} 
