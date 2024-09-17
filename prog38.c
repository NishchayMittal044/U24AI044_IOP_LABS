// PROGRAM TO PRINT 1,4,9,16,25,......N
#include <stdio.h>
int main()
{
    int n;
    printf("Enter till which term you want to print ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i * i);
    }

    return 0;
}