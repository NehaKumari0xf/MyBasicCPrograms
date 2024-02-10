#include<stdio.h>
void printNamaste();
void printBonjour();

int main()
{
    
    char ch;
    printf("Enter 'i' for Indian(gret) and 'f' for French(greet): ");
    scanf("%c",&ch);

    if (ch == 'i')
    {
        printf("Namaste!");
    }
    else if (ch == 'f')
        {
            printf("Bonjour!");
        }
    else{
        printf("Sorry! invalid english alphabet");
    }   
    

    return 0;
}

void printNamaste()
{
    printf("Nmaste\n");
}
void printBonjour()
{
    printf("Bonjour\n");
}

