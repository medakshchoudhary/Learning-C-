// take positive input and tell if it is divisible by 5 or 3 but not divisible by 15

#include <stdio.h>

int main() {
    int num;
    printf("Enter any number for divisibility check : ");
    scanf("%d",&num);
    // if(num%5==0 || num%3==0){
    //     if(num%15!=0){
    //         printf("Number is divisble by 5 or 3 but not by 15");
    //     }
    //     else{
    //         printf("Number is divisble by 15");
    //     }
    // }
    // else{
    //     printf("Does not match the required condition.");
    // }

    // using multiple conditions we can solve this by :
    if((num%5==0 || num%3==0) && num%15!=0){ // this wont work becuase && has more priority as compared to || // correction is add brackets  
        printf("Number is divisble by 5 or 3 but not by 15");
    }
    else{
        printf("Does not match the required condition.");
    }

    return 0;
}