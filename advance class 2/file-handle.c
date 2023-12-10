#include <stdio.h>

int main() {
    FILE *fill;
    fill = fopen("file.txt", "w");
    fprintf(fill, "Hello World");
    fclose(fill);
    return 0;
}