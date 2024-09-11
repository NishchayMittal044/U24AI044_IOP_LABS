// PROGRAMN TO CHECK WHETHER A NUMBER IS PALINDROM OR NOT
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
    if (c == sum)
    {
        printf("The number %d is Palindrom", c);
    }
    else
    {
        printf("%d is not a Palindrom", c);
    }

    return 0;
}