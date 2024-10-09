
// WRITE A FUNCTION THAT RETURN 1 IF ITS ARGUMENT IS PRIME NUMBER AND RETURN
// ZERO OTHERWISE.

#include <stdio.h>

int prime(int num)
{
    int flag = 0;
    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n;
    printf("Enter Number :");
    scanf("%d", &n);
    printf("%d", prime(n));
}
