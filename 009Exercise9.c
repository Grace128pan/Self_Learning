/*
The least common multiple (lcm) of two positive integers u and v is the
smallest positive integer that is evenly divisible by both u and v. Thus, the
lcm of 15 and 10, written lcm (15, 10), is 30 because 30 is the smallest
integer divisible by both 15 and 10. Write a function lcm() that takes
two integer arguments and returns their lcm. The lcm() function should
calculate the least common multiple by calling the gcd() function from
Program 7.6 in accordance with the following identity:
lcm(u,v) = uv / gcd(u,v)  u, v >= 0;

program to calculate the least common multiple of two integers
*/
#include <stdio.h>

// Function to calculate the greatest common divisor (gcd)
int gcd(int u, int v) {
    int temp;
    while (v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }
    return u;
}

// Function to calculate the least common multiple (lcm)
int lcm(int u, int v) {
    // Ensure u and v are non-negative
    if (u < 0 || v < 0) {
        printf("Error: u and v must be non-negative.\n");
        return -1; // Error code
    }
    // Calculate lcm using the gcd function
    return (u * v) / gcd(u, v);
}

int main() {
    int u, v;
    printf("Enter two non-negative integers: ");
    scanf("%d %d", &u, &v);
    
    int result = lcm(u, v);
    if (result != -1) {
        printf("The least common multiple of %d and %d is: %d\n", u, v, result);
    }

    return 0;
}
