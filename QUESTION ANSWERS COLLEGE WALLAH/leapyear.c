#include <stdio.h>

int main() {
    int year;
    printf("Enter any year : ");
    scanf("%d",&year);
    if(year%4==0){
        printf("LEAP YEAR DETECTED");
    }
    else{
        printf("NOT A LEAP YEAR DETECTED");
    }
    return 0;
}