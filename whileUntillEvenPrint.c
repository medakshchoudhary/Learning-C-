#include <stdio.h>

int main() {
    int i=2,f;
    printf("Enter untill which number do you want to print even numbers : ");
    scanf("%d", &f);
    while(i<=f){
        printf("%d ", i);
        i+=2;
    }
    return 0;
}