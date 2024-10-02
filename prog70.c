// PROGRAM TO READ AN ARRAY AND PRINT THE OCCURRENCE OF ANY PARTICULAR
// ELEMENT IN THE ARRAY.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements you want in the array :");
    scanf("%d", &n);

    int a[n], search, occ = 0;

    printf("\nEnter the elements :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nThe entered array is ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nEnter the element you want to check");
    scanf("%d", &search);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == search)
        {
            occ++;
        }
    }

    printf("\nThe number times the searched number occured is %d", occ);

    return 0;
}