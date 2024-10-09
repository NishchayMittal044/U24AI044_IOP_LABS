// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS ARMSTRONG OT NOT.

#include<stdio.h>

int armstrong(int num)
{
    int temp,a,sum = 0;
    temp = num;
    while (num > 0)
    {
        a = num % 10;
        sum = sum + a * a * a;
        num = num / 10;
    }
    if (sum == temp)
    {
        printf("%d is armstrong", temp);
    }
    else
    {
        printf("The number is not an armstrong number");
    }
    return 1;
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    armstrong(n);
    return 0;
}