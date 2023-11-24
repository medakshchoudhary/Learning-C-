#include <stdio.h>

int main() {
    int a,b,c,d;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    printf("Enter third number : ");
    scanf("%d",&c);
    printf("Enter fourth number : ");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("FIRST NUMBER is the greatest");
    }
    else if(b>a && b>c && b>d){
        printf("SECOND NUMBER is the greatest");
    }
    else if(c>a && c>b && c>d){
        printf("THIRD NUMBER is the greatest");
    }
    else if(d>a && d>b && d>c){
        printf("FOURTH NUMBER is the greatest");
    }
    return 0;
}