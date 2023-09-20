#include <stdio.h>

int main() {
    double r, formula;
    printf("Entter the radius of the circle of which the circumfrence you want and then hit enter :\n");
    scanf("%lf", &r);
    formula = 2*r*3.14;
    printf("The circumfrence of the circle for radius %lf is %lf", r, formula);
    return 0;
}