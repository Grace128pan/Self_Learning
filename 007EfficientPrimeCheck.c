/*
Revised program to generate a table of prime numbers
*/
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int p, i, primes[50], primeIndex = 2; //primes[50] is an array of 50 integers
    bool isPrime;

    primes[0] = 2;
    primes[1] = 3;

    for (p = 5; p <= 50; p = p + 2)
    {
        isPrime = true;

        for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
            if (p % primes[i] == 0)
                isPrime = false;

        if (isPrime == true)
        {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }

    for (i = 0; i < primeIndex; ++i)
        printf("%i ", primes[i]);

    printf("\n");
    return 0;
}

//This is a way of using array to solve the problem, and I will need to learn more to understand deeper