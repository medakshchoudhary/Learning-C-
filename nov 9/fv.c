#include <stdio.h>

int main() {
    int arr[3];  // Declare an array with a size of 3
    int n = 0;   // Current number of elements in the array

    printf("Enter two elements for the array:\n");
    for (int i = 0; i < 2; i++) {
        scanf("%d", &arr[i]);
        n++;  // Increase the number of elements in the array
    }

    if (n != 2) {
        printf("Array must have exactly 2 elements to combine.\n");
    } else {
        // Combine the first two elements and store the result in the third element
        arr[2] = arr[0] + arr[1];
        n++;  // Increase the number of elements in the array

        printf("Array after combining the first two elements:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}