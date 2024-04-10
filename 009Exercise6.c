/*
1.Modify Program 7.8 so that the squareRoot() function accepts a
double precision argument and returns the result as a double precision
value. Be certain to change the value of the variable epsilon to reflect
the fact that double precision variables are now being used.
2.in C programming, double is a data type used to represent double-precision floating-point numbers. 
It provides higher precision compared to the float data type. A double variable can store a wider range of values 
and provides more significant digits compared to float.
3.Specifically, a double typically occupies 8 bytes (64 bits) of memory, allowing it to represent numbers with 
a wider range and more precision compared to a float, which typically occupies 4 bytes (32 bits).
*/

#include <stdio.h>

// Function to calculate the absolute value of a number
double absoluteValue(double x) {
    if (x < 0)
        x = -x;
    return (x);
}

// Function to compute the square root of a number
double squareRoot(double x) {
    const double epsilon = .0000001; // Changed epsilon for double precision
    double guess = 1.0;
    while (absoluteValue(guess * guess - x) >= epsilon) {
        guess = (x / guess + guess) / 2.0;
    }
    return guess;
}

int main(void) {
    printf("squareRoot(2.0) = %f\n", squareRoot(2.0));
    printf("squareRoot(144.0) = %f\n", squareRoot(144.0));
    printf("squareRoot(17.5) = %f\n", squareRoot(17.5));
    return 0;
}
