// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT.
#include <stdio.h>
int palin(int num)
{
    int a, sum = 0, q;
    a = num;
    while (num > 0)
    {
        q = num % 10;
        sum = sum * 10 + q;
        num = num / 10;
    }
    if (a == sum)
    {
        printf("the number %d is PALINDROM", a);
    }
    else
    {
        printf("the number is not PALINDROM");
    }
    return 1;
}
int main()
{
    int num;
    printf("Enter any number \n");
    scanf("%d", &num);
    palin(num);
    return 0;
}