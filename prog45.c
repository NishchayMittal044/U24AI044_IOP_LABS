// (A GUESSING GAME): With this program the user has to guess a number that
// the program has picked as the lucky number. It uses one for loop and plenty of if
// statements. I’ve also thrown in a conditional operator, just to make sure you
// haven’t forgotten how to use it!
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int num[3];
    int ran_num = rand() % 10 + 1;
    printf("You will get Three chances to guess the correct number...");

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter your guess between 1 to 10\n");
        scanf("%d", &num[i]);
        if (num[i] == ran_num)
        {
            printf("You guessed the correct number");
            return 1;
        }
        else
        {
            printf("You could not guess the correct number");
        }
    }

    printf("\nThe correct number was %d", ran_num);

    return 0;
}