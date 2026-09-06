/*

Write a program to find the factorial of a Number.

*/

// 8! = 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8
// 5! = 1 X 2 X 3 X 4 X 5 


#include <stdio.h>
  int main (){
    
      int n = 5 , product = 1 ;

      //  printf("Enter a Number ");
      //  scanf("%d",&n);

       for (int i = 1; i <= n ; i++){
           
          product *=i;
       }

       printf("The factorial of %d is %d\n ", n ,product);

       return 0; 



  }
