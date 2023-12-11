#include <stdio.h>

int swap(int* x,int* y){
    int temp = *x;
    *x = *y;
    *y = temp;  
    return *x,*y;
}

int main() {
    int x,y;
    printf("Enter first number : ");
    scanf("%d",&x);
    printf("Enter second number : ");
    scanf("%d",&y);
    printf("Normal : %d %d\n",x,y);
    swap(&x,&y);
    printf("Swapped : %d %d",x,y);
    return 0;
}