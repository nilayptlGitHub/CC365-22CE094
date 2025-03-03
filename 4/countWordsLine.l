%{ 
#include<stdio.h> 
#include<string.h> 
int line = 0;
int word = 1;
int charc = 0;
%} 
  
/* Rules Section*/
%% 
" "                         {word++;charc++;}
[\n]                          {line++;}
.                           {charc++;}
%% 
  
int yywrap(void){} 
  
int main() 
{    
    printf("Enter a string (Multiple line): ");
    yylex(); 
    printf("\nNo of Lines : %d",line);
    printf("\nNo of Words : %d",word);
    printf("\nNo of character : %d",charc);
    
    return 0; 
} 
