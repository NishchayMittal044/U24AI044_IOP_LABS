// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD.

#include <stdio.h>

int oddeve(int a)
{
    if (a % 2 == 0)
    {
        printf("The input number is Even");
    }
    else
    {
        printf("The input number is Odd");
    }
    return 1;
}

int main()
{
    int num;
    printf("Enter the Number :");
    scanf("%d", &num);
    oddeve(num);
    return 0;
}