// WRITE A C PROGRAM TO CALCULATE THE CUT OFF MARK OF A STUDENT USING THE
//  FORMULA.
//   CM = M/2+P/2+C/2+E
//  WHERE CM = Cut of f mark
//  M = Marks in Mathematics out of 200
//  P = Marks in Physics out of 200
//  C = Marks in Chemistry out of 200
//  E = Marks in entrance examination out of 100

#include <stdio.h>
int main()
{
    float M, P, C, E, CM;
    printf("Enter the value of marks scored in Mathematics :");
    scanf("%f", &M);
    printf("Enter the value of marks scored in Physics :");
    scanf("%f", &P);
    printf("Enter the value of marks scored in Chemistry :");
    scanf("%f", &C);
    printf("Enter the value of marks scored in Entrance Examination :");
    scanf("%f", &E);

    if (M > 200 || M < 0)
    {
        printf("Invalid Value Entered");
        return 1;
    }
    if (P > 200 || P < 0)
    {
        printf("Invalid Value Entered");
        return 1;
    }
    if (C > 200 || C < 0)
    {
        printf("Invalid Value Entered");
        return 1;
    }
    if (E > 100 || E < 0)
    {
        printf("Invalid Value Entered");
        return 1;
    }
    else
    {
        CM = (M / 2) + (P / 2) + (C / 2) + E;
        printf("The cutoff marks of a student is :%f", CM);
    }

    return 0;
}