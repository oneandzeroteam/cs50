#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int i = -1;
    string s = get_string();
    if (s != NULL)
    do{
    do
        {
        i++;
        }
    while(toupper(s[i])<'A' || toupper(s[i])>'Z');

    printf("%c",toupper(s[i]));

    do
        {
        i++;
        }
    while(toupper(s[i])>='A' && toupper(s[i])<='Z');
    
    }while (s[i] != '\0');
    printf("\n");
}