#include<stdio.h>

int areaofSquare(float a);
int areaofCircle(float a);
int areaofRectangle(float a, float b);

int main()
{
    float a,b;

    printf("Enter any no in a:");
    scanf("%f",&a);
    printf("Enter any no in b:");
    scanf("%f",&b);

    areaofRectangle(a,b);
    return 0;
}

int areaofSquare(float a)
{
    printf("Area of Square is %f",a*a);
}

int areaofCircle(float a)
{
    printf("Area of Circle is %f",3.14*a*a);
}

int areaofRectangle(float a, float b)
{
    printf("Area of Rectangle is %f",a*b);
}

 