// 7 Thala for a Reason

/*
Write a program to find the root of quadratic equation.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a = 1, b = 2, c = 1;
    float discriminant, root1, root2, realPart, imagPart;

    // BY USER INPUT
    // printf("Enter coefficients a, b, c:\n");
    // scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different:\n");
        printf("root1 = %.2f and root2 = %.2f\n", root1, root2);
    } 
    else if (discriminant == 0) {
        // Real and equal roots
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("root1 = root2 = %.2f\n", root1);
    } 
    else {
        // Complex roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different:\n");
        printf("root1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("root2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}
