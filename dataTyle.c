#include <stdio.h>

// Define the Complex data type
typedef struct {
    double real;
    double imag;
} Complex;

// Function to add two complex numbers
Complex add(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to subtract two complex numbers
Complex subtract(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

// Function to multiply two complex numbers
Complex multiply(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;
    return result;
}

// Function to print a complex number
void printComplex(Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

int main() {
    // Declare and initialize two complex numbers
    Complex c1 = {1.0, 2.0};
    Complex c2 = {2.0, 3.0};

    // Perform operations and print results
    printf("c1 = ");
    printComplex(c1);
    printf("c2 = ");
    printComplex(c2);

    printf("Addition: ");
    printComplex(add(c1, c2));

    printf("Subtraction: ");
    printComplex(subtract(c1, c2));

    printf("Multiplication: ");
    printComplex(multiply(c1, c2));

    return 0;
}
