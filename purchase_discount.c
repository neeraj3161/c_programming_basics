#include<stdio.h>
int main()
{
    int quantity,total_purchase_price,total_expense,final_bill;
    printf("Enter the quntity of item purchased with total price using space \n");
    scanf("%d %d",&quantity,&total_purchase_price);
    if (total_purchase_price>1000)
    {total_expense=total_purchase_price*10/100;
    final_bill=total_purchase_price-total_expense;
    printf("Your total purchase with 10 percent additional discout is %d",final_bill);}
    else
    {printf("Your total expense without discout is %d",total_purchase_price);}

    return 0;
}