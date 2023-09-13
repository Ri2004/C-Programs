// Armstrong Number
#include<stdio.h>
#include<math.h>
int main()
{
    int num, temp, rem, length = 0, sum = 0;
    printf("Enter A Number\n");
    scanf("%d", &num);

    temp = num;
    for (; temp > 0;)
    {
        length++;
        temp /= 10;
    }
    temp = num;
    while(temp>0)
    {
        rem = temp % 10;
        sum = sum + (pow(rem, length));
        temp = temp / 10;
    }

    if(num == sum)
        printf("%d is an Armstrong Number", num);

    else
        printf("%d is not an Armstrong Number", num); 

    return 0;
}