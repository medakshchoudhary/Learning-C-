#include <stdio.h>

int main() {
    int orignal,numberEntered,reversedNumber=0;
    printf("Enter a number to be revered and checked for palindrome number : ");
    scanf("%d",&numberEntered);
    orignal = numberEntered;
    for(;orignal>0;){
        reversedNumber=reversedNumber*10 + orignal%10;
        orignal=orignal/10;
    }
    if(numberEntered==reversedNumber){
        printf("Entered number is a palindrome number");
    }
    else{
        printf("Entered number is not a palindrome number");
    }
    return 0;
}