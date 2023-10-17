#include <stdio.h>

int main() {
    int num1,num2,digits=0,amstrongSum=0,r,answer=1;
    printf("Enter starting number : ");
    scanf("%d",&num1);
    printf("Enter ending number : ");
    scanf("%d",&num2);
    for(int i=num1;i<num2;){
        amstrongSum=0;
        for(int new = i;new>0;){
            amstrongSum=0;
            for(r=i;r>0;){
                digits++;
                r=r/10;
            }
            for(int k =1;k<=digits;k++){
                r=new%10;
                answer = answer*r;
                amstrongSum = amstrongSum+answer;
                
            }
            new=new/10;
        }
        if(amstrongSum == i){
            printf("%d is an amstrong number\n",i);
        }
        i++;
    }
    return 0;
}