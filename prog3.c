// PROGRAM TO CALCULATE GROSS SALARY
#include <stdio.h>
int main()
{
    float bs, hra, oa, gs;
    printf("Enter Basic salary :");
    scanf("%f", &bs);
    printf("Enter HRA :");
    scanf("%f", &hra);
    printf("Enter Other Allowances :");
    scanf("%f", &oa);
    gs = bs + hra + oa;
    printf("The gross salary is :%f", gs);

    return 0;
}