#include <stdio.h>
#include <cs50.h>

int BottleOfWater (int time);

int main(void)
{
    int time =0;
    printf("Minutes : ");
    int timeOfShower=scanf("%d",&time);
    int water= BottleOfWater(time);
    printf("/nBottles : %d\n",water);
    
}

int BottleOfWater (int time)
{
    int numberOfBottle = time*12;
    return numberOfBottle;
}