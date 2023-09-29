#include <stdio.h>
#include <math.h>

int main() {
    float x2,x1,y2,y1,distance;
    printf("Enter the points x2,x1,y2,y1 respectively : ");
    scanf("%f%f%f%f",&x2,&x1,&y2,&y1);
    distance = sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));
    printf("Distance between these points is : %f",distance);
    return 0;
}