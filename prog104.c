// AN ENUMERATION WITH COLOR NAMES CAN BE USED IN A SWITCH STATEMENT TO DISPLAY
// THE HEXADECIMAL COLOR CODE.
#include <stdio.h>
typedef enum colour_code
{
    red,
    green,
    blue,

} cc;
int main()

{

    printf("Enter:\n0 for Red\n1 for Green\n2 for Blue\n3 for Black\n4 for White\n");
    cc colour;
    scanf("%d",&colour);
    switch (colour)
    {
    case 0:
        printf("It is Red with hexcode #FF0000");
        break;
    case 1:
        printf("It is Green with hexcode #00FF00");
        break;
    case 2:
        printf("It is Blue with hexcode #0000FF");
        break;
    case 3:
        printf("It is Black with hexcode #000000");
        break;
    case 4:
        printf("It is White with hexcode #FFFFFF");
        break;
    default:
        printf("Its neither Red, Green or Blue");
    }
    return 0;
}