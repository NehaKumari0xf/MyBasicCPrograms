#include<stdio.h>
int main()
{
    int WeekNum;

    printf("Enter any no(1 to 7):");
    scanf("%d",&WeekNum);

    switch (WeekNum)
    {
        case 1:
        printf("\nSunday");
        break;
        case 2:
        printf("\nMonday");
        break;
        case 3:
        printf("\nTuesday");
        break;
        case 4:
        printf("\nWednesday");
        break;
        case 5:
        printf("\nThrusday");
        break;
        case 6:
        printf("\nFriday");
        break;
        case 7:
        printf("\nSaturday");
        break;
        default:
        printf("\nSprry! Invalid Week Number");
        break;
    }

    return 0;
    }
