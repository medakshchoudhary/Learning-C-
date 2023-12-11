// self solved 
#include <stdio.h>

int printNtimes(int k,int n){
    printf("%d\n",k);
    if (k==n) return 0;
    k++;
    printNtimes(k,n);
}

int main() {
    int k = 1;
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    printNtimes(k,n);
    return 0;
}