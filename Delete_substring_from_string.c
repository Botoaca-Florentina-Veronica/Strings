/*Sa se scrie un program care sterge toate aparitiile unui subsir din cadrul unui sir.*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(void)
{
    int i;
    char a[100], b[50], *p;
    printf("Introduceti sirul: ");
    fgets(a, 100, stdin);
    printf("Introduceti subsirul: ");
    fgets(b, 100, stdin);
    i=strlen(b); // i represents the length of the string
    p=strstr(a, b); 
    //in the pointer we put the adress of the appearance of substring b in string a
    
    while(p)
    {
        strcpy(p, p+i); //copiaza sirul p+i in p
        p=strstr(p, b); //retruneaza pozitia unde apare subsirul b in sirul p
    }
    printf("Noul sir este: %s", a);
    return 0;
}
