#include <cs50.h>
#include <stdio.h>

void floore(int n);
int main(){
    int i;
    do{
        printf("Height: ");
        i=get_int();
    }
    while(i<=0 || i>23);        floore(i);

}

void floore(int n)
{for(int k=1; k<n+1;k++){
    for(int i = 0; i < n-k; i++){
    printf(" ");}
    for(int i = 0; i < 1+k ; i++){
        printf("#");
    }
    printf("  ");
    for(int i = 0; i < 1+k ; i++){
        printf("#");}
    printf("\n");
}
}