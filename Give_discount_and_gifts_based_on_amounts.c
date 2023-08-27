#include <stdio.h>
int main()
{
    int total_cost, paid_price, bill;
    float discount;
    char gift[200];

    printf("Enter Cost:\n");
    scanf("%d", &total_cost);

    if (total_cost <= 2000)
    {
        discount = 5.00/100.00;

        bill =(total_cost * discount);
        paid_price = (total_cost - bill);

        char gift1[200] = "Calculator";
        printf("Your Total Cost is %d , so you got discount %.2f, so you've to be paid %d and you got gift %s", total_cost, discount, paid_price, gift1);
    }

    else if (total_cost >= 2001 && total_cost <= 5000)
    {
        discount = 10.00 / 100.00;
        bill = (total_cost * discount);
        paid_price = (total_cost - bill);

        char gift2[200] = "School Bag";
        printf("Your Total Cost is %d, so you got discount %.2f, so you've to be paid %d and you got gift %s", total_cost, discount, paid_price, gift2);
    }

    else if (total_cost >= 5001 && total_cost <= 10000)
    {
        discount = 15.00 / 100.00;
        bill = (total_cost * discount);
        paid_price = (total_cost - bill);

        char gift3[200] = "Wall Clock";
        printf("Your Total Cost is %d , so you got discount %.2f, so you've to be paid %d and you got gift %s", total_cost, discount, paid_price, gift3);
    }

    else
    {
        discount = 20.00 / 100.00;
        bill = (total_cost * discount);
        paid_price = (total_cost - bill);

        char gift4[200] = "Wrist Watch";
        printf("Your Total Cost is %d , so you got discount %.2f, so you've to be paid %d and you got gift %s", total_cost, discount, paid_price, gift4);
    }

    return 0;
}