// PROGRAM TO CHECK WHETHER A NO. IS EVEN OR ODD

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Number");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("The Entered Number is Even");
    }
    else
    {
        printf("The Number is Odd");
    }

    return 0;
}
