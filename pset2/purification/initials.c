#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    string s = get_string();
    char *ptr = strtok(s," ");
    
    while(ptr != NULL){
        
    if(islower(ptr[0])){
       ptr[0]=toupper(ptr[0]);
    }
    printf("%c", ptr[0]);
    ptr = strtok(NULL ," ");
        
    }
    
    printf("\n");
    
    return 0;
}