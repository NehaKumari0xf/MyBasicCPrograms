#include<stdio.h>

void table(int n);//fun declaration

//calling
int main()
{
    int n; 

    printf("Enter table no:");//input data
    scanf("%d",&n);

    table(n);
    return 0;
}

//defination
void table(int n)
{
    for (size_t i = 1; i < 10; i++)//processing data
    {
        printf("%d\n",i*n);
    }
    
}