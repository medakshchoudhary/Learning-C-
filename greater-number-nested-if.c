#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter 3 numbers for greatest number check : ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b){
        if(a>c){
            printf("%d is the greatest number",a);
        }
        else{printf("%d is the greatest number)",b);}

    }
    else{
        if(b>c){
            printf("%d is the greatest number",b);
        }
        else{printf("%d is the greatest number",c);}

    }
    return 0;
}