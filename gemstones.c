#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int find(char a, char *s)
{
    while (*s != '\0')
    {
        if (a == *s)
        {
            return 1;
        }
        else
        {
            s++;
        }
    }
    return 0;
}
int main()
{
    int num_rocks;
    scanf("%d", &num_rocks);
    char *arr[num_rocks];
    for (int i = 0; i < num_rocks; i++)
    {
        arr[i] = (char *)malloc(101 * 1);
    }
    for (int i = 0; i < num_rocks; i++)
    {
        scanf("%s", arr[i]);
    }
    int count = 0;
    char memory[100] = {0};

    for (int i = 0; i < strlen(arr[0]); i++)
    {
        char ch = arr[0][i];

        int k = 0;
        if (!find(ch, memory))
        {
            for (int j = 0; j < num_rocks; j++)
            {
                if (find(ch, arr[j]))
                {
                    k++;
                }
            }
            if (k == num_rocks)
            {
                memory[count] = ch;
                count++;
            }
        }
    }
    printf("%ld", strlen(memory));
}