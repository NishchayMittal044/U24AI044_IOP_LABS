// WRITE A PROGRAM TO COPY ELEMENT OF ONE ARRAY TO ANOTHER ARRAY USING POINTERS.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr1;
    int *arr2;
    int n;
    arr1 = (int *)malloc(n * sizeof(int));
    arr2 = (int *)malloc(n * sizeof(int));
    printf("Enter the number of elements");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr1 + i);
    }
    for (int i = 0; i < n; i++)
    {
        *(arr2 + i) = *(arr1 + i);
    }
    printf("The copied array is\n");
    for (int i = 0; i < n; i++)
    {

        printf("%d ", *(arr2 + i));
    }

    free(arr1);
    free(arr2);

    return 0;
}