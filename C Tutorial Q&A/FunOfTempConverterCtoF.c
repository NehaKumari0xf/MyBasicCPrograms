#include<stdio.h>

void degreeC(float c);

int main()
{
    float c;

    printf("Enter any no to convert temp into (C into F):");
    scanf("%f",&c);

    degreeC(c);
    return 0;
}

void degreeC(float c)
{
        printf("%f",(c*9/5)+32);
    
}