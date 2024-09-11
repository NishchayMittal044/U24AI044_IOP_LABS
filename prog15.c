// PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION
#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, tm, avg;
    printf("Enter the marks\n");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
    tm = (m1 + m2 + m3 + m4 + m5);
    avg = tm / 5;
    if ((avg >= 90) && (avg <= 100))
    {
        printf("First Division");
    }
    else if ((avg >= 75) && (avg <= 100))
    {
        printf("Second Division");
    }
    else if ((avg >= 60) && (avg <= 100))
    {
        printf("Third Division");
    }
    else if ((avg >= 0) && (avg <= 100))
    {
        printf("You Failed");
    }
    else
    {
        printf("Invalid Input");
    }

    return 0;
}