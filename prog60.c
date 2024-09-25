// PROGRAM TO SORT (SELECTION SORT) AN ARRAY.
#include <stdio.h>

int main()
{
    int n;

    printf("Enter the Number of Terms :");
    scanf("%d", &n);

    int a[n];

    printf("Enter the Elements :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }

    printf("The Sorted Array is :");
    for (int z = 0; z < n; z++)
    {
        printf("%d ", a[z]);
    }

    return 0;
}