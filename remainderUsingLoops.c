#include <stdio.h>

int main() {
    int numberEntered,sum = 0,remainder;
    printf("Enter any number for sum of its individual digits : ");
    scanf("%d",&numberEntered);
    for(int i = numberEntered; i>0;i--){
        remainder = numberEntered%10;
        sum = sum + remainder;
        numberEntered=numberEntered/10;
    }
    printf("%d",sum);
    return 0;
}