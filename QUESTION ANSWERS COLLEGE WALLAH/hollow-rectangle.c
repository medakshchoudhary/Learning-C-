#include <stdio.h>

int main() {
    int length, breadth;
    printf("Enter the length for the hollow rectangle pattern : ");
    scanf("%d", &length);
    printf("Enter the breadth for the hollow rectangle pattern : ");
    scanf("%d", &breadth);
    for(int i = 1;i<=breadth;i++){
        for(int j = 1;j<=length;j++){
            if(i == 1 || i == breadth || j == length || j == 1){
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