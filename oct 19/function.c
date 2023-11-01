#include <stdio.h>

int a = 50;
void fun1();

int main() {
    int a = 5;
    fun1();
    fun1();{
        int a = 10;
    }
    void fun1(){
        int a = 30,b=90;
        
    }
    return 0;
}