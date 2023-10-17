#include <stdio.h>

int main() {
    int i=2,n;
    printf("Enter the limit upto which even number you want to print : ");
    scanf("%d",&n);
    do
    {
        printf("%d\n",i);
        i+=2;
    }while(i<=n);
    return 0;
}