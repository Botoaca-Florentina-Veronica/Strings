//C program that checks if a word is a palindrome or not
#include <stdio.h>
#include <string.h>

int checkpalindrome(char *s)
{
    int i,c=0,n;
    n=strlen(s);
	for(i=0;i<n/2;i++)
    {
    	if(s[i]==s[n-i-1])
    	c++;

 	}
 	if(c==i)
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
    char s[1000];
    printf("Enter  the string: ");
    gets(s);
    if(checkpalindrome(s))
    {
        printf("string is palindrome");
    }
    else
    {
        printf("string is not palindrome");
    }
    return 0;
}
