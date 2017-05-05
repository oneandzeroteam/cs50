#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main(int argc, string argv[]){

    string keyword = argv[1];
    // key값을 string으로 가져오기
    
    if (argc != 2 ){
        printf("missing command-line argument. \n");
        return 1;
    }
    
    for(int i=0; i<strlen(keyword); i++){
    if(!isalpha(keyword[i])){
        printf("containing non-alphabetical characters. \n");
        return 1;
        }
    }
   
    printf("plaintext: ");
    string input = get_string();
    
    
    int keyValue;
    
    printf("ciphertext: ");
    
    for(int i=0, j= 0; i < strlen(input); i++){
    
        if(isalpha(input[i]))
        {   
           
            if(isupper(keyword[j])){
                keyValue = keyword[j] - 65;
            }
            else if(islower(keyword[j])){
                keyValue = keyword[j] - 97;
            }
            
            if(islower(input[i])){
                printf("%c",(input[i]-97+keyValue)%26+97);
                j++;
                if(j == strlen(keyword))
                    j = 0;
            }
            else{
                printf("%c",(input[i]-65+keyValue)%26+65);
                j++;
                if(j == strlen(keyword))
                    j = 0;
            }
        
        }
        
        else {
            printf("%c",input[i]);
        
        }
}
    
    printf("\n");
    return 0;
}
