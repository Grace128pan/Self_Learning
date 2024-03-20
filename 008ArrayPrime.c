/*
use an array to generate prime numbers
*/

#include <stdio.h>
#include <stdbool.h>

int main() 
{
    int p, i, primes[50], primeIndex = 2;
    bool isPrime;

    primes[0] = 2;
    primes[1] = 3;

    for (p = 5; p <= 50; p = p + 2) { // Start checking from 5, increment by 2 to check only odd numbers
        isPrime = true;
        for (i = 1; isPrime && p / primes[i] >= primes[i]; i++) {
            if (p % primes[i] == 0) {
                isPrime = false;
            }
        }
        if (isPrime == true) {
            primes[primeIndex] = p;
            primeIndex++;
        }
    }

    // Print the generated prime numbers
    printf("List of prime numbers up to 50:\n");
    for (i = 0; i < primeIndex; i++) {
        printf("%i ", primes[i]);
    }
    printf("\n");

    return 0;
}

/*
1. The program uses an array to store prime numbers.
2. The program starts by storing the first two prime numbers (2 and 3) in the array.
3. It then iterates through odd numbers starting from 5, checking if each number is prime.
4. For each number, it checks if it is divisible by any of the previously generated prime numbers.
5. If the number is not divisible by any of the prime numbers, it is considered prime and added to the array.
6. The program prints the list of prime numbers generated up to 50.
7. The program uses a boolean variable isPrime to track whether a number is prime or not.
*/
  