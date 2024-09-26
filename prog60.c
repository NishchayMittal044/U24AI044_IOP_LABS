// PROGRAM TO SORT (SELECTION SORT) AN ARRAY
#include <stdio.h>
int main()
{
    int n, min_index;

    printf("Enter the Number of Terms :");
    scanf("%d", &n);

    int a[n], b[n];

    printf("Enter the Elements :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        min_index = i;
        for (int j = i + 1; j < n ; j++)
        {
        if (a[min_index] > a[j])
        {
            min_index = j;
        }
        
        
            
        }
        if (min_index != i)
        {
            int temp = a[min_index];
            a[min_index]=a[i];
            a[i] = temp;
        }
    }
    

    printf("The Sorted Array is :");
    for (int z = 0; z < n; z++)
    {
        printf("%d ", a[z]);
    }
    return 0;
}