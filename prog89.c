// WRITE A PROGRAM TO COPY ONE ARRAY INTO ANOTHER ARRAY .ORDER OF ELEMENTS OF
// SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAY.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr1;
    int *arr2;
    int n, i, j;
    arr1 = (int *)malloc(n * sizeof(int));
    arr2 = (int *)malloc(n * sizeof(int));
    printf("Enter the number of elements");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", arr1 + i);
    }
    for (i = 0, j = n - 1; i < n; i++, j--)
    {
        *(arr2 + j) = *(arr1 + i);
    }
    printf("The original array is\n");
    for (i = 0; i < n; i++)
    {

        printf("%d ", *(arr1 + i));
    }
    printf("\nThe copied and inverted array is\n");
    for (i = 0; i < n; i++)
    {

        printf("%d ", *(arr2 + i));
    }
    free(arr1);
    free(arr2);

    return 0;
}