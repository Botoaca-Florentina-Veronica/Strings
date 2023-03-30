 //se citește un text care este alcătuit doar din litere. Să se afișeze pentru fiecare literă de câte ori apare în text

//met1
#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int  i,j,k,count=0,n;
    printf("Enter  the string : ");
    fgets(s, 1000, stdin);
    n=strlen(s);
    for(j=0;j<n;j++);
	printf(" frequency count character in string:\n");
    for(i=0;i<n;i++)
    {
     	count=1;
    	if(s[i])
    	{
 		  for(j=i+1;j<n;j++)
	      {

	        if(s[i]==s[j])
    	    {
                 count++;
                 s[j]='\0';
	     	}
	      }
	      printf(" '%c' = %d \n",s[i],count);
       }
 	}
    return 0;
}


//met2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
    int i, n;
    int count[26]={0};
    char str[1000];
    printf("Introduceti un sir de caractere: ");
    fgets(str, 1000, stdin);
    n=strlen(str);
    for(i=0; i<n; i++)
    {
        if(isalpha(str[i]))
        {
            count[toupper(str[i])-'A']++;
        }
    }
    for(i=0; i<26; i++)
    {
        printf("%c - %d\n", i+'A', count[i]);
    }
    return 0;
}

