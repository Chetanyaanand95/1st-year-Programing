/*

Write a program to find whether the number is Armstrong 

*/ 

#include <stdio.h>
int main()
{
          int a, original;
          int sum, digit;

          printf("Enter a Number: ");
          scanf("%d", &a);

          sum = 0;

          original = a;

          while (a > 0){

                    digit = a % 10;

                    sum = sum + (digit * digit * digit);

                    a = a / 10;
          }
          printf("The number entered is %d\n", original);

          if (sum == original)
          {

                    printf("%d is an Armstrong number\n", original);
                    
          } else {
                    printf("%d is not an Armstrong number\n", original);
          }

          return 0;
}
/*
      Armstrong Number Kya Hota Hai?

👉 Armstrong number ek aisa number hota hai jisme uske digits ka **power (digits ki total count ke barabar)** ka sum, original number ke equal hota hai.

### Example (3 digit numbers):

1. **153**
  1³ + 5³ + 3³ = 1 + 125 + 27 = 153 ✅ (Armstrong)

2. **370**
  3³ + 7³ + 0³ = 27 + 343 + 0 = 370 ✅ (Armstrong)

3. **123**
  1³ + 2³ + 3³ = 1 + 8 + 27 = 36 ≠ 123 ❌ (Not Armstrong)



*/