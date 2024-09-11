// PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO.
#include <stdio.h>
int main()
{
    int num, a, c, sum = 0;
    printf("Enter the number :");
    scanf("%d", &num);
    c = num;
    while (num > 0)
    {
        a = num % 10;
        sum = sum + a;
        num = num / 10;
    }
    printf("The sum of the digits of %d is %d", c, sum);
    return 0;
}