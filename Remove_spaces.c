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
    n=strlen(input); //length array
    for(i=0; i<n; i++)
    {
        if(input[i]==' ' && (input[i+1]==' ' || input[i-1]==' '))
        {
            n--;  //if we find a multiple space, then we decrement the length of the array by 1
            for(j=i; j<n; j++)
            {
                input[j]=input[j+1]; //we move on to the next index, when we are at a deleting space
            }
        }
    }
    //After removing space, reduce the string's length by one and, at the end, 
    //initialize a null-terminated character ('0') to inform the compiler that there are no more characters inside the string after that null-terminated character.
    input[n]='\0';  
    printf("%s\n", input);
    printf("\n");
    return 0;
}
