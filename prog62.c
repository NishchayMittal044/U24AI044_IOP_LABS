// PROGRAM TO REVERSE AN ARRAY.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements you want in the array");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter the Elements :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // REVERSING THE ARRAY
    for (int i = 0, j = (n - 1); i < n; i++, j--)
    {

        b[j] = a[i];
    }
    printf("The Array was :");
    for (int z = 0; z < n; z++)
    {
        printf("%d ", a[z]);
    }
    printf("The Inverted Array is :");
    for (int t = 0; t < n; t++)
    {
        printf("%d ", b[t]);
    }

    return 0;
}