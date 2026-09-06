/*

Write a program conversion of Binary to decimal  .

*/

#include <stdio.h>
#include<math.h>
int main (){
     int binary = 1011 , decimal = 0 , base = 1 , rem;

     // printf("Enter a binary number ");
     // scanf("%d", &binary);
     
    
     while(binary>0){
          rem = binary % 10 ;// last digit nikalene ke liye
          decimal = decimal + rem * base;// us digit ko base se multiple kerke add kerne
          base = base * 2;//base ko agle step ke liye double kerne 
          binary = binary / 10 ;// binary number ko digit se kam kerne
     }

     printf("Decimal Number %d",decimal);

     return 0;


}

