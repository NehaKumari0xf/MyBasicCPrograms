#include<stdio.h>
int main()
{
    int age;

    printf("Enter your age:");
    scanf("%d",&age);

    if (age>=18)
    {
        printf("\nYou are adult.\nYou are eligible for vote.\nYou are eligible for Drive.");
    }
    else
    {
        printf("\nYou are under 18.");
    }

    return 0;
    
}