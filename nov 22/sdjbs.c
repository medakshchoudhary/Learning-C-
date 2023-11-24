#include <stdio.h>
#include <math.h>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double modulus(double a, double b) {
    return int(a) % int(b);
}

// double modulus(double a, double b) {
//     return fmod(a, b);
// }

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Division by zero is not possible\n");
        return 0;
    }
}

int main() {
    char op;
    double num1, num2, result;
    printf("Enter the operator (+, -, *, /, %%): ");
    scanf("%c", &op);
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    switch (op) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        case '%':
            result = modulus(num1, num2);
            break;
        default:
            printf("Invalid operator\n");
            return 1; // Exit the program with an error code
    }
    printf("Result: %.2lf\n", result);
    return 0;
}