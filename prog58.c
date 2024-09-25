// PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDATION OF THOSE
// ARRAYS INTO THIRD.
#include <stdio.h>
int main()
{
    int a[10], b[10], sum[10];
    printf("\nEnter numbers for array a");
    for (int i = 0; i < 10; i++)
    {

        printf("\na%d = ", i);
        scanf("\n%d", &a[i]);
    }

    printf("\nEnter numbers for array b");
    for (int i = 0; i < 10; i++)
    {
        printf("\nb%d = ", i);
        scanf("\n%d", &b[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        sum[i] = a[i] + b[i];
        printf(" \na%d + b%d = %d", i, i, sum[i]);
    }

    return 0;
}