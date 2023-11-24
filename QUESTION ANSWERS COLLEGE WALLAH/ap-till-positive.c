// doubt - will this code run for eternity ?
// why does it stop after a particular value of continuos zeros if the condition is i>0 it still moved after i >0 why ?

#include <stdio.h>

int main() {
    for(float i = 100;i>0;i=i/2){
        printf("%f\n",i);
    }
    return 0;
}