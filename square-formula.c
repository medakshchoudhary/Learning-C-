#include <stdio.h>

int main() {
    double side,area,peri;
    printf("Enter the length of the side of the square and hit eneter: ");
    scanf("%lf", &side);
    area = side*side;
    peri = 4*side;
    printf("The area of square is %lf",area);
    printf("The perimeter of square is %lf",peri);
    return 0;
}