#include <stdio.h>
#include <math.h> // Include the math.h library for pow() function

int main(void)
{
    float x = 2.55; // Declare and initialize x before using it
    float m; // Declare m here

    // Calculate the value of m using the correct expression
    m = 3 * pow(x, 3) - 5 * pow(x, 2) + 6;

    printf("the result of m is %f\n", m); // Use %d to print a floating-point number

    return 0;
}
