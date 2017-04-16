#include <cs50.h>
#include <stdio.h>

int main(){
    int num = 0;
    
    do{
        printf("minutes: ");
        num = GetInt();
    }while(num <= 0);
    printf("bottles: %d\n", num*12);
}