//program 5. we do not need an array to generate Fibonacci numbers
/*
1. we can name three variables: two to store the previous two Fibonacci numbers, and one to store the current Fibonacci number
2. as we are not using arrays, we will display each Fibonacci number as we generate it
*/

#include <stdio.h>

int main() {
    int previous = 0; // Store the previous Fibonacci number
    int current = 1;  // Store the current Fibonacci number
    int next;         // Store the next Fibonacci number

    printf("The first 10 Fibonacci numbers:\n");

    // Print the first two Fibonacci numbers
    printf("%d\n", previous);
    printf("%d\n", current);

    // Generate and print the next 8 Fibonacci numbers
    for (int i = 2; i < 10; ++i) {
        next = previous + current; // Calculate the next Fibonacci number
        printf("%d\n", next);      // Print the next Fibonacci number
        previous = current;        // Update the previous Fibonacci number
        current = next;            // Update the current Fibonacci number
    }
    return 0;
}

//without using arrays, we can still print 10 Fibonacci numbers