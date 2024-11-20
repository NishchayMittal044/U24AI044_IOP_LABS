// PROGRAM TO READ A 3*3 MATRIX AND PRINT ITS TRANSPOSE.
#include <stdio.h>
int main()
{

    int a[3][3], t[3][3];

    printf("Enter the matrix elements :");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The Marix is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Transposing the elements
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            t[j][i] = a[i][j];
        }
    }

    printf("The Transposed Marix is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
