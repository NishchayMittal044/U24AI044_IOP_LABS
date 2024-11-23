//WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS.
#include<stdio.h>
int main ()
{
    int n,max;
    printf("Enter the number of integers\n");
    scanf("%d",&n);
    int arr[n];
    int *ptr = arr;
    printf("Enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",ptr+i);
    }
    max = *(ptr);
    for (int i = 0; i < n; i++)
    {
        if (*(ptr + i) > max)
        {
            max = *(ptr + i);
        }

        
    }
    printf("The max element is %d\n",max);
    
    
    return 0;
}