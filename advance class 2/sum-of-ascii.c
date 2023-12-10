#include <stdio.h>

int main() {
    char str[100];
    int sum = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        sum += (int)str[i];
    }

    printf("Sum of ASCII values: %d\n", sum);

    return 0;
}
