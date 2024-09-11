// PROGRAM TO READ MARKS OF FIVE SUBJECTS OF A STUDENT AND CALCULATE THE TOTAL AND THE PERCENTAGE
#include <stdio.h>
int main()
{
    float m1, m2, m3, m4, m5, sum, per;
    printf("Enter first marks :");
    scanf("%f", &m1);
    printf("Enter second marks :");
    scanf("%f", &m2);
    printf("Enter third marks :");
    scanf("%f", &m3);
    printf("Enter fourth marks :");
    scanf("%f", &m4);
    printf("Enter fifth marks :");
    scanf("%f", &m5);
    sum = m1 + m2 + m3 + m4 + m5;

    //Assuming the maximum marks is 100
    per = sum / 5;
    printf("The total marks is :%f\n", sum);
    printf("The percentage of the marks is :%f", per);
    return 0;
}