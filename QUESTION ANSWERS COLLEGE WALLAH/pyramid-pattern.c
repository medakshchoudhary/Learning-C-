#include <stdio.h>

int main() {
    int numberOfLines;
    printf("Enter the number of lines for the pyramid pattern : ");
    scanf("%d", &numberOfLines);
    for(int i = 1;i<=numberOfLines;i++){
        for(int j = 1;j<=numberOfLines-i;j++){
            printf("  ");
        }
        for(int j = 1;j<=i;j++){
            printf("* ");
        }
        // for(int j = 1;j<=i-1;j++){
        //     printf("* ");
        // }
        printf("\n");
    }
    return 0;
}