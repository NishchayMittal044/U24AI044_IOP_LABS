// Write a program in C to rotate an array by N positions.

#include <stdio.h>
void main()
{
    int num;
    printf("Enter the number of elements you want inn the array ");
    scanf("%d", &num);
    printf("Enter the elements ");
    int a[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    int rotate_point;
    printf("Enter the number of positions you want to rotate by ");
    scanf("%d", &rotate_point);
    int b[num];
    for (int i = 0; i < num; i++)
    {
        if (i + rotate_point < num)
        {
            b[i + rotate_point] = a[i];
        }
        if (i + rotate_point >= num)
        {
            b[i + rotate_point - num] = a[i];
        }
    }
    printf("The array after rotation is : \n");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", b[i]);
    }
}