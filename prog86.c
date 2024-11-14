// WRITE A FUNCTION TO RADE LINE OF TEXT AND FIND OUT LENGTH OF STRING.
#include <stdio.h>
void read_length(char c[100])
{
    int i = 0, count = 0;
    gets(c);
    puts(c);
    while (c[i] != '\0')
    {
        i++;
        count++;
    }
    printf("The length of the string is %d", count);
}
int main()
{
    char c[100];
    read_length(c);

    return 0;
}