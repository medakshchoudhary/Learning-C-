#include <stdio.h>

int main() {
    int num,upto;
    printf("Enter the number of which you want the table : ");
    scanf("%d",&num);
    printf("Enter the number upto which you want the table to be written : ");
    scanf("%d",&upto);
    int h = 0;
    for(int i=1;i<=upto;i++){
        h = h+num;
        printf("%d X %d = %d\n",num,i,h);
    }
    return 0;
}