// PROGRAM TO PRINT 2,4,6,8,10,12......N
#include <stdio.h>
int main()
{
    int n;
    printf("Enter till which term you want to print ");
    scanf("%d", &n);

    for (int i = 2; i <= n;)
    {
        printf("%d\n", i);
        i = i + 2;
    }

    return 0;
}