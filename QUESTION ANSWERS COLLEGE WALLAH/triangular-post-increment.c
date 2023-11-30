#include <stdio.h>

int main() {
    int numberOfLines;
    printf("Enter the number of lines for the cross pattern : ");
    scanf("%d", &numberOfLines);
    int k = 1;
    for(int i = 1;i<=numberOfLines;i++){
        for(int j = 1;j<=i;j++){
            printf("%d ",k++);
        }
        printf("\n");
    }
    return 0;
}