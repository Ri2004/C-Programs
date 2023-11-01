#include<stdio.h>
int main()
{
    int cost_price, selling_price, profit, loss;
    printf("Enter Cost price and selling price of 12 bananas\n");
    scanf("%d %d", &cost_price, &selling_price);

    profit = (selling_price - cost_price) / 12 * 25;
    loss = (cost_price - selling_price) / 12 * 25;
    
    printf("The Profit and Loss of selling 25 bananas are: %d rupees and %d rupees", profit, loss);
    return 0;
}