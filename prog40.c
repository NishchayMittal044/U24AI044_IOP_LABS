// READ NUMBERS TILL A NEGATIVE NUNBER IS ENTERED AND CALCULATE SUM OF A LIST OF NUMBERS READ
#include <stdio.h>
int main()
{
    int i = 1, sum = 0;
    while (i > 0)
    {
        printf("Enter a number ");
        scanf("%d", &i);

        if (i >= 0)
        {
            sum = sum + i;
        }
    }
    printf("The sum is %d", sum);
    return 0;
}