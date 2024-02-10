#include<stdio.h>

int percentage(int maths, int comp, int sci);

int main()
{
    int maths,sci,comp;

    printf("Enter marks in maths: ");
    scanf("%d",&maths);
    printf("Enter marks in Science: ");
    scanf("%d",&sci);
    printf("Enter marks in Computer: ");
    scanf("%d",&comp);

    if (percentage(maths, comp, sci)>=35)
    {
        printf("\nyou are pass");
    }
    else
    {
        printf("\nyou are fail");
    }

    printf("your total percentage is %d",percentage(maths, comp, sci));
    percentage(maths, comp, sci);
    return 0;
}

int percentage(int maths, int comp, int sci)
{
        return((maths+comp+sci)/3);
    
}