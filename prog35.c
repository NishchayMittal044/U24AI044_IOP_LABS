// READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF N
#include <stdio.h>
int main()
{
    int N, r = 0, sum = 0, c = 0, sum2 = 0;
    printf("Enter the number :");
    scanf("%d", &N);

    while (N > 0)
    {

        r = N % 10;
        sum = sum + r;
        N = N / 10;
    }

    while (sum > 0)
    {
        c = sum % 10;
        sum2 = sum2 + c;
        sum = sum / 10;
    }
    printf("SUM OF DIGITS IS %d", sum2);

    return 0;
}