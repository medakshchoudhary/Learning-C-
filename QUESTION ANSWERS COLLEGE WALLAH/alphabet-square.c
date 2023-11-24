#include <stdio.h>

int main() {
    int howMuchAlphabets;
    printf("Enter the number upto whih first alphabets you ant to be printed : ");
    scanf("%d",&howMuchAlphabets);
    howMuchAlphabets = howMuchAlphabets + 64;
    for(int i=65;i<=howMuchAlphabets;i++){
        for(int j=65;j<=howMuchAlphabets;j++){
            char ch = (char)j;
            printf("%c ",ch); // we can directly add j instead of ch without doing typecasting
        }
        printf("\n");
    }
    return 0;
}