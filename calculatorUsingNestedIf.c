#include <stdio.h>

int main() {
    int num1,num2,selectedOption,sum,sub,mul,div,remainder;
    printf("Enter num1 for arithmetic operation : ");
    scanf("%d",&num1);
    printf("Enter num2 for arithmetic operation : ");
    scanf("%d",&num2);

    printf("Add : 1\n");    
    printf("Subtract : 2\n");    
    printf("Multilply : 3\n");    
    printf("Division : 4\n");    
    printf("Remainder : 5\n");    
    printf("Enter the operation you want : ");
    scanf("%d",&selectedOption);
    
    if(selectedOption==1){
        sum = num1+num2;
        printf("%d",sum);
    }
    else if(selectedOption==2){
        sub = num1-num2;
        printf("%d",sub);
    }
    else if(selectedOption==3){
        mul = num1*num2;
        printf("%d",mul);
    }
    else if(selectedOption==4){
        div = num1/num2;
        printf("%d",div);
    }
    else{
        remainder = num1%num2;
        printf("%d",remainder);
    }
    return 0;
}