//Capitalize the first letter in a word 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(void)
{
    int i,n;
    char s[100];
    printf("Introduceti un text:  ");
    fgets(s, 100, stdin);
    n=strlen(s);
    if(s[0]>=97 && s[0]<=122)
    {
        s[0]=toupper(s[0]);
    }
    for(i=0; i<n; i++)
    {
        if(s[i]==' ')
        {
            s[i+1]=s[i+1]-32;
        }
    }
    printf("Noul sir de caractere este: %s", s);
    return 0;
}
