// PROGRAM TO CHECK WHETHER A NO IS PRIME OR NOT.
#include <stdio.h>
int main()
{
    int num, flag = 0;
    printf("Enter the number you want to check ");
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("The number %d is not a Prime Number", num);
    }
    else
    {
        printf("The number %d is a Prime Number", num);
    }
    return 0;
}
