// WRITE A C PROGRAM TO COUNT NUMBER OF CHARACTERS, WORDS AND LINES IN A TEXT FILE.
#include <stdio.h>
int main()
{
    FILE *fp = fopen("sample.txt", "r");
    char ch, lastch;
    int line_count = 1;
    int char_count = 0;
    int word_count = 0;
    while ((ch = fgetc(fp)) != EOF)
    {
        char_count++;
        if (ch == ' ')
        {
            char_count--;
            word_count++;
        }
        if (ch == '\n')
        {
            word_count++;
            line_count++;
            char_count--;
        }
        lastch = ch;
    }

    word_count++; 
    if (lastch == '\n')
    {
        word_count--;
    }

    printf("lines: %d\nwords: %d\ncharacters: %d\n", line_count, word_count, char_count);

    fclose(fp);
    return 0;
}
