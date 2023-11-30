// this is advanced stuff not for mid sems  

#include <stdio.h>

int main() {
    int number;
    printf("Enter the number of rows for the cross pattern : ");
    scanf("%d", &number);
    for(int i = 1;i<=number;i++){
        for(int j = 1;j<=number;j++){
            if(i==j || i+j==number+1){
                printf("*");
            }
            else
                printf(" ");
        }
        // for printing a second cross next to the first one
        for(int j = 1;j<=number;j++){
            if(i==j || i+j==number+1){
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}