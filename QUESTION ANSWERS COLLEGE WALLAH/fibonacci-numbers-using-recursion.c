#include <stdio.h>

int fibonacci(int n){
    if (n==1) return 1;
    if (n==2) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    printf("Enter the term upto which you want the fibonacci sequence : ");
    scanf("%d",&n);
    printf("Fibonacci series for its first %d terms is %d",n,fibonacci(n));
    return 0;
}