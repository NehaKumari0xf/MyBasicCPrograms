#include<stdio.h>
int main()
{
    int n;
    printf("Enter any no:");
    scanf("%d",&n);
    /*1 is for true value and 0 is for false value
    To check a no is divisble by 2 or not and also a no is even is for 1 or odd is for 0.*/
    printf("%d",n%2==0);
    return 0;
}