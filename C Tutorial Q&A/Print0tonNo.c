#include<stdio.h>
int main()
{
    int num,i;

    printf("Enter any no:");
    scanf("%d",&num);
    
//if i = 0 then ur resulted no start with 0 to n no, which is 1 + of user no.
//if i = 1 then ur resulted no will be ur n no of user.

    for (size_t i = 1; i <= num; i++)
    {
        printf("\n%c. %d\n",i+97,i);
    }

    return 0;
    
}