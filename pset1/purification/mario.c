#include<stdio.h>
#include<cs50.h>

void mario(int height)
{

    int i,j,k;
    
  
    for(i=1;i<=height;i++){
        
        for(j=0;j<=height-i-1;j++){
            printf(" ");
        }
        for(k=height-i;k<height+1;k++){
            printf("#");
        }
        printf("\n");
    }

}

int main(void)
{
    printf("Height: ");
    int height = get_int();
    mario(height);
    
}