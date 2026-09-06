/*

Write a program for transpose of two matrix.

*/

#include <stdio.h>

int main()
{
          int rows = 2,cols = 3;
          int i, j;

          int mat[2][3] = {
              { 1, 2, 3 },
              { 4, 5, 6 }};

          int transpose[3][2];

          for (i = 0; i < rows; i++)
          {
                    for (j = 0; j < cols; j++)
                    {
                              transpose[j][i] = mat[i][j];
                    }
          }

          printf("Original matrix : \n");
          for (i = 0; i < rows; i++)
          {
                    for (j = 0; j < cols; j++)
                    {
                              printf("%d ", mat[i][j]);
                    }
          }
          printf("\n");

          printf("\ntranspose Matrix:\n");

          for (i = 0; i < cols; i++)
          {
                    for (j = 0;j < rows; j++)
                    {
                       printf("%3d",transpose[i][j]);
                    }
                    printf("\n");
          }
                    return 0;
          }
