#include<stdio.h>
int main()
{
    int num1,num2,num3;
    float avg;

    printf("Enter 1st no:");
    scanf("%d",&num1);

    printf("\nEnter 2nd no:");
    scanf("%d",&num2);

    printf("\nEnter 3rd no:");
    scanf("%d",&num3);

//processing
//Average of 3 no     
    printf("\nAverage is: %f",avg=(num1+num2+num3)/3);
    return 0;
}