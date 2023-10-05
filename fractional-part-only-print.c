#include <stdio.h>

int main() {
    float x;
    printf("Enter a decimal number whoes fractional part you want : ");
    scanf("%f", &x);
    int y = x;
    float fractionalPart = x - y; // used logic of greatest integer function 
    printf("The fractional part of the above entered number is : %f", fractionalPart);      
    return 0;
}