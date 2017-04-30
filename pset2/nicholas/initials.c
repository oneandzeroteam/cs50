#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printInitial(char initial);

int main(){
    string name;
    
    name = GetString();

    for( int i = 0; i < strlen(name) ; i++){
        if( i == 0 ){
            printInitial(name[i]);
        }
        else{
            if( !strncmp(&name[i - 1] ," ", 1) ){
                printInitial(name[i]);
            }   
        }
    }
    printf("\n");
}

void printInitial(char initial){
    if( initial != ' ' ){
        printf("%c", toupper(initial));
    }
}