#include <stdio.h>

int main() {
    int numberOfLines;
    printf("Enter the number of lines for the pyramid pattern : ");
    scanf("%d", &numberOfLines);
    for(int i = 1;i<=numberOfLines;i++){
        int a = i-1;
        for(int j = 1;j<=numberOfLines-i;j++){
            printf("  ");
        }
        for(int j = 1;j<=i;j++){
            printf("%d ",j);
        }
        for(int k = 1;k<=i-1;k++){
            printf("%d ",a);
            a--;
        }
        printf("\n");
    } 
    return 0;
}