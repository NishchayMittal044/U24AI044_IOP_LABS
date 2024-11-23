// // WRITE A C PROGRAM USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING.

#include <stdio.h>

int main()
{
    char s[100];
    char *ptr = s;
    int space_count = 0;

    printf("Input the string:\n");
    fgets(s, sizeof(s), stdin);

    printf("The input string is:\n");
    puts(s);

    while (*ptr != '\0')
    {
        if (*ptr == ' ')
        {
            space_count++;
        }
        ptr++; 
    }

    
    printf("The number of words in the input string is: %d\n", space_count + 1);

    return 0;
}