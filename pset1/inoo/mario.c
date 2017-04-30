#include <stdio.h>
#include <cs50.h>

void pileTheBlock(int height);

int main (void)
{
    int height =0;
    printf("Height: ");
    scanf("%d",&height);
    //printf("\n");
    pileTheBlock(height);
}

void pileTheBlock(int height)
{
    for (int i=1;i<=height;i++)
    {
        for (int j=0;j<height-i;j++)
        {
            printf(" ");
        }
        for (int k=0;k<i;k++)
        {
            printf("#");
        }
        printf("  ");
        
        for (int k=0;k<i;k++)
        {
            printf("#");
        }
        printf("\n");
        
    }
}