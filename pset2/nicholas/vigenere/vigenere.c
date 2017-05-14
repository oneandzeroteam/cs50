#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char getPlace(char alphabet);

int main(int argc, string argv[]){
    if( argc != 2 ){
        printf("Please provide a commandline argument\n");
        return 1;
    }
    
    string keyword = argv[1];
    
    for(int i = 0, n = strlen(keyword); i < n; i++){
        if (!isalpha(keyword[i])){
            printf("Please provide a alphabetic argument\n");
            return 1;
        }
    }
    
    printf("plaintext:");
    string message = GetString();
    
    
    printf("ciphertext:");
    int j = 0;
    for (int i = 0, n = strlen(message); i < n; i++)
    {
        if(message[i] >= 'a' && message[i] <= 'z'){
            printf("%c", (getPlace(message[i]) + getPlace(keyword[j]))%26 +'a');
            j += 1;
        } else if(message[i] >= 'A' && message[i] <= 'Z'){
            printf("%c", (getPlace(message[i]) + getPlace(keyword[j]))%26 +'A');
            j += 1;
        } else {
            printf("%c", message[i]);
        }
        if(j == strlen(keyword)) {
            j -= strlen(keyword);
        }
    }
    printf("\n");
}

char getPlace(char alphabet){
    if(alphabet >= 'a' && alphabet <= 'z'){
        return alphabet - 'a';
    } else if(alphabet >= 'A' && alphabet <= 'Z'){
        return alphabet - 'A';
    } else {
        return alphabet;
    }
}