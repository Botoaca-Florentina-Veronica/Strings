//Program in c to remove all multiple spaces in a text and replace it with single spaces
#include<stdio.h>
#include<string.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    char input[100];
    int i, j, n=0;
    printf("Introduceti textul dvs: ");
    fgets(input, 100, stdin);
    n=strlen(input); //lungime vector
    while(i<n)
    {
        if(input[i]==' ' && (input[i+1]==' ' || input[i-1]==' '))
        {
            n--;  //daca gasim un spatiu in plus il scadem din lungimea vectorului
            for(j=i; j<n; j++)
            {
                input[j]=input[j+1]; //caracterul de unde aveam spatiu multiplu trece la pozitia urmatoare
            }
        }
        else
        {
            i++;
        }
    }
    input[n]='\0';  //informam compiler-ul ca dupa caracterul null nu mai avem alte caractere si sa se opreasca acum
    printf("%s\n", input);
    printf("\n");
    return 0;
}
