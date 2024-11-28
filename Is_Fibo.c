#include <stdio.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    long long  n[t];
    
    
    for (int i = 0; i < t; i++)
    {
        scanf("%lld",&n[i]);
    }

for (int j = 0; j < t; j++)
{
    long long k = n[j];
    long long a = 0, b = 1, c = 1, count = 0;


    
    long long fibo[k];
     for (int i = 0; i < n[j]; i++)
    {
            c=a+b;
            fibo[i] = c;
            a=b;
            b=c;
        
    }
    
    
    for (int i = 0; i < n[j]; i++)
    {
        if (fibo[i] == n[j])
        {
            printf("IsFibo\n");
            break;
        }
    }
    for (int i = 0; i < n[j]; i++)
    {
        if (fibo[i] != n[j])
        {
            count++;
        }
    }
    if (count == n[j])
    {
        printf("IsNotFibo\n");
    }
}
return 0;
    
}