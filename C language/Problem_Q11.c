/*

Write a program to reverse of a Number. 

*/

#include <stdio.h>
   int main(){

    int a = 1234;
    int rev , digit ;

    // printf("Enter the value :");
    // scanf("%d", &a);

    

    rev = 0 ;

    while ( a > 0){

      digit = a % 10 ;

      rev = rev * 10 + digit ;

      a = a / 10;

    }

    printf("The Number of reverse value is %d", rev);

    return 0;

   }