//WRITE A FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE ,SAY
// X AND Y .

#include<stdio.h>
int interchange(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("\nThe new value of x is %d",x);
    printf("\nThe new value of y is %d",y);
    return 1;
}
int main()
{
    int x, y;
    printf("\nEnter the value of x and y\n");
    scanf("\n%d%d",&x,&y);
    interchange(x,y);
    return 0;
}