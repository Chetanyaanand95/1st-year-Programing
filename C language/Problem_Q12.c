/*

Write a program to find whether the number is Pelindrome

*/

#include <stdio.h>
int main()
{

          int a, original;
          int rev, digit;

          // printf("Enter the Number :");
          // scanf("%d", &a);
          int a = 321 ;

          original = a;

          rev = 0;

          while (a > 0)
          {

                    digit = a % 10;

                    rev = rev * 10 + digit;

                    a = a / 10;
          }

         // printf("The reverse value of %d is %d\n", original, rev);

          if (rev == original)
          {
                    printf("The number %d is Palindrome\n", original);

          } else {
                    printf("The number %d is Not Palindrome\n", original);

          }

          return 0;
}

/* Palindrome number ka matlab:
Agar number ko reverse karo aur wo a number ke equal ho to palindrome hota hai.
Example:

121 → reverse bhi 121 (palindrome)

123 → reverse 321 (not palindrome)*/