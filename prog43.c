//PROGRAM TO CALCULATE THE COMMISSION FOR A SALES REPRESENTATIVE AS PER THE PARTICULAR SALES AMOUNT 
#include <stdio.h>
int main()
{
    float s, c;
    printf("Enter the Sales in Rupees ");
    scanf("%f", &s);
    if (s <= 500)
    {
        c = s * 0.05;
    }
    if (s > 500 && s <= 2000)
    {
        c = 35 + (s - 500) * 0.10;
    }
    if (s > 2000 && s <= 5000)
    {
        c = 185 + (s - 2000) * 0.12;
    }
    if (s > 5000)
    {
        c = s * 0.125;
    }
    printf("The Commission according to the Sales %f is %f ", s, c);
    return 0;
}
