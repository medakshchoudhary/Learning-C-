#include <stdio.h>

int main() {
    int numberOfLines;
    printf("Enter number of lines: ");
    scanf("%d", &numberOfLines);
    int nsp = numberOfLines/2;
    int stars = 1;
    int middleLine = numberOfLines/2 + 1;
    for(int i = 1;i<=numberOfLines;i++){
        for(int j = 1;j<=nsp;j++){
            printf("  ");
        }
        for(int j = 1;j<=stars;j++){
            printf("* ");
        }

        if(i<middleLine){
            nsp--;
            stars+=2;
        } 
        else {
            nsp++;
            stars-=2;
        }
        printf("\n");
    }
    return 0;
}