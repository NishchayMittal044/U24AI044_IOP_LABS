// PROGRAM TO CALCULATE SIMPLE INTEREST
#include <stdio.h>
int main()
{
    float p, r, t, SI;
    printf("Enter Principle :");
    scanf("%f", &p);
    printf("Enter Rate :");
    scanf("%f", &r);
    printf("Enter Time :");
    scanf("%f", &t);
    SI = p * r * t / 100;
    printf("The Simple Interest is :%f", SI);
    return 0;
}