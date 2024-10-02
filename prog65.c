// PROGRAM TO READ A 3*3 MATRIX AND PRINT ITS TRANSPOSE.
//  #include<stdio.h>
//  #include<conio.h>
//  int main()
//  {
//      int mat[3][3], i, j, matTrans[3][3];
//      printf("Enter 3*3 Matrix Elements: ");
//      for(i=0; i<3; i++)
//      {
//          for(j=0; j<3; j++)
//              scanf("%d", &mat[i][j]);
//      }
//      // Transposing the Matrix...
//      for(i=0; i<3; i++)
//      {
//          for(j=0; j<3; j++)
//              matTrans[j][i] = mat[i][j];
//      }
//      printf("\nTranspose of given Matrix is:\n");
//      for(i=0; i<3; i++)
//      {
//          for(j=0; j<3; j++)
//              printf("%d  ", matTrans[i][j]);
//          printf("\n");
//      }
//      return 0;
//  }

#include <stdio.h>
int main()
{

    int a[3][3], t[3][3];

    printf("Enter the matrix elements :");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The Marix is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Transposing the elements
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            t[j][i] = a[i][j];
        }
    }

    printf("The Transposed Marix is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}