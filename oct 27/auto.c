#include <stdio.h>

void fun1();
int main() {
    int a=5;
    fun1();
    fun1();
    {
        auto int a = 10;
        printf("inside block : %d\n", a);

    }
    {
        //printf("inside block 2 : %d\n", a);
    }
    printf("outside the main block : %d\n", a);
    return 0;
}
void fun1(){
    int a = 50,b=90;
    a=a+3;
    b=b-10;
    printf("outside the main fun a is : %d\n and b is %d\n", a,b);
}