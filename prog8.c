// EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS .WRITE A C PROGRAM TO CONVERT THIS INTO NUMBER OF DAY,HOURS AND MINUTES
#include <stdio.h>
int main()
{
    float d, h, m;
    m = 31558150 / 60;
    h = m / 60;
    d = h / 24;
    printf("The number of days is :%f\n", d);
    printf("The number of hours is :%f\n", h);
    printf("The number of minutes is :%f\n", m);

    return 0;
}
