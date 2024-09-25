// PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND
// TOTAL NO. OF EVERY ELEMENT.
#include <stdio.h>
int main()
{
    int a[10], ne = 0, no = 0;
    printf("Enter 10 Numbers :\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0)
        {
            ne = ne + 1;
        }
        else
        {
            no = no + 1;
        }
    }
    printf("The number of odd numbers = %d\n", no);
    printf("The number of even numbers = %d\n", ne);
    return 0;
}