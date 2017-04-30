#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
    //char credit[16];
    long long credit_number;
    int sum=0;
    long long creditNum[16];
    int processNum[16];
    for (int i=0;i<16;i++){
    processNum[i]=0;    
    }
    
    printf("Number: ");
    scanf("%lld", &credit_number);
    //printf("1. credit number %lld\n",credit_number);
    
    for (int i=16;i>0;i--){
        int j=16-i;
        creditNum[j]=credit_number/(10^(i-1));
        printf("%lld\n",creditNum[16-i]);
    }
    for (int k=0;k<8;k++){
        processNum[k*2]=creditNum[k*2+1]*2;
        if (processNum[k*2]>10){
        processNum[k*2+1]=processNum[k*2]%10;
        processNum[k*2]=processNum[k*2]/10;
        }
        int sum=sum+processNum[k*2]+processNum[k*2+1];
    }
    for (int k=0;k<8;k++){
        int sum=sum+creditNum[k*2];
    }
    if (sum%10==0){
        switch(creditNum[0]){
            case 3:
            printf("AMEX\n");
            break;
            case 4:
            printf("MASTERCARD\n");
            break;
            case 5:
            printf("VISA");
            break;
            
            default:
            printf("INVALID\n");
            printf("this is creditNum[0]\n%lld\n",creditNum[0]);
        }
    }
    else{
        printf("INVALID\n");
        printf("%d",sum%10);
    }

}