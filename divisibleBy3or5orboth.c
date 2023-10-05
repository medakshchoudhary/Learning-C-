#include <stdio.h>

int main() {
    int numberEntered;
    printf("Enter a number to check divisibility for 3 or 5 or both : ");
    scanf("%d", &numberEntered);
    if (numberEntered%3 == 0)
    {printf("Hi");} 
    if (numberEntered%5 == 0)
    {printf("Hello");} // only two ifs not an else if because then we can check for 15 logical thinking is applied more 

    // if (1){ // this 1 makes if true automatically
    //     (numberEntered%3==0)?((numberEntered%5==0)?printf("HiHello"):printf("Hi")):printf("Hello");
    // } //ternary operator and this is faster than normal if and else statements
    return 0;
}