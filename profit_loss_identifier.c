// If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred
// loss. Also determine how much profit he made or loss he incurred.
#include<stdio.h>
int main()
{
    float cost_price,selling_price,profit,loss;
    printf("Enter your product's cost price : ");
    scanf("%f",&cost_price);
    printf("\nEnter your product's selling price : ");
    scanf("%f",&selling_price);
    if (selling_price>cost_price){
        profit=selling_price-cost_price;
        printf("\nHurray you made a profit of Rs. %f",profit);
    }
    else{
        loss=cost_price-selling_price;
        printf("\nWoops there was a loss for Rs. %f",loss);
    }
    return 0;
}

