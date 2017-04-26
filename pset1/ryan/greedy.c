#include <cs50.h>
#include <stdio.h>

int main(void)

{
    float money;
    float q,e,r;
    int x,y,z,w;
    
    printf("O hai! ");
    do{
    printf("How much change is owed?\n");
    money = get_float();

    x = money / 0.25;
    q = money - x*0.25;
    y= q / 0.1;
    e = q - 0.1*y;
    z=  e / 0.05;
    r= e - 0.05*z ;
    w= r / 0.01;
    }
    while(money<=0);     printf("%d\n",x+y+z+w);

}