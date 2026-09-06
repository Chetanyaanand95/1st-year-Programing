/*

Write a Program to write a series 10 to 15 , then continue at 12

*/

#include <stdio.h>
   int main (){
   int n = 15 ;
    
   for (int i =10 ; i <= n ; i++){
          if (i==12){
               continue;
          } printf("%d\n",i);
   }
   return 0;
 }