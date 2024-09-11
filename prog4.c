// PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO CENTIGRADE DEGREES
#include <stdio.h>
int main()
{
    float c, f;
    printf("Enter Temperature in Farhenheit :");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("The Temperature in Celsius is :%f", c);

    return 0;
}