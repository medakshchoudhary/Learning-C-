#include <stdio.h>

int main() {
    char str[50];
    printf("Enter the string : ");
    scanf("%[^\n]s",str);
    int len = 0;
    for(int i = 0;;i++){
        if(str[i]=='\0'){
            break;
        }
        else{
            len++;
        }
    }
    printf("String Length = %d",len);
    return 0;
}