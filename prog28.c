// PROGRAM TO CHECK WHETHER A NUMBER IS ARMSTRONG OR NOT
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
        sum = sum + a * a * a;
        num = num / 10;
    }
    if (sum == c)
    {
        printf("%d is armstrong", c);
    }
    else
    {
        printf("The number is not an armstrong number");
    }

    return 0;
}