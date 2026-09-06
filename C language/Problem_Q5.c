/* 

Write a program to find the Larger of two numbers.

*/
   

  // we are using Ternary Operator . not if else 


#include <stdio.h>
   int main(){

     float a = 7, b = 6.5; // mene yeha per int ke jagh float use for decimal number like 3.4 me agar larger check kerge agar me int ker kerte tho error ata 
               

                // BY USER INPUT 
      
        // printf("Enter Your 1st Number:");
        // scanf("%f", &a);
        
        // printf("Enter Your 2nd Number:");
        // scanf("%f", &b);

       ( a > b ) ? printf("%f Number is Larger", a):
       ( a < b ) ? printf("%f Number is Larger", b):
                   printf("Both are equal");
        
          return 0;
   }