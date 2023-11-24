#include <stdio.h>
int avg(int[],int);
int main() {
    int mark[5] = {99,98,95,96,100},size,average;
    size = sizeof(mark)/sizeof(mark[0]);
    average = avg(mark,size);
    printf("average=%d", average);
    printf("size of the the main fuction array is: %d", sizeof(mark));    
return 0;
}
int avg(int mark1[]){
    int i,sum=0,avg;
    for (i = 0 ; i<5 ; ++i){
        sum += mark1[i];
        }
        avg = sum/5;
        return avg;
}