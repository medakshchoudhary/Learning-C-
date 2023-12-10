#include <stdio.h>

int main() {
    int i=10;
    int *p;
    p=&i;
    printf("%d\n",*p);
    printf("%p\n",p);
    p++;
    printf("%p\n",p);
    printf("%d\n",*p);
    

    return 0;
}