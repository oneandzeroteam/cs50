#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv [])
{
    int q,w,e,r;
    int i = 0;
    if (argc != 2)
    {printf ("Usage: ./caesar k\n"); return 0;}
    
    int NUM = atoi(argv[1]);
    eprintf("num is %i\n",NUM);
    printf("plaintest:  ");
    string s = get_string();
    printf("ciphertext: ");
    do
    {
        if (s[i]>= 'a' && s[i] <= 'z')
        {
            if (s[i]+NUM > 'z' )
            {
            q = (s[i] + NUM) % 'z' + 'a' - 1;
            printf("%c",q);
            i++;
            }
            else
            {
            w = s[i] + NUM ;
            printf("%c",w);
            i++;
            }
        }
        else if(s[i]>= 'A' && s[i] <= 'Z')
        {
            if (s[i]+NUM > 'Z')
            {
            e = (s[i] + NUM) % 'Z' + 'A' - 1;
            printf("%c",e);
            i++;
            }
            else
            {
            r = s[i]+NUM;
            printf("%c",r);
            i++;
            }
        }
        else
        {
            printf("%c",s[i]);
            i++;
        }
    }
    while(s[i] != '\0');
printf("\n");
}

