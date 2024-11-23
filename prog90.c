// // WRITE A PROGRAM TO FIND LENGTH OF A GIVEN STRING INCLUDING AND EXCLUDING SPACES
// // USING POINTERS.
// #include<stdio.h>
// int main ()
// {
//     char s[100];
//      char *sptr = s;
//     printf("Enter the string ");
//     gets(s);
   
//     int incount = 0, excount = 0;
    
    
//     printf("The input string is ");
//     puts(s);
//     while (*sptr != '\0')
//     {
//         incount ++;
//         if (*sptr != ' ');
//         {
//             excount ++;
//         }
//         sptr++;
        
//     }
//     printf("%d\n",incount);
//     printf("%d",excount);

    
//     return 0;
// }

#include<stdio.h>

int main()
{
    char s[100];
    char *sptr;
    int incount = 0, excount = 0;

    printf("Enter the string:\n");
    fgets(s, sizeof(s), stdin);

    sptr = s;

    printf("The input string is:\n");
    puts(s);

    while (*sptr != '\0')
    {
        incount++;
        if (*sptr != ' ' && *sptr != '\n')
        {
            excount++;
        }
        sptr++;
    }

    printf("Total characters (including spaces): %d\n", incount-1);
    printf("Total characters (excluding spaces): %d\n", excount);

    return 0;
}
