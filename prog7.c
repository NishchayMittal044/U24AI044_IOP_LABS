// PROGRAM TO CALCULATE AREA OF A TRIANGLE

// CALCULATING AREA WITH FORMULA A=BH/2
#include <stdio.h>
int main()
{
    float b, h, a;
    printf("Enter the value of Base :");
    scanf("%f", &b);
    printf("Enter the value of Height :");
    scanf("%f", &h);
    a = b * h / 2;
    printf("The area of the triangle is :%f", a);
    return 0;
}

// // ALTERNATIVE.... CALCULATING WITH HERON'S FORMULA
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     float s1, s2, s3, S, A;
//     printf("Enter the value of the three sides :");
//     scanf("%f%f%f", &s1, &s2, &s3);
//     S = (s1 + s2 + s3) / 2;
//     A = sqrt(S * (S - s1) * (S - s2) * (S - s3));
//     printf("The area of the triangle is :%f", A);
//     return 0;
// }