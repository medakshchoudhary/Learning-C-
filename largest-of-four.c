#include <stdio.h>

int main() {
    int a, b, c, d, big;
    printf("Enter number 1 : ");
    scanf("%d", &a);
    printf("Enter number 2 : ");
    scanf("%d", &b);
    printf("Enter number 3 : ");
    scanf("%d", &c);
    printf("Enter number 4 : ");
    scanf("%d", &d);
    big = (a>b)?((a>c)?(a>d?a:d):(c>d?c:d)):((b>c)?(b>d?b:d):(c>d?c:d));
    printf("%d", big);
    return 0;
}