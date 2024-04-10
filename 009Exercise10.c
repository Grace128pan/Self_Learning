/*
10. Write a function prime() that returns 1 if its argument is a prime
number and returns 0 otherwise
*/
#include <stdio.h>

// Function to check if a number is prime
int prime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (prime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
