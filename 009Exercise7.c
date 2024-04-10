/*
write a function that raises an integer to a positive integer power. Call the function x_to_the_n taking two integer arguments x and n. Have the function return a long int, which represents the results of calculating x^n.
*/

#include <stdio.h>

int x_to_the_n(int x, int n) {
    long int result = 1;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

int main(void) {
    int x, n;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n <=0) {
        printf("n must be a positive integer\n");
        return 1;
    }
    printf("%d raised to the power of %d is %ld\n", x, n, x_to_the_n(x, n));
    return 0;
}