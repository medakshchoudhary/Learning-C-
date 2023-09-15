#include <stdio.h>

int main() {
    int var1,var2,sum;
    printf("Enter two numbers : \n");
    scanf("%d %d",&var1,&var2);

    sum = var1 + var2;
    printf("%d + %d = %d",var1,var2,sum);
    return 0;
}