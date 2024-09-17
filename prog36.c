// PROGRAM TO PRINT 1,3,5,7,9......N
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number if value you want to print ");
    scanf("%d", &n);

    for (int i = 1; i <= n;)
    {
        printf("%d\n", i);
        i = i + 2;
    }

    return 0;
}