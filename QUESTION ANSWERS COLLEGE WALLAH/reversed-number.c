//  starting and last zero is not getting accepted for reverse

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number to be reversed : ");
    scanf("%d",&num);
    int reverse = 0;
    for(;num>0;){
        reverse = reverse*10 + num%10;
        num=num/10;
    }
    printf("Reversed number : %d",reverse);
    return 0;
}