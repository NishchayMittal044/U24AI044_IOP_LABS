// WRITE A C PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER
// ,EMPLOYEE NAME AND BASIC PAY OF THE EMPLOYEE. DECLARE A STRUCTURE POINTER AND AN
// ARRAY EMPLOY WITH 50 ELEMENTS .THE PROGRAM SHOULD READ ‘N’ EMPLOYEE DETAILS AND
// PRINT THE LIST OF ALL EMPLOYEE ALONG WITH THE BASIC A PAY.
#include <stdio.h>
#include <string.h>
#define max_employee 50
struct employee_data
{
    int employee_number;
    char employee_name[100];
    float basic_pay;
};

int main()
{
    struct employee_data employee[max_employee];
    struct employee_data *ptr;
    int n, i;

    printf("Enter the number of employees\n");
    scanf("%d", &n);

    if (n > max_employee || n <= 0)
    {
        printf("Invalid no. of employees\n");
        return 1;
    }

    ptr = employee;
    for (int i = 0; i < n; i++)
    {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &ptr->employee_number);
        printf("Employee Name: ");
        scanf(" %s", &ptr->employee_name);
        printf("Basic Pay: ");
        scanf("%f", &ptr->basic_pay);
        ptr++;
    }

    ptr = employee;

    printf("\nEmployee Details:\n");

    for (int i = 0; i < n; i++)
    {

        printf("Employee Number :%d\n", ptr->employee_number);
        printf("Emoloyee Name :%s\n", ptr->employee_name);
        printf("Basic pay :%f\n", ptr->basic_pay);
        ptr++;
    }

    return 0;
}