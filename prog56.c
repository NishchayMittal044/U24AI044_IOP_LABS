// PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO. OF POSITIVE,
// NEGATIVE, AND ZERO ELEMENTS
#include <stdio.h>
int main()
{
    int a[10], np = 0, nn = 0, n0 = 0;
    printf("Enter Numbers :\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] < 0)
        {
            nn = nn + 1;
        }
        if (a[i] == 0)
        {
            n0 = n0 + 1;
        }
        if (a[i] > 0)
        {
            np = np + 1;
        }
    }
    printf("The number of negative numbers is %d", nn);
    printf("The number of zero numbers is %d", n0);
    printf("The number of positive numbers is %d", np);

    return 0;
}