/*

Write a program to find the sum of individual digits of the Number. 

*abb individula digits hote kya hai ANS : Jese tumhe ek mobile number ya roll number diya gaya hai, uske har ek digit ko alag karke add karna.


*/

#include <stdio.h>
   int main (){
     
      int a = 1234 ;
      int sum , digit ;
          
         // by user input
      // printf("Enter the value : ");
      // scanf("%d", &a);

      sum =  0 ;

      while (a >0) {

          digit = a % 10 ;
          sum = sum + digit ;
          a = a / 10 ;
      }
         printf("Sum of digits is %d\n", sum);
      
         return 0;


   }

   /*
   
   How it world
   Explain : 1️⃣ digit = a % 10;

% ka matlab modulus operator hai → remainder deta hai.

Agar a = 1234 ho:

1234 % 10 = 4 (last digit mil gayi)

Matlab ye line hamesha number ki last digit nikalti hai.

2️⃣ sum = sum + digit;

Yahan hum nikal ke laye hue digit ko sum me add kar dete hain.

Example:

Pehle sum = 0

digit = 4 → sum = 0 + 4 = 4

Next step digit = 3 → sum = 4 + 3 = 7

Aur aise hi chalta rahega jab tak poora number khatam na ho.

3️⃣ a = a / 10;

/ ka matlab hai division.

Jab kisi number ko 10 se divide karte ho → last digit kat jati hai.

Example:

a = 1234 / 10 = 123

a = 123 / 10 = 12

a = 12 / 10 = 1

a = 1 / 10 = 0 → loop khatam

🔍 Combined Example (a = 1234)

Start: sum=0, a=1234

Step 1: digit=4, sum=4, a=123

Step 2: digit=3, sum=7, a=12

Step 3: digit=2, sum=9, a=1

Step 4: digit=1, sum=10, a=0 → loop end

Final Answer = 10 ✅

👉 Matlab:

% 10 → last digit nikalta hai

/ 10 → number ko chhota karta hai (last digit hata deta hai)

sum = sum + digit → digits ko add karta hai
   
   
   
   */