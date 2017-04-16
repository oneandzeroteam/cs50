#include<stdio.h>
#include<cs50.h>

void mario2 (int height)
{
    int i,j,k;

for(i=1;i<2*(height+1);i++)
{
   
if(i<=height){
   
      for(j=0;j<=height-i;j++){
           printf(" ");
       }
       for(k=height-i+1;k<=height;k++){
           printf("#");
       }
     
   }

else if (i <=height+2){
   
   while(i<=height+2)
   {
   printf(" ");
   i++;
   }
}

else if (i>=height+3 && i<=2*height+2) {
   for(j=height+3;j<=height+2+i;j++)
   {
       printf("#");
   }
   for(k=height+3+i;k<=2*height+2;k++)
   {
       printf(" ");
   }
}
    }
   
    printf("\n");

}

int main(void)
{
printf("Height: ");
int height = get_int();
mario2(height);

}