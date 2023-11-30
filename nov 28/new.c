#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    return a - b;
}

void multiply(int a, int b) {
    int result = a * b;
    printf("Result: %d\n", result);
}

void divide() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    if (b != 0) {
        int result = a / b;
        printf("Result: %d\n", result);
    } else {
        printf("Error: Division by zero\n");
    }
}

int main() {
    int num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%d", &num2);

    int result;
    switch (operator) {
        case '+':
            result = add(num1, num2);
            printf("Result: %d\n", result);
            break;
        case '-':
            result = subtract();
            printf("Result: %d\n", result);
            break;
        case '*':
            multiply(num1, num2);
            break;
        case '/':
            divide();
            break;
        default:
            printf("Invalid operator\n");
            break;
    }

    return 0;
}
