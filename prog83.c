//WRITE A FUNCTION TO READ AN ARRAY AND FOUND OUT MAXIMUM.

#include <stdio.h>


int max_array(int arr[], int n)
{
	int i;


	int max = arr[0];

	
	for (i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];

	return max;
}


int main()
{
	int n;
    printf("Enter The Number of Elements you want in the array");
    scanf("\n%d",&n);
    int arr[n];

    printf("Enter the elements :");
	for (int i = 0; i < n; i++)
    {
       scanf("\n%d",&arr[i]);
    }
    
	printf("Maximum element in given array is %d", max_array(arr, n));
	return 0;
}

