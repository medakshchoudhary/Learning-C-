#include <stdio.h>

void main(){
    float a, b;
    int x;
    printf("1. CIRCLE 2. RECTANGLE 3. SQUARE Enter your selection: ");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("Enter the radius: ");
        scanf("%f", &a);
        printf("The area of the circle is: %.2f\n", 3.14*a*a);
        printf("The circumference of the circle is: %.2f\n", 3.14*2*a);
        break;
    case 2:
        printf("Enter the length: ");
        scanf("%f", &a);
        printf("Enter the breadth: ");
        scanf("%f", &b);
        printf("The area of the rectangle is: %.2f\n", a*b);
        printf("The perimeter of the rectangle is: %.2f\n", 2*(a+b));
        break;
    case 3:
        printf("Enter the side: ");
        scanf("%f", &a);
        printf("The area of the square is: %.2f\n", a*a);
        printf("The perimeter of the square is: %.2f\n", 4*a);
        break;

    default:
        printf("Invalid input...! ");
        break;
    }
}