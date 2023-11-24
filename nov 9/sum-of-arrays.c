#include <stdio.h>

int main() {
    // Declare arrays with a fixed length of 10
    int array1[10], array2[10], sumArray[10];

    // Input elements for the first array
    printf("Enter 10 elements for the first array:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    // Input elements for the second array
    printf("Enter 10 elements for the second array:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    // Calculate the sum array
    for (int i = 0; i < 10; i++) {
        sumArray[i] = array1[i] + array2[i];
    }

    // Display the sum array
    printf("Sum of the arrays:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", sumArray[i]);
    }

    return 0;
}
