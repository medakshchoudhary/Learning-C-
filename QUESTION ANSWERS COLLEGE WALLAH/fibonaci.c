#include <stdio.h>

int main() {
    int sum=0,a=0,b=1,num;
    printf("Upto which fibonaci number do you want the series : ");
    scanf("%d",&num);
    // i = 2 because 1st number should be 0 for fibonaci series
    for(int i = 2;i<=num;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("%d",sum);
    return 0;
}