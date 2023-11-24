#include <stdio.h>

int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int sum = 0;
    for(;num>0;){
        int digit = num%10;
        if(digit%2==0){
            sum+=digit;
        }
        num=num/10;
    }  
    printf("%d",sum);  
    return 0;
}