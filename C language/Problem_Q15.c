/*

write a Program to conversion of Decimal to Binary .

*/

#include <stdio.h> 
#include <math.h>
   int main (){

   int decimal = 11, binary = 0 , base = 1 ,rem;

//    printf("Enter the decimal number ");
//    scanf("%d",&decimal);

    // special case for 0
    if(decimal==0){
          printf("Binary Number is 0/n");
    }


    while(decimal>0){
   
        rem = decimal % 2 ;  // remainder nikale ke liye
        binary = binary + rem * base ; //  binary number ko nikle ke ke liye 
        base = base * 10 ; //place value hai ( 1 , 10 , 100 ,1000 .....)
       decimal = decimal / 2 ; // next step ke liye divide
       }

       printf("Binary number is %d",binary);

       return 0;
           
   }