#include<stdio.h>

void main(){
    int i = 0;
    loop_start:
    if(i<5){
        printf("%d",i);
        i++;
        goto loop_start;
    }
    printf("\nLoop ended\n");

}