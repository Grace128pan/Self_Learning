#include <stdio.h>

int main() {
    // Define variables to hold the values of each term
    double term1 = 3.31e-8 * 2.01e-7;
    double term2 = 7.16e-6 + 2.01e-8;
    double result;

    // Perform the arithmetic operations
    result = term1 / term2;

    // Display the result in exponential format
    printf("Result: %e\n", result);

    return 0;
}

//In C programming, double is a data type specifically designed for representing floating-point numbers, not integers.