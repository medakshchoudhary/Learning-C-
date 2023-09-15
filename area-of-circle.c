#include <stdio.h>

int main() {
    double r,formula;
    printf("Enter the radius of the circle below of which the area you want an hit enter : \n");
    scanf("%lf", &r);
    formula = 3.14*r*r;
    printf("Area of circle for radius %lf is %lf\n", r, formula);
    
    return 0;
}