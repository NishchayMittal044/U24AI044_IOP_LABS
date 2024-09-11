//PROGRAM TO FINDOUT MAX AND SECOND MAX FROM 'N' NOS.
#include<stdio.h>
int main()
{
    int N, a,max1=0,max2=0;
    printf("Enter the No. of Numbers you want to enter :");
    scanf("%d",&N);
    for (int i = 1; i <= N; i++)    
    {
        printf("Enter the %d Number :",i);
        scanf("%d",&a);

        if (a>=max1)
        {
            max2=max1;
            max1=a;
        }
        else if (a<max1)
        {
            if (a>=max2)
            {
                max2 = a;
            }
            
        }
        
    }
    printf("The Maximum Number is %d",max1);
    printf("\nThe Second Maximum Number is %d",max2);
    

    return 0;
}