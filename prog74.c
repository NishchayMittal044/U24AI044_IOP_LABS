// Given are one dimensional arrays A and B which are sorted in ascending order.
// Write a program to merge them into a single sorted array C that contains every
// item form array A and B, in ascending order.

#include <stdio.h>
int main()
{
    // FIRST ARRAY
    int n1, min_index1;

    printf("\nEnter the Number of Terms for the First array :");
    scanf("%d", &n1);

    int a1[n1];
    // CREATING THE ARRAY
    printf("\nEnter the Elements :");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a1[i]);
    }
    // FINDING MINIMUM ELEMENT INDEX FOR SELECTION SORT
    for (int i = 0; i < n1 - 1; i++)
    {
        min_index1 = i;
        for (int j = i + 1; j < n1; j++)
        {
            if (a1[min_index1] > a1[j])
            {
                min_index1 = j;
            }
        }
        if (min_index1 != i)
        {
            int temp = a1[min_index1];
            a1[min_index1] = a1[i];
            a1[i] = temp;
        }
    }
    // PRINTING THE SORTED FIRST ARRAY
    printf("\nThe Sorted First Array is :");
    for (int z = 0; z < n1; z++)
    {
        printf("%d ", a1[z]);
    }

    // SECOND ARRAY
    int n2, min_index2;

    printf("\nEnter the Number of Terms for the Second array :");
    scanf("%d", &n2);

    int a2[n2];
    // CREATING THE ARRAY
    printf("\nEnter the Elements :");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &a2[i]);
    }
    // FINDING MINIMUM ELEMENT INDEX FOR SELECTION SORT
    for (int i = 0; i < n2 - 1; i++)
    {
        min_index2 = i;
        for (int j = i + 1; j < n2; j++)
        {
            if (a2[min_index2] > a2[j])
            {
                min_index2 = j;
            }
        }
        if (min_index2 != i)
        {
            int temp = a2[min_index2];
            a2[min_index2] = a2[i];
            a2[i] = temp;
        }
    }
    // PRINTING THE SORTED SECOND ARRAY
    printf("\nThe Sorted Second Array is :");
    for (int z = 0; z < n2; z++)
    {
        printf("%d ", a2[z]);
    }

    // THIRD ARRAY (COMBINING ELEMENTS OF ARRAY 1 AND ARRAY 2)
    int n3, min_index3;

    n3 = n1 + n2;

    int a3[n3];
    // CREATING THE ARRAY
    for (int i = 0; i < n1; i++)
    {
        a3[i] = a1[i];
    }
    for (int j = 0; j < n2; j++)
    {
        a3[n3 - n2 + j] = a2[j];
    }
    // PRINTING THE ARRAY OBTAINED AFTER COMBINING
    printf("\nThe Array obtained after combining is :");
    for (int z = 0; z < n3; z++)
    {
        printf("%d ", a3[z]);
    }
    // FINDING MINIMUM ELEMENT INDEX FOR SELECTION SORT
    for (int i = 0; i < n3 - 1; i++)
    {
        min_index3 = i;
        for (int j = i + 1; j < n3; j++)
        {
            if (a3[min_index3] > a3[j])
            {
                min_index3 = j;
            }
        }
        if (min_index3 != i)
        {
            int temp = a3[min_index3];
            a3[min_index3] = a3[i];
            a3[i] = temp;
        }
    }
    // PRINTING THE SORTED COMBINED ARRAY
    printf("\nThe Sorted Combined Array is :");
    for (int z = 0; z < n3; z++)
    {
        printf("%d ", a3[z]);
    }

    return 0;
}