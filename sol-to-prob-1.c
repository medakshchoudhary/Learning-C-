#include <stdio.h>
#include <math.h>

int main() {
    double l,b,peri;
    printf("Enter the length of the rectangle : ");
    scanf("%lf",&l);
    printf("Enter the breadth of the rectangle : ");
    scanf("%lf",&b);
    l = sqrt((l*b)/3.14);
    peri = 2*3.14*l;
    printf("The perimeter of the circle which has the area same as that of rectangle is : %lf", peri);
    return 0;
}