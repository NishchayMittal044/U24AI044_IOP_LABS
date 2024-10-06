// READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE
#include <stdio.h>
int main()
{
    int num, flag = 0;
    printf("Enter the number you want to check ");
    scanf("%d", &num);
    for (int i = 2; i < num/2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("The number %d is Composite Number", num);
    }
    else
    {
        printf("The number %d is a Prime Number", num);
    }
    return 0;
}
