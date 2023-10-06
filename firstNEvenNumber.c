#include <stdio.h>

int main() {
    int a=0,i=1,e;
    printf("Enter how many first n even umbers you want : ");
    scanf("%d", &e);
    while(i<=e){
        i++;
        a+=2;
        printf("%d\n", a);
    }
    return 0;
}   