#include <stdio.h>

int printNtimes(int n){
    if (n==0) return 0;
    printf("%d\n",n);
    printNtimes(n-1);
}

int main() {
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    printNtimes(n);
    return 0;
}