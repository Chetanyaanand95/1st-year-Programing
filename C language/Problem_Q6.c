/* 

Write a program to find the Larger among three numbers. ( by using if ... else and LOGIClAL OPERTOR )

*/

#include <stdio.h>
   int main(){

      float a = 10 , b = 5.9 , c = 20 ; // mene yeha per int ke jagh float use for decimal number like 3.4 me agar larger check kerge agar me int ker kerte tho error ata 
      
             // BY USER INPUT 
             
      //   printf("Enter Your 1st Number:");
      //   scanf("%f", &a);
        
      //   printf("Enter Your 2nd Number:");
      //   scanf("%f", &b);

      //   printf("Enter Your 3rd Number:");
      //   scanf("%f", &c);


      if ( a > b && a > c) {
          printf("%2.f Number is Larger",a);
        }
       else if ( b > a  && b > c ) {
          printf("%2.f Number is Larger",b);

       } else if ( c > a && c > b ) {
          printf("%2.f Number is Larger",c);

       } else { 
               // ( a = b = c ) ;  likhe ne jarut nahi hai kyuki agar uper ke dono me se koi bhi output nahi nikal tho else he output hote hai 
          printf("All Numbers Are Equal");
       }

          return 0;
   }