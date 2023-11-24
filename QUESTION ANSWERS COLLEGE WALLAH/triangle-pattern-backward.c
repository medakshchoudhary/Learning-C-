#include <stdio.h>

int main() {
    int numberOfLines;
    printf("Enter the number of lines that you want for the pattern : ");
    scanf("%d",&numberOfLines);
    int newnumberOfLines = numberOfLines;
    for(int i = 1;i<=numberOfLines;i++){
        for(int j = 1;j<=newnumberOfLines;j++){
            printf("*");
        }
        printf("\n");
        newnumberOfLines--;        
    }
    return 0;
}