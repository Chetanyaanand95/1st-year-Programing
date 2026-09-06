/*

Write a program in C to read and display the Contents of Array.

*/

#include <stdio.h>
int main()
{

          int arr[5] ;

          for (int i = 0; i < 5; i++){
            scanf("%d", &arr[i]);
          }

          for (int j = 0; j < 5 ; j++) {
            printf("%d ", arr[j]);
          }

          return 0;
}

