// PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE
// ARRAYS.
#include <stdio.h>
int main()
{
    int a[10], b[10], c;
    printf("\nEnter numbers for arrays");
    for (int i = 0; i < 10; i++)
    {

        printf("\na%d = ", i);
        scanf("\n%d", &a[i]);

        printf("\nb%d = ", i);
        scanf("\n%d", &b[i]);

        c = a[i];
        a[i] = b[i];
        b[i] = c;
    }
    printf("\nThe swapped array a is");
    for (int i = 0; i < 10; i++)
    {

        printf("\na%d = %d", i, a[i]);
    }
    printf("\n\nThe swapped array b is");
    for (int i = 0; i < 10; i++)
    {

        printf("\nb%d = %d", i, b[i]);
    }

    return 0;
}
