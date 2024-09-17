// READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a Number ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%d is a Composite Number", num);
            break;
        }
        else
        {
            printf("%d is a Prime Number", num);
            break;
        }
    }

    return 0;
}