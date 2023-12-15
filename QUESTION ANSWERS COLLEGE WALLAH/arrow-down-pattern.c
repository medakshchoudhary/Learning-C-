#include <stdio.h>

int main() {
    int n;
    printf("Enter number of arrows : ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        // for(int k = ){
        //     printf(" ");
        // }
        for(int j = n;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}