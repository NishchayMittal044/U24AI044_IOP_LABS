#include<stdio.h>
#include<string.h>
void swap(char str[], int i, int j) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}
void reverse(char str[],int first, int last)
{
    while(first<last)
    swap(str,first,last);
    last--;
    first++;
}
void lexico(char str[])
{
    int l = strlen(str);
    int i, j;
    int changei = -1,justbig;

    for ( i = l -2; i >= 0; i--)
    {
        if(str[i]<str[i+1])
        {
            changei = i;
            break;
        }
    }

    if(changei<0)
    {
        printf("No answer\n");
        return ;
    }
    
    for ( j = l - 1; j > changei; j--)
    {
        if (str[j]>str[changei])
        {
            justbig = j;
            break;
        }
        
    }
    swap(str,changei,justbig);
    reverse(str,changei + 1,l-1);
    printf("%s\n",str);
    
}

int main ()
{
    int t;
    scanf("%d",&t);

    while(t>0)
    {
        char str[100];
        scanf("%s",str);
        lexico(str);
        t--;    
    }
    
    return 0;
}

    