#include<stdio.h>
#include<string.h>
//declaration
void count();
char word[30];
int main()
{
    int  count;

    printf("Enter any word you want to print: ");
    gets(word);
    printf("How many times you want to print your word:");
    scanf("%d",&count);

    count();
    return 0;
}

//defination
void count()
{

    for (size_t word = 0; word < count; word++)
    {
        printf("%d. %s\n",count,word);
    }
    

}

