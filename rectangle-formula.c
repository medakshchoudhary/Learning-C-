#include <stdio.h>

int main() {
    double l,b,area,peri;
    printf("Enter the length of the side of the rectangle and hit enter: ");
    scanf("%lf", &l);
    printf("Enter the breadth of the side of the rectangle and hit enter: ");
    scanf("%lf", &b);
    area = l*b;
    peri = 2*(l+b);
    printf("The area of rectangle is %lf",area);
    printf("The perimeter of rectangle is %lf",peri);
    return 0;
}