#include <stdio.h>

int main() {
    int numberEntered,factorialSum=1;
    printf("Enter the number whoes factorial you want : ");
    scanf("%d", &numberEntered);
    for(int i = numberEntered;i>0;i--){
        factorialSum = factorialSum*i;
    }
    printf("%d", factorialSum);
    
    return 0;
}