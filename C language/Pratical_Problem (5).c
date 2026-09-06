/*

Write a program to do ascending / descending series by using Array.

*/

#include <stdio.h>
int main()
{

          int arr[5] = {4, 2, 1, 5, 3};
          int i, j, temp;

          // Ascending series

          for (i = 0; i < 5 - 1; i++)
          {
                    for (j = i + 1; j < 5; j++)
                    {
                              if (arr[i] > arr[j])
                              {
                                        temp = arr[i];
                                        arr[i] = arr[j];
                                        arr[j] = temp;
                              }
                    }
          }

          printf("Asceding order: ");
          for(i = 0 ; i < 5 ; i++) {
              printf("%d ", arr[i]);        
          }

          // Descending order
          for (i = 0; i < 5 ; i++)
          {
                    for (j = i + 1; j < 5; j++)
                    {
                              if (arr[i] < arr[j])
                              {
                                        temp = arr[i];
                                        arr[i] = arr[j];
                                        arr[j] = temp;
                              }
                    }
          }
          
          printf("Desceding order: ");
          for(i = 0 ; i < 5 ; i++) {
               printf("%d ", arr[i]); 
          }
          
          return 0 ;
}