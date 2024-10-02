// PROGRAM TO PERFORM LINEAR SEARCH ON AN ARRAY.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements you want in the array :");
    scanf("%d", &n);

    int a[n], search, index;

    index = -1;

    printf("Enter the elements :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The entered array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nEnter the element you want to search :");
    scanf("%d", &search);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == search)
        {
            index = i;
        }
    }

    if (index == -1)
    {
        printf("The searched element is not in the array ");
    }
    else
    {
        printf("The searched element is at index number %d", index);
    }

    return 0;
}