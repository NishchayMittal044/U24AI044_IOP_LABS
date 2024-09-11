// PROGRAM TO REVERSE A GIVEN NUMBER
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
        sum = sum * 10 + a;
        num = num / 10;
    }
    printf("The Reverse of %d is %d", c, sum);
    return 0;
}