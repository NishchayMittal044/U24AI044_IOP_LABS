// PROGRAM TO READ TWO NOS. AND PERFORM SPECIFIC TASK (USING
// ARITHMETIC OPERATOR)AND THIS PERFORM USING SWITCH-CASE.(CASE
// IN CHAR FORM).
#include <stdio.h>
int main()
{
    char c;
    float num1, num2, eq;

    printf("Enter the first number\n");
    scanf("%f", &num1);

    printf("Enter the operation you want to perform\n");
    scanf(" %c", &c);
    printf("Enter the second number\n");
    scanf("%f", &num2);

    switch (c)
    {
    case '+':
        eq = num1 + num2;
        break;

    case '-':
        eq = num1 - num2;
        break;

    case '*':
        eq = num1 * num2;
        break;

    case '/':
        if (num2 == 0)
        {
            printf("Not Defined");
            return 1;
        }
        else
        {
            eq = num1 / num2;
        }
        break;

    default:
        printf("Operator Invalid");
        return 1;
        break;
    }

    printf("%f %c %f = %f", num1, c, num2, eq);
    return 0;
}