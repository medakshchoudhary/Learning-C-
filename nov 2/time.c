#include <stdio.h>
#include<stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    int random=rand()%100;
    printf("Random number : %d\n",random);
    return 0;
}