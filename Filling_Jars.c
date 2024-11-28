#include<stdio.h>
int main ()
{
    long long  m, n;//n--> no. of jars, m--> no. of operations, Each operation is described by 3 functions a, b and k
    scanf("%lld %lld",&n,&m);
    
    long long a[m], b[m], k[m];
    long long sum = 0,avg;
    
    for (int i = 0; i < m; i++)
    {
        scanf("%lld %lld %lld",&a[i],&b[i],&k[i]);
        
    }
    for (int i = 0; i < m; i++)
    {
        sum = sum + (b[i]-a[i] + 1)*k[i];
    }
    avg = sum/n;
    printf("%lld",avg);
return 0;
}