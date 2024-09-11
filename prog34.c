// PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3...)
#include <stdio.h>
int main()
{
    int num, a = 0, c, b = 1;
    printf("Enter the number of terms you want to print :");
    scanf("%d", &num);
    c = num;
    for (int i = 0; i < num; i++)
    {

        if (i <= 1)
        {
            c = i;
        }
        else
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d\n", c);
    }

    return 0;
}