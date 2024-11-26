// A FILE CALLED “LNMIITSTUDENT.JAVA” CONTAINS INFORMATION SUCH AS STUDENT ROLL
// NUMBER, NAME AND TOTAL MARKS. WRITE A C PROGRAM TO CREATE A FILE TO STORE DETAILS OF N
// STUDENTS.
#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int rollNumber;
    char name[50];
    float totalMarks;
};

int main()
{
    FILE *fptr;
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    fptr = fopen("LNMIITStudent.txt", "w");

    struct Student students[n];

    printf("\nEnter details for student\n");

    for (i = 0; i < n; i++)
    {

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Name: ");
        scanf(" %s", students[i].name);

        printf("Total Marks: ");
        scanf("%f", &students[i].totalMarks);

        fprintf(fptr, "Roll Number: %d\n", students[i].rollNumber);
        fprintf(fptr, "Name: %s\n", students[i].name);
        fprintf(fptr, "Total Marks: %f\n\n", students[i].totalMarks);
    }

    fclose(fptr);

    printf("\nStudent details successfully written to LNMIITStudent.txt\n");

    return 0;
}
