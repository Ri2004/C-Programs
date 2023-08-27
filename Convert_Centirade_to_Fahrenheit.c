#include <stdio.h>

int centrigradeToFahrenheit(int temparature)
{
    float farh;
    farh = ((temparature * 9) / 5) + 32;

    return farh;
}
int main()
{
    int temparature;
    printf("Enter temparature in centigrade\n");
    scanf("%d", &temparature);

    float farh = centrigradeToFahrenheit(temparature);
    printf("Farhenheit Temparature of %d is: %.2f", temparature, farh);
    return 0;
}