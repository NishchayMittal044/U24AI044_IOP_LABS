// IMPLEMENT A FUNCTION NAMED AS FLIP; WHICH WILL TAKE A NUMBER AS INPUT AND FLIP ITS
// LAST N DIGITS
// FOR EXAMPLE FLIP(123, 2)= 132 ; (HERE N=2) FLIP(12345,3)= 12543 (HERE N=3).
#include <stdio.h>
#include <string.h>
#include <math.h>

void reverse(int num)
{
    while (num > 0)
    {
        printf("%d", num % 10);
        num /= 10;
    }
}

void flip(int num, int shift)
{
    printf("%d", num / (int)(pow(10, shift)));
    int num2 = (num) % (int)(pow(10, shift));
    
    reverse(num2);
}
int main()
{
    int number, last_n;
    printf("Enter number and the no. of digits from last you want \n");
    scanf("%d %d", &number, &last_n);
    printf("The flipped number is :\n");
    flip(number, last_n);
}