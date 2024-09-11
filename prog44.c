// PROGRAM TO CALCULATE THE AMOUNT TO BE PAID BY THE CONSUMER TO AN ELECTRIC DISTRIBUTION COMPANY
#include <stdio.h>
int main()
{
    float unit, amt;
    printf("Enter the Number of Consumed Units :");
    scanf("%f", &unit);
    if (unit <= 200)
    {
        amt = unit * 0.5;
    }
    if (unit > 200 && unit <= 400)
    {
        amt = 100 + (unit - 200) * 0.65;
    }
    if (unit > 400 && unit <= 600)
    {
        amt = 230 + (unit - 400) * 0.80;
    }
    if (unit > 600)
    {
        amt = 425 + (unit - 600) * 1.25;
    }
    printf("The Amount to be paid is : %f", amt);

    return 0;
}