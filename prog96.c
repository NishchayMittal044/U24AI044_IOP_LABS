// WRITE A C PROGRAM TO SORT THE GIVEN N NUMBER OF STRINGS IN ASCENDING ORDER USING
// POINTERS.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main ()
{
    char *s[100];
    int n;
    int i,j;
    printf("Enter the number of strings\n");
    scanf("%d",&n);
   
    printf("Enter the strings\n");
    for ( i = 0; i < n; i++)
    {
        fgets(s[i],20,stdin);
    }
    printf("The input strings are\n");
    for ( i = 0; i < n; i++)
    {
        puts(s[i]);
        
    }
    char *temp;
    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if(strcmp(s[i],s[j])>0);
            strcpy(temp,s[i]);
            strcpy(s[i],s[j]);
            strcpy(s[j],temp);
        }
        
    }
    printf("The sorted strings are\n");
    for ( i = 0; i < n; i++)
    {
        puts(s[i]);
        
    }
    return 0;
}