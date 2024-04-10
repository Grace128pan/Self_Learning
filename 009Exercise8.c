/*
1.In C programming, the fabs() function is used to calculate the absolute value of a floating-point number 
(float or double). It stands for "floating-point absolute value".
2.1e-10 equals 1*10^-10 = 0.0000000001
*/

#include <stdio.h>
#include <math.h>

// Function to calculate the square root
double squareRoot(double x) {
    const double epsilon = 1e-10; // Adjusted epsilon for double precision
    double guess = 1.0;
    while (fabs(guess * guess - x) >= epsilon) {
        guess = (x / guess + guess) / 2.0;
    }
    return guess;
}

int main(void) {
    double a, b, c;
    printf("Enter the coefficients of the quadratic equation (ax^2 + bx + c = 0):\n");
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);
    printf("Enter c: ");
    scanf("%lf", &c);

    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        printf("The roots are imaginary.\n");
    } else {
        double root1 = (-b + squareRoot(discriminant)) / (2 * a);
        double root2 = (-b - squareRoot(discriminant)) / (2 * a);
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }

    return 0;
}
