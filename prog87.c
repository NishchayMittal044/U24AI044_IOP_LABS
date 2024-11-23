// WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE
// INFORMATION OF THOSE STUDENT WHOSE MARKS ARE GREATHER THAN 500.(PASSING
// ARRAY OF STRUCTURE INTO FUNCTION).

#include <stdio.h>

struct students
{
    char name[100];
    int rollno;
    float marks;
};

void readinfo(struct students student[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the student's name ");
        scanf("%s", &student[i].name);
        printf("Enter the student's rollno. ");
        scanf("%d", &student[i].rollno);
        printf("Enter the student's marks ");
        scanf("%f", &student[i].marks);
    }
}

void above500(struct students student[], int n)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (student[i].marks > 500)
        {

            printf("Name: %s\n", student[i].name);

            printf("Roll No.: %d\n", student[i].rollno);

            printf("Marks :%f\n", student[i].marks);
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("No one scored above 500\n");
    }
}

int main()
{

    struct students student[10];

    readinfo(student, 10);
    above500(student, 10);

    return 0;
}
