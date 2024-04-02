//modify program 7.8 so that the value of epsilon is paased as an argument to the function.try to
//experiment with different epsilon values to see its effect on the square root values.

#include <stdio.h>

float absoluteValue(float x) {
    if (x < 0)
        x = -x;
    return x;
}

float squareRoot(float x, float epsilon) {
    float guess = 1.0;
    while (absoluteValue(guess * guess - x) >= epsilon){
        guess = (x / guess + guess) / 2.0;
        }
    return guess;
}

int main(void) {
    float epsilon = 0.000001;
    
    printf("squareRoot (2.0) = %f\n", squareRoot(2.0, epsilon));
    printf("squareRoot (144.0) = %f\n", squareRoot(144.0, epsilon));
    printf("squareRoot (17.5) = %f\n", squareRoot(17.5, epsilon));
    
    return 0;
}
