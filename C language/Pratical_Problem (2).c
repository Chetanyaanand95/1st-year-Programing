/* 


Write a program to conversion of decimal to binary 


*/

#include <stdio.h>
  int main (){

          int num = 11;
          scanf("%d", &num);

          int binary[32];
          int i = 0 ;
          while (num > 0 )
          {
                   binary[i] = num % 2 ; 
                   num = num / 2 ;
                   i++ ;
          }

          printf("Binary = ");
          for (int j = i - 1; j >= 0; j--) {
                    printf("%d", binary[j]);

          }
          return 0 ;

  }