#include <stdio.h>

int main() {
    int integer;
    printf("Enter any integer : ");
    scanf("%d",&integer);
    if(integer<0){
        integer = -integer; // or multiply by -1
        printf("Absolute value of enetered integer is : %d",integer);
    }
    else{
        printf("Entered number is already absolute : %d",integer);
    }
    
    return 0;
}