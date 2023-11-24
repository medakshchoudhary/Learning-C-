#include <stdio.h>

int main() {
    int sellingprice,orderprice;
    printf("Enter the selling price of the product : ");
    scanf("%d",&sellingprice);
    printf("Enter the cost price of the product : ");
    scanf("%d",&orderprice);
    if(sellingprice>orderprice){
        printf("Profit");
    }
    else if(sellingprice<orderprice){
        printf("Loss");
    }
    else{
        printf("Neither profit nor loss");
    }
        
    return 0;
}