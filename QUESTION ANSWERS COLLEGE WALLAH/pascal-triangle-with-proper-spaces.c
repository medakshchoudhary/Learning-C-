#include<stdio.h>
void main()
{
    int rows, coef=1, space, i, j;
    printf("Enter the number of rows: ");               //input from the user
    scanf("%d", &rows);
    for(i=0;i<rows;i++)                                 //loop through each row
    {
        for(space=1;space<=rows-i;space++)           //print spaces before the numbers
              printf(" ");      
        {
           
            for(j=0;j<=i;j++)                         //printf numbers in each row
            {
                if(j==0 || i==0)                       //calculate and print the coeff
                coef=1;
                else
                coef=coef*(i-j+1)/j;
                printf("%d ", coef);                 // Print the coeff with padding

            }
            printf("\n");                              //Move to the next line for the next row
        }
    }
}                   

