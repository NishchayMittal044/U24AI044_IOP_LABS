// READ A NUMBER N AND PRINT FACTOR OF N
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Number of which Factors are required ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}