// WRITE A FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI
// NUMBERS .TEST THE FUNCTION FOR N=5,10,AND 15.

#include <stdio.h>
int fibonacci(int num)
{
    int a = 0, c, b = 1;
    c = num;
    for (int i = 0; i < num; i++)
    {

        if (i <= 1)
        {
            c = i;
        }
        else
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d\t", c);
    }
    return 0;
}
int main()
{
    int n;
    printf("\nEnter no. of elements you want in the fibonacci series\n");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}