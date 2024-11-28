// WRITE A PROGRAM IN C TO PRINT ALL PERMUTATIONS OF A GIVEN STRING USING POINTERS.
// THE PERMUTATIONS
// OF THE STRING ARE: ABCD ABDC ACBD ACDB ADCB ADBC BACD BADC BCAD BCDA BDCA BDAC CBAD
// CBDA

#include <stdio.h>
#include <string.h>

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void pmt(char *a, int first, int last)
{
    int i;
    if (first == last)
        printf("%s\n", a);
    else
    {
        for (i = first; i <= last; i++)
        {
            swap((a + first), (a + i));
            pmt(a, first + 1, last);
            swap((a + first), (a + i));
        }
    }
}

int main()
{
    char str[10];
    printf("Enter the character\n");
    scanf("%s", str);
    int n = strlen(str);
    pmt(str, 0, n-1);
    return 0;
}