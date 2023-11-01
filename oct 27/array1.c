#include <stdio.h>

int main() {
    int arr[]={25,11,7,75,56};
    int length = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    for (int i = 0; i<length;i++){
        if (arr[i]>max)
            max=arr[i]; // why were brakcets not used ask/check
    }
    printf("Largest element present in given aray : %d\n",max);
    return 0;
}