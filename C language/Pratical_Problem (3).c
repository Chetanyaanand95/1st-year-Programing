/* 

Write a program to find largest number using array.

*/

#include <stdio.h>
   int main (){
      
          int arr[5] = { 10 , 20 , 30 , 40 , 20 };
          int largest ;

          largest = arr[0] ;

          for (int i = 1; i < 5; i++)
          {
                    if (arr[i] > largest ){
                              largest = arr[i];
                    }
          }
          printf("The largest Number is %d", largest);
          return 0 ;

   }

