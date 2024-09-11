// PROGRAM TO CALCULATE FACTORIAL OF A NO.
#include <stdio.h>
int main()
{
    int num;
    int b = 1;
    int i = 1;
    printf("Enter the number you want factorial of\n");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial Does Not Exist");
    }
    if (num == 0)
    {
        printf("The Factorial of 0 is 1");
    }
    else
    {
        for (i = 1; i <= num; i++)
        {
            b = b * i;
        }

        printf("The Factorial of %d is %d", num, b);
    }

    return 0;
}