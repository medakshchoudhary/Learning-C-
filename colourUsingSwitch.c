#include <stdio.h>

int main() {
    char c;
    printf("Enter the color code: ");
    scanf("%c", &c);
    switch(c) {
        case 'r':
        case 'R':
        printf("You entered color RED.\n");
        break;
        case 'g':
        case 'G':
        printf("You entered color GREEN.\n");
        break;

        case 'b':
        case 'B':
        printf("You entered color BLUE.\n");
        break;

        
    }



    return 0;
}