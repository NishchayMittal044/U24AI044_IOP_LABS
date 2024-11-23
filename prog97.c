// WRITE A C PROGRAM TO COUNT THE NUMBER OF VOWELS IN A STRING USING POINTER.
#include <stdio.h>
#include <string.h>
int main()
{
    char st[30], *ptr;
    int count = 0;
    printf("Enter the string\n");
    gets(st);
    ptr = st;
    printf("String Value\n");
    puts(ptr);
    while (*ptr != '\0')
    {
        switch (*ptr)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            count++;
        }
        ptr++;
    }
    printf("No. of Vowels = %d", count);

    return 0;
}
