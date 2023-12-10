#include <stdio.h>

int fact(int n){
    int factorial = 1;
    for(int i = 1;i<=n;i++){
        factorial *= i;
    }
    return factorial;
}
int ncr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main() {
    int numerOfLines;
    printf("Enter the number of lines upto which you want the pattern : ");
    scanf("%d",&numerOfLines);
    for(int i = 0;i<=numerOfLines;i++){
        // how to make this perfect - the pattern
        for(int k = i;k<=numerOfLines;k++){
            printf(" ");
        }
        for(int j = 0;j<=i;j++){
            int ansforncr = ncr(i,j);
            printf("%d ",ansforncr);
        }
        printf("\n");
    }
    return 0;

}