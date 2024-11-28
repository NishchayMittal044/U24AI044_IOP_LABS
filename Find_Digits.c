#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    long long n[t];
    long long count, r, c;
    for (int i = 0; i < t; i++)
    {
        scanf("%lld", &n[i]);
    }
    for (int i = 0; i < t; i++)
    {
        count = 0;
        c = n[i];
        while (n[i] != 0)
        {

            r = n[i] % 10;
            if (r != 0 && c % r == 0)
            {
                count++;
            }
            n[i] = n[i] / 10;
        }
        printf("%lld\n", count);
    }

    return 0;
}