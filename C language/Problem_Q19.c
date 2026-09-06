/*

Write a Program to find the whether the Number is prime.

*/

#include <stdio.h>
  int main (){
   
          int n = 7 ;
          int prime = 0 ;

        //  printf("Enter a Number ");
        //  scanf("%d",&n);

         for ( int i = 2 ; i < n ; i++){

                if (n%i == 0){
                    prime = 1 ;
                }

                if (prime){
                        printf("%d  is not prime ",n);

                } else {
                        printf("%d is prime ",n);
                }

                return 0;
         }





  }