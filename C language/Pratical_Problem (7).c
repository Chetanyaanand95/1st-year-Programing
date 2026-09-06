/*

Write a program for addition of two matrix

*/

#include <stdio.h>
   int main (){
          int i,j ;
          int rows = 2 , column = 3 ; // 2 x 3 ke matrix

          int mat1[2][3] = {
                    { 1 , 2 , 3 },
                    { 4 , 5 , 6 }
          };

          int mat2[2][3] = {
                    { 6 , 5 , 4 },
                    { 3 , 2 , 1 }
          };
           
          int sum[2][3]; // sum matrix 

          // Marix addition 
          for(i = 0 ; i < rows ; i++ ){
             for (j = 0 ; j < column ; j++) {
                    sum[i][j] = mat1[i][j] + mat2[i][j];
             }
          }

          printf("Sum of two matrices: \n");
          for(i = 0 ; i < rows ; i++) {
                for (j = 0 ; j < column ; j++) {
                    printf("%d ", sum[i][j]);
                }
                printf("\n");
          }
          return 0 ;
   }   