// PROGRAM TO READ TWO NOS. AND CALCULATE POWER WITHOUT
// USING HEADER FILE(<MATH.H>).
#include <stdio.h>
int main()
{
    int num1, num2, i;
    int b = 1;
    printf("Enter the base value\n");
    scanf("%d", &num1);
    printf("Enter the power\n");
    scanf("%d", &num2);

    if (num2 == 0)
    {
        printf("The value is 1");
    }
    else
    {

        while (num2 != 0)
        {
            b = b * num1;
            --num2;
        }
        printf("The value is %d", b);
    }

    return 0;
}