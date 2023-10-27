// complete this 
#include <stdio.h>
#include <stdbool.h>

int main() {
    int numberEntered,i=2;
    printf("Enter a number for prime check : ");
    scanf("%d", &numberEntered);
    bool check = true;

    for(;i<=numberEntered/2;i++){
        for(int c =1;;c++){
            if(numberEntered % c == 0){
                check = false;
                break;
            }
            printf("%",check)
        }
    }
    if(check && numberEntered>1){
        printf("Entered number is a prime number");
    }
    else{
        printf("Entered number is not a prime number");
    }
    return 0;
}