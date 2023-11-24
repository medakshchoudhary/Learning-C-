#include <stdio.h>

int main() {
    int patternNumber;
    printf("Enter the number of lines you want for the pattern : ");
    scanf("%d",&patternNumber);
    for(int i =1;i<=patternNumber;i++){
        for(int j = 1;j<=patternNumber;j++){
            if(i == patternNumber/2 + 1 || j == patternNumber/2 + 1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}