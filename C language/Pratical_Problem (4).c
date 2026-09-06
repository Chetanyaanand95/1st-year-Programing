/*

Write a two single dimensional array(initialized) into one dimensional Array .

*/

#include <stdio.h> 
   int main (){
          int arr_1[3] = { 1 , 2 , 3 };

          int arr_2[3]= { 4 , 5 , 6 }; 

          int arr_3[6];

          for (int i = 0; i < 3; i++)
          {
                    arr_3[i] = arr_1[i];
          }
          
           for (int j = 0; j < 3; j++)
          {
                    arr_3[j+3] = arr_2[j];
          }
          
          printf("The combined array is : ");
          for (int k = 0; k < 6 ; k++)
          {
                    printf("%d ", arr_3[k]); 
          }
          


          return 0;


   } 