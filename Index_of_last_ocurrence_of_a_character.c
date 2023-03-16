//C program to find last occurrence of a character in a string
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_SIZE 100

int main(void)
{
    int i, len;
    char str[MAX_SIZE], ch;
    int k=0;
    printf("Introduceti un sir de caractere: ");
    fgets(str, MAX_SIZE, stdin);
    printf("Introduceti caractereul caruia doriti sa ii aflati indexul: ");
    scanf("%c", &ch);
    len=strlen(str);
    for(i=0; i<len; i++)
    {
        if(str[i]==ch)
        {
            k=i;   //retinem indexul in variabila k
        }
    }
    printf("Primul index al caracterului %c este: %d", ch, k);
    return 0;
}
