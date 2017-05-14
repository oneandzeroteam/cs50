#include <cs50.h>
#include <stdio.h>

void printBlank(int times);
void printHashtag(int times);

int main(){
    int height = 0;
    
    do{
        printf("height: ");
        height = GetInt();
        if(height == 0){
            exit(0);
        }
    }while(height <= 0 || height > 23);

    for(int i = 1 ; i <= height ; i++){
        printBlank(height - i);
        printHashtag(i);
        printBlank(2);
        printHashtag(i);
        printf("\n");
    }
}

void printBlank(int times){
    for(int i = 0 ; i < times ; i++){
        printf(" ");
    }
}

void printHashtag(int times){
    for(int i = 0 ; i < times ; i++){
        printf("#");
    }
}