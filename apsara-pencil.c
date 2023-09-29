#include <stdio.h>

int main() {
    int marks;
    char x;
    printf("Enter the marks of the student : ");
    scanf("%d", &marks);
    printf("Is the hanwriting good or not? press y for yes and n for no : ");
    scanf("%c%c", &x,&x); // two %c because enter after entering the marks is also considered as a char and we will not be able to process the next scanf
    if(x =='y' || x == 'Y')
    {printf("Extra marks for good handwriting : %d",marks+10);}
    else if(x =='n' || x == 'N')
    { printf("Marks obtained : %d",marks);}

    return 0;
}