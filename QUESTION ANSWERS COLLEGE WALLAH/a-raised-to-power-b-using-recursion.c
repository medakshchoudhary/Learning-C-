#include <stdio.h>

int powerAtob(int a,int b){
    if (a == 0 && b == 0 ) return 0;
    if (b==0) return 1;
    return a * powerAtob(a,b-1);
}

int main() {
    int a,b;
    printf("Enter the base number : ");
    scanf("%d",&a);
    printf("Enter the power number : ");
    scanf("%d",&b);
    printf("%d raised to power %d is %d",a,b,powerAtob(a,b));    
    return 0;

}