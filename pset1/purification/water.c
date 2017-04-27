#include<stdio.h>
#include<cs50.h>

int main ()
{
    int n = 0;
    
    do{
    
    printf("Minutes: ");
    n = get_int();
    
    }while(n<=0);
    printf("Bottles: %d\n", 12*n);

}