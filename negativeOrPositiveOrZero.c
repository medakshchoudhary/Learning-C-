#include <stdio.h>

int main() {
    int numberEntered;
    printf("Enter any integer : ");
    scanf("%d", &numberEntered);
    if (numberEntered>0 || numberEntered<0) {
        if(numberEntered>0){
            printf("Enter number is positive");
        }
        if(numberEntered<0){
            printf("Enter number is negative");
        }
    }
    else{
        printf("Entered number is zero");
    }
    return 0;
}