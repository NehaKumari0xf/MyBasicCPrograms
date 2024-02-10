#include<stdio.h>
int main()
{
    int a,b,c,d,e;

    printf("Enter any five no:");
    scanf("%d   %d  %d  %d  %d",&a,&b,&c,&d,&e);
    
    if (a>b && a>c && a>d && a>e )
    {
        printf("\n%d is largest no",a);
    }
    else if( b>c && b>d && b>e )
    {
        printf("\n%d is largest no",b);
    }
   else if( c>d && c>e )
    {
        printf("\n%d is largest no",c);
    }
    else if(d>e )
    {
        printf("\n%d is largest no",d);
    }
    else
    { 
        printf("\n%d is largest no",e);
    }
      
    return 0;
}