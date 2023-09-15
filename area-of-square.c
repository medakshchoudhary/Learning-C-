#include <stdio.h>

int main() {
    double side,formula;
    printf("Enter the length of the side of the square : \n");
    scanf("%lf",&side);
    formula = side*side;
    printf("%lf",formula);
    return 0;
}