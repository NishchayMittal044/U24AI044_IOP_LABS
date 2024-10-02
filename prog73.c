// An election is contested by 5 candidates. The candidate is numbered are 1 to 5
// and the voting is done by marking the candidate number on the ballot paper.
// Write a program to read the ballots and count the votes cast for each candidate
// using an array variable count. In case, a number, read is outside the range 1 to 5,
// the ballot should be considered as a ‘spoilt ballot’ and the program should also
// count the number of spoilt ballots.

#include <stdio.h>
void main()
{
    int a[6], c;
    for (int i = 0; i < 6; i++)
    {
        a[i] = 0;
    }
    printf("Enter the number of votes ");
    int voters;
    scanf("%d", &voters);
    for (int i = 1; i <= voters; i++)
    {
        printf("Enter your choice of candidates between 0 to 5 : ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            a[0]++;
            break;
        case 2:
            a[1]++;
            break;
        case 3:
            a[2]++;
            break;
        case 4:
            a[3]++;
            break;
        case 5:
            a[4]++;
            break;
        default:
            a[5]++;
            break;
        }
    }
    printf("No. of votes for candidate 1 : %d \n", a[0]);
    printf("No. of votes for candidate 2 : %d \n", a[1]);
    printf("No. of votes for candidate 3 : %d \n", a[2]);
    printf("No. of votes for candidate 4 : %d \n", a[3]);
    printf("No. of votes for candidate 5 : %d \n", a[4]);
    printf("SPOILT BALLOTS  : %d ", a[5]);
}