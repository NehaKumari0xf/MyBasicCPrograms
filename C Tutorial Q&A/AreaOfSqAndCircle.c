#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number:");
    scanf("%d",&a);
    printf("\nArea of Square is:%d\nArea of Circle is:%f\nCube of given no: ",a*a,3.14*a*a,a*a*a);
    return 0;
}