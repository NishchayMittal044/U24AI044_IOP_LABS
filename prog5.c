// PROGRAM TO SWAP TWO VARIABLES USING THIRD VARIABLE
#include <stdio.h>
int main()
{
    int a, b, z;
    printf("Enter the first value to be assigned to a ");
    scanf("%d", &a);
    printf("Enter the first value to be assigned to b ");
    scanf("%d", &b);

    z = a;
    a = b;
    b = z;

    printf("The interchanged value of a :%d\n", a);
    printf("The interchanged value of b :%d", b);

    return 0;
}