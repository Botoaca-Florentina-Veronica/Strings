//A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z -26 letters
//Scrieti un program in c care verifica daca se repeta cel putin o data toate literele alfabetului.


//metoda 1:
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int verificare_dublicate(char *str)
{
    int i, n;
    n=strlen(str);
    if(str[i]!=str[i+1])
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    int l=0, i, k=0;
    char str[1000];
    printf("Introduceti un sir de caractere: ");
    fgets(str, 1000, stdin);
    int n=strlen(str);
    for(i=0; i<n; i++)
    {
        if(isalpha(str[i]) && verificare_dublicate(str))  //verificam daca caracterul e litera unica
        {
            k++;  //numaram cate astfel de litere avem
        }
    }
    printf("k este egal cu: %d\n", k);
    for(i=0; i<n; i++)
    {
        if(k==26)
        {
            //daca avem exact 26 de litere unice atunci apare tot alfabetul in string
            l++;
        }
        else
        {
            l--;
        }
    }
    if(l>0)
    {
        printf("Toate literele alfabetului se regasesc cel putin o data in text!!");
    }
    else
    {
        printf("Toate literele alfabetului nu se regasesc cel putin o data in text!!");
    }
    return 0;
}




//metoda 2:
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) 
{
    char str[100];
    int i, freq[26] = {0}; // vector de frecvență inițializat cu 0
    int count = 0; // numărul de litere unice din șir

    printf("Introduceti un sir de caractere: ");
    fgets(str, sizeof(str), stdin);

    for (i=0; i<strlen(str); i++) 
    {
        if (isalpha(str[i])) 
        { 
            // verificăm dacă caracterul este o literă
            int index = tolower(str[i]) - 'a'; // obținem indexul literei din vectorul de frecvență
            if (freq[index] == 0) 
            { 
                // dacă litera nu a mai fost întâlnită până acum, creștem numărul de litere unice
                count++;
            }
            freq[index]++; // incrementăm frecvența literei curente
        }
    }

    if (count == 26) 
    { 
        // dacă numărul de litere unice este 26 (adica există cel puțin o apariție a fiecărei litere din alfabet)
        printf("Toate literele alfabetului apar cel putin o data in sirul dat.\n");
    } 
    else 
    {
        printf("Nu toate literele alfabetului apar cel putin o data in sirul dat.\n");
    }

    return 0;
}
