#include<stdio.h>
int main()
{
    int num,i,sum=0;

    printf("Enter any no:");
    scanf("%d",&num);

    for (size_t i = 1; i < num; i++)
    {
        sum+=i;   //sum = sum + i;
    }
    printf("%d\n",sum);
    
    return 0;
    
}