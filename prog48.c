// Printing the Pattern
//     1
//    12
//   123
//  1234
// 12345

#include <stdio.h>
int main()
{
    int c;
    for (int i = 2; i <= 6; i++)
    {
        for (int j = 5; j >= 1; j--)
        {
            if (j < i)
            {
                c = i - j;

                printf("%d", c);
            }
            else
            {

                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}