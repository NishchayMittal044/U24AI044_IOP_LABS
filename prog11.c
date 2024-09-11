// PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME
#include <stdio.h>
int main()
{
    int s, h, m, ts;
    printf("Enter total seconds :");
    scanf("%d", &ts);
    h = ts / 3600;
    m = ts / 60;
    s = ts - (h * 3600) - (m * 60);
    printf("The time is --> %d:%d:%d", h, m, s);

    return 0;
}
