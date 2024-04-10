/*
page199: modify program 7.8 so that the value of guess is printed each time through the while loop. Notice
how quickly the value of guess converges to the square root. what conclusions can you reach about the number of iterations
through the loop, the number whose square root is being calculated, and the value of the initial guess?
*/

#include <stdio.h>

// Function to calculate the absolute value of a number
float absoluteValue(float x) {
    if (x < 0)
        x = -x;
    return (x);
}

// Function to compute the square root of a number
float squareRoot(float x) {
    const float epsilon = .00001;
    float guess = 1.0;
    int iteration = 0; // Counter for iterations
    while (absoluteValue(guess * guess - x) >= epsilon) {
        printf("Iteration %d: guess = %f\n", iteration, guess); // Print guess value
        guess = (x / guess + guess) / 2.0;
        iteration++;
    }
    printf("Final guess after %d iterations: %f\n", iteration, guess); // Print final guess value
    return guess;
}

int main(void) {
    printf("squareRoot(2.0) = %f\n", squareRoot(2.0));
    printf("squareRoot(144.0) = %f\n", squareRoot(144.0));
    printf("squareRoot(17.5) = %f\n", squareRoot(17.5));
    return 0;
}
