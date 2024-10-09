// 82) WRITE A FUNCTION TO CALCULATE (NCR) FACTORIAL OF A GIVEN NUMBERS.
// NCR = (!N/(!R*!(N-R)));

#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    int factorial = 1;
    for (int i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}

int nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int n, r;
    printf("Enter n and r for nCr :");
    scanf("%d%d", &n, &r);
    printf("The value of %dC%d is %d", n, r, nCr(n, r));
    return 0;
}