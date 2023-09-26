#include <stdio.h>

int main() {
    double r,area,peri;
    printf("Enter the radius of the circle below of which the area you want an hit enter : ");
    scanf("%lf", &r);
    area = 3.14*r*r;
    peri = 2*3.14*r;
    printf("Area of circle for radius %.2lf is %.2lf\n", r, area);
    printf("Perimeter of circle for radius %.2lf is %.2lf\n", r, peri); // .2 means only 2 decimal places will be displayed
    return 0;
}