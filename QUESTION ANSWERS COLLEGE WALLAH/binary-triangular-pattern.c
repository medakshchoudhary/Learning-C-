#include <stdio.h>

int main() {
    int numberOfLines;
    printf("Enter the number of lines for the binary pattern : ");
    scanf("%d", &numberOfLines);
    for(int i = 1;i<=numberOfLines;i++){
        for(int j = 1;j<=i;j++){
            if((i+j)%2==0)
                printf("1 ");
            else
                printf("0 ");   
        }
        printf("\n");
    }
    return 0;
}