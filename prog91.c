// WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING
// POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER.
#include<stdio.h>
int main ()
{
    int number, square, cube;
    int *ptr = &number;
    printf("Enter the number\n");
    scanf("%d",ptr);

    square = (*ptr)*(*ptr);
    cube = (*ptr)*(*ptr)*(*ptr);
    

   printf("The square of the number is %d\n",square);
   printf("The cube of the number is %d\n",cube);
    
    return 0;
}