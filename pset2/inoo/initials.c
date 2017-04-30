#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void){
    char name[50]={ };
    int i=1;
    while(name[i-1]==!"\0"){
       scanf("%c",&name[i]);
      i++;
    }
    
    printf("%s",name);
    for (int i=0, n=strlen(name); i<n; i++){
        if (isupper(name[i])){
            printf("%c",name[i]);
        }
    }
    printf("\n");
}