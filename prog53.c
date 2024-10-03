// Printing the Pattern
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

#include<stdio.h>
int main()
{
   
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 4; j >= 1; j--)
        {
            if (j<=i)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        for (int j = i-1; j >=1; j--)
        {
            printf("*");
        }
        
        printf("\n");
    }
     for (int i = 3; i >= 1; i--)
    {
        for (int j = 3; j >= 0; j--)
        {
            if (j<i)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        for (int j = i-1; j >=1; j--)
        {
            printf("*");
        }
        
        printf("\n");
    }


    return 0;
}
