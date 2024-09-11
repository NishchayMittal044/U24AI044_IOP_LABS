// PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND
#include <stdio.h>
int main()
{
    int h, m, s, ts;
    printf("Enter time in Hour,Minute,Second\n");
    scanf("%d%d%d", &h, &m, &s);
    ts = h * 3600 + m * 60 + s;
    printf("The Time in total seconds is :%d", ts);

    return 0;
}