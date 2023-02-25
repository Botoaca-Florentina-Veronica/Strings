 //se citește un text care este alcătuit doar din litere. Să se afișeze pentru fiecare literă de câte ori apare în text
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


