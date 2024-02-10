#include<stdio.h>
int main()
{
    char i;

    printf("Enter any no:");
    scanf("%c",&i);
    if (i>='a' && i<= 'z' || i>= 'A' && i<= 'Z')
    {
        printf("\n This is a valid alphabet");   
    }
    else
    {
        printf("\nNot a valid english aplahabet");
    }  

    return 0;
}