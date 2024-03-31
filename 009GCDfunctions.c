/*
program 7.5 revise the program to find the greatest common divisor
Function to find gcd of two nonnegative integer values
*/

#include <stdio.h>

void gcd(int u, int v) {
    int temp;

    printf("The gcd of %d and %d is ", u, v);

    while(v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }

    printf("%d\n", u);
}

int main(void) {
    gcd(150, 35);
    gcd(1026, 405);
    gcd(83, 240);
}