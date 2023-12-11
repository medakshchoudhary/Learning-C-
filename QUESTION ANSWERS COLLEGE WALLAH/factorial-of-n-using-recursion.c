#include <stdio.h>

int factorial(int n){
    if (n<0){
        printf("Invalid");
        return -1; // why is it printing -1 
        // answer - The return -1; statement is used when the input n is less than 0 (negative). In this case, the function prints "Invalid" using printf("Invalid"); and returns -1 to indicate that the computation of the factorial is not valid for a negative input. However, in the main function, the program doesn't handle the case where factorial(n) returns -1. Instead, it prints whatever value is returned by factorial(n) without checking if it's -1. It might be a good idea to handle this case in the main function to provide more meaningful output or prompt the user to enter a non-negative number.
    }
    if (n==0) return 1;
    return n * factorial(n-1);
}
int main() {
    int n;
    printf("Enter the number whose factorial you want : ");
    scanf("%d",&n);
    printf("%d",factorial(n));
    return 0;
}