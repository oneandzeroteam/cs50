#include<stdio.h>
#include<string.h>
#include<math.h>
#include<cs50.h>

int main(){
    
    printf("Number: ");
    
    long long cardNum = get_long_long();
    char digits[17];
    int i=0, sum = 0;
    int digitslength = 0;
    
    sprintf(digits, "%lld", cardNum);
    
    if(digits[i]!='\0'){
        i++;
        digitslength++;
    }
    
    for(i=0; i < digitslength -2; i++){
    
    if(i%2!=0){
        
       if(2*digits[i]>=10){
           sum += 2*digits[i]%10;
           sum += 10;
       }
       else
            sum += 2*digits[i];
    }
    else
        sum+= digits[i];
    }
        
    if(sum%10!=0){
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