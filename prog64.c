// PROGRAM TO READ A 3*3 MATRIX AND PRINT SUM OF ALL ROWS.

#include <stdio.h>
int main()
{
    int a[3][3];
    int rsum;
    printf("Enter the Array");
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

    for (int i = 0; i < 3; i++)
    {
        rsum = 0;
        for (int j = 0; j < 3; j++)
        {
            rsum = rsum + a[i][j];
        }
        printf("Sum of the elements in row %d is %d \n ", i, rsum);
    }

    return 0;
}