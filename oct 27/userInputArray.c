#include <stdio.h>

int main() {
    int max[50],i,n;
    printf("Enter the number of elements you want in your array: ");
    scanf("%d",&n);
    printf("Enter the values of an array : ");
    for(i=0;i<n;i++){
        scanf("%d",&max[i]);
    }
    for(i=0;i<n;i++){
        printf("The entered %d element of array is : %d \n",i,max[i]);
    }
    return 0;
}