#include<stdio.h>
#include<string.h>
#include <ctype.h> 

int main()
{
    int k,i;
    char str[200],p;

    printf("Message to encrypt: ");
    gets(str);

    printf("Enter the key: ");
    scanf("%d", &k);

    for(i=0; i < strlen(str); i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            {
                p = tolower(str[i]) - tolower('A');
                p = ( p + k ) % 26;
                printf("%c", p + tolower('A'));
            }
        else if(str[i]>='a' && str[i]<='z')
        {
            p=str[i]-'a';
            p=(p+k)%26;
            printf("%c",p+'a');
        }
        else
            printf ("%c ",str[i]);
    }
    return 0;
}