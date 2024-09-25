// Printing the Pattern
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

#include <stdio.h>

int main()
{
    int n, i, k, a = 1;
    n = 4;
    a = n - 1;
    for (k = 1; k <= n; k++)
    {
        for (i = 1; i <= a; i++)
            printf(" ");
        a--;
        for (i = 1; i <= 2 * k - 1; i++)
            printf("*");
        printf("\n");
    }
    a = 1;
    for (k = 1; k <= n - 1; k++)
    {
        for (i = 1; i <= a; i++)
            printf(" ");
        a++;
        for (i = 1; i <= 2 * (n - k) - 1; i++)
            printf("*");
        printf("\n");
    }
    return 0;
}