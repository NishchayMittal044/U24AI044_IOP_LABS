// Printing the Pattern
//      1
//     121
//    12321
//   1234321
//  123454321
#include <stdio.h>
int main()
{
    int i, j, k, n, v;
    n = 5;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf(" ");
        }
        n = n - 1;
        v = 0;
        for (k = 1; k <= 2 * i - 1; k++)
        {
            if (k > i)
            {
                v = v - 1;
                printf("%d", v);
            }
            else
            {
                v = v + 1;
                printf("%d", v);
            }
        }
        printf("\n");
    }
    return 0;
}