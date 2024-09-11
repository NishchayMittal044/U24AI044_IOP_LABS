// WRITE A C PROGRAM TO FIND THE VALUE OF Y USING
// 1+x where n=1
// 1+x/n where n=2
// Y(x,n) = 1 +x^n when n=3
// 1 + nx when n>3 or n<1

#include <stdio.h>
int main()
{
    int y, x, n;
    printf("Enter the value of x");
    scanf("%d", &x);
    printf("Enter the value of n");
    scanf("%d", &n);

    if (n == 1)
    {
        y = 1 + x;
    }
    if (n == 2)
    {
        y = 1 + x / n;
    }
    if (n == 3)
    {
        y = 1 + x * x * x;
    }
    else
    {
        y = 1 + n * x;
    }

    printf("The value of y is %d", y);

    return 0;
}