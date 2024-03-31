/*
One approximation method to get the square root of a number is to use Newton-Raphson Iteration Technique.
In program 7.8 you write a square root function to arrive at an approximation of the square root of a number.
Newton-Raphson method to compute the square root of x:
1. Start with an initial guess, say y = 1.
2. Repeatedly improve the guess by taking the average of y and x/y.
3. Continue until the difference between y and x/y is less than a desired tolerance (say 0.00001).
step1: set the value of guess to 1
step2: if|guess^2 - x| < epsilon then guess is the square root of x, proceed to step 4
step3: set guess = (guess + x/guess)/2 and return to step 2
step4: the guess is the approximation of the square root of x
episilon is the tolerance level: 0.00001 was arbitrarily chosen
*/
//program 7.8 calculate the square root of a number

# include <stdio.h>

float absoluteValue (float x) {
    if (x < 0) {
        x = -x;  
    } 
    return x;   //make sure the return value is outside the function 
}

float squareRoot (float x) {
    const float epsilon = .00001;
    float guess = 1.0;

    while (absoluteValue (guess * guess - x) >= epsilon) {
        guess = (x / guess + guess ) / 2.0;
    } 
    return guess; //make sure the return value is outside the function 
}

int main (void) {
    printf("squareRoot(2.0) = %f\n", squareRoot(2.0));
    printf("squareRoot(144.0) = %f\n", squareRoot(144.0));
    printf("squareRoot(17.5) = %f\n", squareRoot(17.5));

    return 0;
}
