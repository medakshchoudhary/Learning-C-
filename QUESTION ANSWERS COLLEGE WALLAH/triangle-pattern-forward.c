#include <stdio.h>

int main() {
    int numberOfLines;
    printf("Enter the last line that you want for the pattern : ");
    scanf("%d",&numberOfLines);
    for(int i = 1;i<=numberOfLines;i++){
        for(int j = 1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}