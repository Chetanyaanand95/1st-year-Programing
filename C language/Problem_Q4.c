/*

Write a program for Arithmetic Calculator.

*/

#include <stdio.h>
   int main(){
   
      int a = 20 , b = 10 ;
      float avg ; // avg float rakha hai kyunki average decimal me bhi aa sakta ha
   
           // BY USER INPUT 

         //printf("Enter the value of 1st Number:");
        // scanf("%d", &a);

      //   printf("Enter the value of 2st Number:");
     //    scanf("%d", &b);
 

      printf("Addition:%d\n", a + b );
      printf("Subtraction:%d\n", a - b );
      printf("Multiplication:%d\n", a * b);
      printf("Division:%.2f\n", (float) a / b); // %2f ke matalb ji division ke value hai oh 2 decimal place he rehe ge
                                               // agar me isko %.3f kru tho output me mujhe yeh 3 decimal ke place denga .

      printf("Modulus:%d\n", a%b);

      avg = (a +b) / 2.0 ;

      printf("Average:%.2f\n", avg);

       return 0;
   }
 