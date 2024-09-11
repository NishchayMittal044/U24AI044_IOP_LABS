// PROGRAM TO SWAP TWO VARIABLES WITHOUT USING THIRD VARIABLE
#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the value of x :");
    scanf("%d", &x);
    printf("Enter the value of y :");
    scanf("%d", &y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("The interchanged value of x is :%d\n", x);
    printf("The interchanged value of y is :%d", y);

    return 0;
}