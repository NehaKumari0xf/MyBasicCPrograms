#include<stdio.h>
int main()
{
    int marks;

    printf("Enter student obtained marks:");
    scanf("%d",&marks);

    if (marks>=90 && marks<=100)
    {
        printf("\nGrade: A+");
    }
    else if (marks>=80 && marks<90)
    {
        printf("\nGrade: A");
    }
    else if (marks>=50 && marks<80)
    {
        printf("\nGrade: B");
    }
    else if (marks>=40 && marks<50)
    {
        printf("\nGrade: C");
    }
    else
    {
        printf("\nGrade: fail");
    }

    return 0;
    
}