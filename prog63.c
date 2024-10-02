// PROGRAM TO READ A 3*3 MATRIX AND FINDOUT MAX AND MIN ELEMENT.
#include <stdio.h>
int main()
{
    int a[3][3];
    int min, max;
    printf("Enter the array");
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
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

    min = max = a[0][0];

    // for minimum
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    }
    // for maximum
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }
    printf("The minimum value is %d", min);
    printf("The maximum value is %d", max);

    return 0;
}