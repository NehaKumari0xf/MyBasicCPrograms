#include<stdio.h>
#include<math.h>

int printSumOfNno(int n);

int main()
{
    int n;

    printf("Enter any no:");
    scanf("%d",&n);

    printSumOfNno(n);
    return 0;
}

int printSumOfNno(int n)
{
    printf("%d",sum(n-1) + n);
}