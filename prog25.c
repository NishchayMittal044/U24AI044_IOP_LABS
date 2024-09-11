// PROGRAM TO PRINT TABLE OF ANY NO.
#include <stdio.h>
int main()
{
    int num, i, m;
    printf("Enter the number you want multiplication table of\n");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++)
    {
        m = num * i;
        printf("%d X %d = %d\n", num, i, m);
    }

    return 0;
}