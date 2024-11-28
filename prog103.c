// WRITE A C PROGRAM TO DEFINE A MACRO TO FIND BIGGEST NUMBER OF TWO GIVEN NUMBERS.
#include <stdio.h>
#define max(x, y) ((x) > (y) ? (x) : (y))
int main()
{
    int x, y;
    printf("Enter 2 numbers :\n");
    scanf("%d %d", &x, &y);
    printf("The maximum of the two numbers is  %d", max(x, y));
}