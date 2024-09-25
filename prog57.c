//PROGRAM TO READ N NOS AND FINDOUT MAX AND SECOND MAX.
#include<stdio.h>
int main()
{
    int N, a[N],max1=0,max2=0;
    printf("Enter the No. of Numbers you want to enter :");
    scanf("%d",&N);
    for (int i = 0; i < N; i++)    
    {
        printf("Enter the %d Number of the Array :",i);
        scanf("%d",&a[i]);

        if (a[i]>=max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if (a[i]<max1)
        {
            if (a[i]>=max2)
            {
                max2 = a[i];
            }
            
        }
        
    }
    printf("The Maximum Number is %d",max1);
    printf("\nThe Second Maximum Number is %d",max2);
    

    return 0;
}