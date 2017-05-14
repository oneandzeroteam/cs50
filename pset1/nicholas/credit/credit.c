#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    long long cardNum;
    char digits[20];
    int digitlength, sum = 0;
    
    printf("Number: ");
    cardNum = GetLongLong();
    sprintf(digits, "%lld", cardNum);

    digitlength =  ( cardNum==0 ) ? 1 : (int)log10(cardNum)+1;
    
    for(int i = digitlength -2 ; i >= 0 ; i -= 2){
        int digit = (digits[i] - '0') * 2;
        if( digit / 10 != 0) 
            sum += digit / 10;
        sum += digit % 10;
    }
    for(int i = digitlength -1 ; i >= 0 ; i -= 2){
        sum += (digits[i] - '0');
    }
    if(sum % 10 != 0){
        printf("INVALID\n");
    }
    else{
        switch(digits[0]-'0'){
            case 3:
                printf("AMEX\n");
                break;
            case 4:
                printf("VISA\n");
                break;
            case 5:
                printf("MASTERCARD\n");
                break;
            default:
                printf("INVALID\n");
                break;
        }
    }
}