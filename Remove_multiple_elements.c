//Scrieti un program in c care sterge toate aparitiile multipe ale unei litere intr-un cuvant
//ex: aaanaa aarrre meeeree devine ana are mere
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
 void removeDuplicates(char* s)
    {
        int n;
        // When string is empty, return
        if (s[0] == '\0')
        {
            return;
        }
        // if the adjacent characters are same
        if (s[0] == s[1])
        {

            // Shift character by one to left
            int i = 0;
            n=strlen(s);
            for(i=0; i<n; i++)
            {
                s[i] = s[i + 1];
            }

            // Check on Updated String s
            removeDuplicates(s);
        }

        // If the adjacent characters are not same we continue with the rest of characters
        // Check from s+1 string address
        removeDuplicates(s + 1);
    }


int main(void)
{
    char s[100];
    printf("Introduceti un sir de caractere: ");
    fgets(s, 100, stdin);
    removeDuplicates(s);
    printf("Noul sir este: %s", s);
    return 0;
}
