// PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TO N

#include <stdio.h>
int main()
{
    int N, a;
    int es = 0;
    int os = 0;

    // int i = 1;
    printf("Enter the value of N :");
    scanf("%d", &N);
    a = N;

    for (N; N > 0; N--)
    {
        if (N % 2 == 0)
        {
            es = es + N;
        }
        else
        {
            os = os + N;
        }
    }

    printf("The value of sum of even numbers between 1 to %d is %d\n", a, es);
    printf("The value of sum of odd numbers between 1 to %d is %d", a, os);

    return 0;
}