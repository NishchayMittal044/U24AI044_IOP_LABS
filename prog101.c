// WRITE A C PROGRAM TO ADD /APPEND INFORMATION TO THE FILE “LNMIITSTUDENT.DAT”.
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp = fopen("lnmiitstudent.dat", "a");
    char arr[10];
    gets(arr);
    fprintf(fp, "%s", arr);
    fclose(fp);
}