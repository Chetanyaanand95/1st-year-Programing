/*

Write a Program to find the fibonacci series. 

*/

// fibonacci series 5 a= 0 1 1 2 3 


#include <stdio.h>

int main() {
    int n = 10, a = 0, b = 1, next;

//     printf("Enter number of terms: ");
//     scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
