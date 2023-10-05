#include <stdio.h>

int main() {
    int age;
    printf("Enter your age for eligibility check : ");
    scanf("%d", &age);
    if(60>=age&&age>18){
        if (25>=age&&age>18){
            printf("Eligible for Job Grade A");
        }
        if (50>=age&&age>=25){
            printf("Eligible for Job Grade B");
        }
        if (60>=age&&age>=50){ // instead of if we can use else also 
            printf("Eligible for Job Grade C");
        }
    }
    else
    {
        printf("Not eligible for any Job Grade");
    }
    
    return 0;
}