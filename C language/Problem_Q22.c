/*

Write a program for *ve number only by using go to statement.

*/

#include <stdio.h>
  int main (){
          int n ;

          printf("Enter a number : ");
          scanf("%d",&n);

          if (n>0){
                    printf("%d is postive\n", n);
                    goto end ;
          } else {
                    printf("%d is negative\n",n);
                    goto end ;
          }
          
          end :

          return 0;
  }
