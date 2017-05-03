#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main(int argc, string argv[]){
    if (argc != 2){
        printf("missing command-line argument\n");
        return 1;
    }
    
    int key = atoi(argv[1]); 

    printf("plaintext: ");
    string k = get_string();

    printf("ciphertext: ");
    for(int i=0; i < strlen(k); i ++){
       
            if(islower(k[i])){
                printf("%c", (key+k[i]-'a')%26+'a');
            }
            else if(isupper(k[i])){
                printf("%c", (key+k[i]-'A')%26+'A');
            }
            else
                printf("%c",k[i]);
            }

    
    printf("\n");
    return 0;
    
}
