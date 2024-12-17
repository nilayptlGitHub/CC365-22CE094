#include<stdio.h>
#include<stdbool.h>

int main()
{
    char str[100];
    scanf("%s",&str);

    int len = strlen(str);

    if(len < 2)
    {
        printf("\Invalid string..!");
    }
    else
    {
        int i=0;
        while(i<len)
        {
            if(str[i] == 'a'){
                i++;
            }
            else if((i+1) < len && str[i]== 'b' && str[i+1] == 'b' && i+2 == len){
                printf("\nValid String");
                break;
            }
            else{
                printf("\nInValid String..!");
                break;
            }
        }
    }
}
