// PROGRAM TO READ AN ARRAY OF 10 INTEGER AND PRINT SUM OF NUMBERS
#include <stdio.h>
int main()
{
    int a[10], sum = 0;
    printf("Enter Numbers :\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("The sum of numbers is %d", sum);

    return 0;
}