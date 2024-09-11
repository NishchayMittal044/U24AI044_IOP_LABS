// PROGRAM TO READ THREE NOS. AND PRINT MAX. USING CONDITIONAL OPERATOR [? :]
#include <stdio.h>
int main()
{
    int num1, num2, num3, a;
    printf("Enter the three numbers");
    scanf("%d%d%d", &num1, &num2, &num3);
    a = (num1 > num2 ? num1 : num2) > num3 ? (num1 > num2 ? num1 : num2) : num3;
    printf("The greatest number is %d", a);

    return 0;
}