/*

Write a program to find the volumne of sphere.

*/

#include <stdio.h>
#define pi 3.14 // ➡️ Ye macro definition hai. Matlab jab bhi code me pi likha hoga,
               //  compiler usse 3.14 se replace kar dega. (Shortcut ban gaya π ke liye).
   int main (){

     float r , v ; // r = radius , v = volume
     
       printf("Enter the value of radius ");
       scanf("%f", &r);

         v = (4.0 / 3.0) * pi * r * r * r ;

       printf("Volume of sphere is %f", v);

       return 0;

   }