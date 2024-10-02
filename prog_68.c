// PROGRAM TO READ A 3*3 MATRIX AND MULTIPLY THEIR VALUE AND STORE THEM
// IN THIRD MATRIX.
#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], smulti[3][3];

    // THE FIRST  MATRIX
    printf("Enter the Matrix elements of the First Matrix :");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The First Marix is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    // THE SECOND MATRIX
    printf("Enter the Matrix elements of the Second Matrix:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("The Second Marix is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    // MULTIPLIACTION MATRIX
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            smulti[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                smulti[i][j] = smulti[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    // PRINTING THE MULTIPLICATION MATRIX
    printf("\nThe Multiplication Matrix is \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", smulti[i][j]);
        }
        printf("\n");
    }

    return 0;
}