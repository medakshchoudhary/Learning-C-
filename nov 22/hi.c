#include <stdio.h>

int main() {
    int a,b,i;
    printf("Enter the a & b values \n : ");
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++){
        a++;
    }
    printf("The sum of a & b is : %d",a);
    return 0;
}