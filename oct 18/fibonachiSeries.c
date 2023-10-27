// download google tasks in laptop 
// update this 

#include <stdio.h>

int main() {
    int end,fibonachiSum=0,fibonachi0=0,fibonachi1=1;
    printf("Near which number do you want the fibonachi series? : ");
    scanf("%d",&end);
    printf("Fibonachi Series : \n");
    for(int i = 0;i<end;i++) {
        fibonachiSum = fibonachi0 + fibonachi1;
        fibonachi0 = fibonachi1;         
    }
    printf("%d\n",fibonachiSum);
    return 0;
}