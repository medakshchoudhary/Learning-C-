#include <stdio.h>

int main() {
    int matrix[3][3];
    int rowSum[3] = {0};
    int colSum[3] = {0};

    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }

    printf("Original Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Sum of Rows:\n");
    for (int i = 0; i < 3; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }

    printf("Sum of Columns:\n");
    for (int j = 0; j < 3; j++) {
        printf("Column %d: %d\n", j + 1, colSum[j]);
    }

    return 0;
}
