// PROGRAM TO READ THREE NOS. AND PRINT MAX USING LOGICAL OPERATOR  (&&)
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter the three numbers\n");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3 == 1)
    {
        printf("The greatest number is %d", num1);
    }
    if (num2 > num3 && num2 > num1 == 1)
    {
        printf("The greatest number is %d", num2);
    }
    else
    {
        printf("The greatest number is %d", num3);
    }

    return 0;
}