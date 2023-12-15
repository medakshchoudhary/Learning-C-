#include <stdio.h>

int powerAtoB(int a,int b){
    if (b%2==0){
        return a * powerAtoB(b/2,b/2);
    }
    else if (b%2==1){
        return a * powerAtoB((b/2)+1,b/2);
    }
}

int main() {
    int a,b;
    printf("Enter the base number : ");
    scanf("%d",&a);
    printf("Enter the power number : ");
    scanf("%d",&b);
    printf("%d raised to power %d is %d",a,b,powerAtoB(a,b));    
    return 0;

}