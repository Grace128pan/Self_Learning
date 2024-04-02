/*
1.recursive functions can be used in the evaluation of expressions containing the nested sets of parenthesized expressions
2.other applications include the searching and sorting of data structures called trees and lists
3. recursive functions are commonly used by an example of calculating the factorial of a number
4. the factorial of 0 is defined to be equal to 1
5! = 5 * 4 * 3 * 2 * 1 = 120
6! = 6 * 5 * 4 * 3 * 2 * 1 = 720
n! = n *(n-1)!
4.unsigned int means the number is always positive
*/

//program 7.17 calculating factorials recursively

#include <stdio.h>

int main(void) {
    unsigned int j;
    unsigned long int factorial(unsigned int n);

    for (j = 0; j < 11; j ++) {
        printf("%2u! = %lu\n", j, factorial(j));
    }
    return 0;
}

//recursive function to calculate the factorial of a positive integer
unsigned long int factorial(unsigned int n) {
    unsigned long int result;

    if (n==0) {
        result = 1;
    }
    else {
        result = n * factorial(n-1);
    }
    return result;
}