// PROGRAM TO FIND OUT MAX AND MIN FROM 'N' NOS.
#include <stdio.h>
int main()
{
    int N, a, max = 0, min = 2147483647; //"2147483647" IS THE MAXIMUM VALUE OF 32BIT INT DATA TYPE
    printf("Enter the No. of Numbers you want to enter :");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        printf("Enter the %d Number :", i);
        scanf("%d", &a);

        if (a >= max)
        {
            max = a;
        }
        if (a <= min)
        {
            min = a;
        }
    }
    printf("The Maximum Number is %d", max);
    printf("\nThe Minimum Number is %d", min);

    return 0;
}