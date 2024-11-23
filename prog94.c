// WRITE A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING
// POINTERS.FOR EXAMPLE,
// ST =�SVNITJAVA� IS COPIED AS �AVAJTINVS�

#include <stdio.h>
#include <string.h>
int main()
{
    char st[100], rev_st[100];
    char *ptr = st, *rev_ptr = rev_st;
    int i, j;

    printf("Enter the string\n");
    fgets(st, sizeof(st), stdin);
   

    printf("the input string is\n");
    puts(st);

    int l = strlen(st);

    for (i = 0, j = l - 2; j >= 0; i++, j--)
    {
        *(rev_ptr + j) = *(ptr + i);
    }

    printf("The reversed string is\n");
    puts(rev_st);

    return 0;
}
