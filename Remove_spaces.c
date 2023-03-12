//Program in c to remove all multiple spaces in a text and replace it with single spaces(needs redo)
#include<stdio.h>
#include<string.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    char input[100];
    int i, j, n=0;
    printf("Write a string: ");
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



//Program in c to remove all multiple spaces in a text and replace it with single spaces
#include<stdio.h>
#include<ctype.h>
int main(void)
{

    char input[100];
    int i, j, n;

    // Create a string to store resultant string
    char result[100] = {0};

    // get the string from the user
    printf("Enter a string : ");
    fgets(input, 100, stdin);
    n=strlen(input);
    // Iterate over the string - Remove extra spaces between the words
    // index 'i' used for traversing the inputStr
    // index 'j' used to update the resultStr
    for(i=0, j=0; input[i]; i++)
    {
 
        // check if we got the whitespace.
        if(isspace(input[i]) && isspace(input[i-1]))
        {
            // Two consecutive white spaces. Skip the 'i'. Continue to next iteration
            continue;
        }
 
        // Found a valid character, update result. Increment 'j'
        result[j++] = input[i];
    }

    // Add the terminating NULL character to resultStr
    result[j] = '\0';

    // Print Results
    printf("Before: %s\n", input);
    printf("After:  %s\n", result);

    return 0;
}
