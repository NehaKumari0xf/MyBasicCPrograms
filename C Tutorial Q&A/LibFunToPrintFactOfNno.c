#include<stdio.h>
#include<math.h>

int printfactOfNno(int n);

int main()
{
    int n;

    printf("Enter any no:");
    scanf("%d",&n);

    printfactOfNno(n);
    return 0;
}

int printfactOfNno(int n)
{
    for (size_t i = 0; i < n; i++)
    {
        printf("%d",fact(n-1) * n);
    }
}