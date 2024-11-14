//WRITE A FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT
#include<stdio.h>
void vowelornot(char ch)
{
    if ( ch =='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("The entered character is a Vowel");
    }
    else
    {
        printf("Not a Vowel");
    }
}
int main ()
{ 
    char c;
    printf("Enter the character");
    scanf("%c",&c);
    vowelornot(c);
    
    return 0;
}
