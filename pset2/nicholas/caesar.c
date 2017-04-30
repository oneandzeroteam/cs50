#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[]){
    if( argc != 2 ){
        printf("Please provide a commandline argument\n");
        return 1;
    }
    
    int k = atoi(argv[1]);
    printf("plaintext:");
    string message = GetString();
    
    
    printf("ciphertext:");
    for (int i = 0, n = strlen(message); i < n; i++)
    {
        if(message[i] >= 'a' && message[i] <= 'z'){
            printf("%c", (message[i]+k-'a')%26 +'a');
        } else if(message[i] >= 'A' && message[i] <= 'Z'){
            printf("%c", (message[i]+k-'A')%26 +'A');
        } else {
            printf("%c", message[i]);
        }
    }
    printf("\n");
}