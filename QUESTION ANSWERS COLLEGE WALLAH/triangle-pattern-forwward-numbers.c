#include <stdio.h>

int main() {
    int lastline;
    printf("Enter the last line number: ");
    scanf("%d", &lastline);
    int newLastline=lastline;
    for(int i=1;i<=lastline;i++){
        for(int j=1;j<=newLastline;j++){
            printf("%d ", j);
        }
        newLastline--;
        printf("\n");
    }
    return 0;
}