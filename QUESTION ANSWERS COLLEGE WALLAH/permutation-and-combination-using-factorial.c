#include <stdio.h>

int fact(int n){
    int factorial = 1;
    for(int i = 1;i<=n;i++){
        factorial = factorial*i;
    }
    return factorial;
}
int ncr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int npr(int n,int r){
    return fact(n)/fact(n-r);
}
int main() {
    int n,r;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter r : ");
    scanf("%d",&r);
    int ansforncr = ncr(n,r);
    int ansfornpr = npr(n,r);
    printf("nCr = %d\n",ansforncr);
    printf("nPr = %d\n",ansfornpr);
    return 0;
}