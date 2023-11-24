#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    printf("Enter third number : ");
    scanf("%d",&c);

    // can be optimised in a better way using only two ifs and more logic 
    
    if(a>b){
        if(a>c){
            printf("First number is the greatest.");
        }
    }
    if(b>a){
        if(b>c){
            printf("Second number is the greatest.");
        }
    }
    if(c>a){
        if(c>b){
            printf("Third number is the greatest.");
        }
    }
    return 0;
}