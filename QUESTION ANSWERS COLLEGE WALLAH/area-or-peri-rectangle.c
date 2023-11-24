#include <stdio.h>

int main() {
    int l,b;
    printf("Enter length of rectangle : ");
    scanf("%d",&l);
    printf("Enter breadth of rectangle : ");
    scanf("%d",&b);
    int area=l*b,peri=2*(l+b);
    if(area>peri){
        printf("Area is greater than the perimeter for this rectangle.");
    }
    else if(area<peri){
        printf("Area is not greater than the perimeter for this rectangle.");
    }
    return 0;
}