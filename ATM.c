#include<stdio.h>
int main()
{ 
    char ch;
    ch = printf("Choose\n C for Credit\n D for Debit\n B for Balance\n");
    scanf("%c",&ch);
    
    int c,d,b,i;
    printf("Enter the amount: ");
    scanf("%d",&i);


    switch(ch)
    {
        case 'C':
            printf("Enter the amount to be credited: ");
            scanf("%d",&c);
            printf("Your new balance is %d",i+c);
            break;
        case 'D':
            printf("Enter the amount to be debited: ");
            scanf("%d",&d);
            printf("Your new balance is %d",i-d);
            break;
        case 'B':
            printf("Your balance is %d",i);
            break;
        default:
            printf("No case matched!");
    }
    return 0;
}