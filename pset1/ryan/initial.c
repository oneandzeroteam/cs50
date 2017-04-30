#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0;
    string s = get_string();
    if (s != NULL)
        do
    {
        printf("%c",toupper(s[i]));
        do
            {
                i++;
            }
        while(toupper(s[i])>='A' && toupper(s[i])<='Z');
        i=i+1;
    }
    while (s[i] != '\0');
    printf("\n");
}