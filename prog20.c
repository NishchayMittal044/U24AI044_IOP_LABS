// PROGRAM WHICH WILL WORK LIKE A SIMPLE CALCULATOR USING SWITCH-CASE
#include <stdio.h>
int main()
{
    int num1, num2, op, eq;

    printf("Enter the first number\n");
    scanf("%d", &num1);

    printf("Enter the operation you want to perform (Enter 1 for '+',2 for '-',3 for '*',4 for '/')\n");
    scanf(" %d", &op);
    printf("Enter the second number\n");
    scanf("%d", &num2);

    switch (op)
    {
    case 1:
        eq = num1 + num2;
        printf("%d + %d = %d", num1, num2, eq);
        break;

    case 2:
        eq = num1 - num2;
        printf("%d - %d = %d", num1, num2, eq);
        break;

    case 3:
        eq = num1 * num2;
        printf("%d * %d = %d", num1, num2, eq);
        break;

    case 4:
        if (num2 == 0)
        {
            printf("Not Defined");
            return 1;
        }
        else
        {
            eq = num1 / num2;
            printf("%d / %d = %d", num1, num2, eq);
        }
        break;

    default:
        printf("Operator Invalid");
        break;
    }
    return 0;
}