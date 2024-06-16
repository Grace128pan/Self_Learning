// guess the number game

#include <stdio.h>
#include <stdlib.h> // for rand() and srand() to generate random numbers
#include <time.h>  // for time() to generate random numbers

int main() {
    int number, guess, attempts = 0;
    srand(time(0)); //seed the random number generator
    number = rand() % 100 + 1; // generate a random number between 1 and 100; % 100 is to get a number between 0 and 99, + 1 is to get a number between 1 and 100

    printf("Guess the number between 1 and 100: ");

    do {
        scanf("%d", &guess);
        attempts++;
        if (guess < number) {
            printf("Higher number please!\n");
        } else if (guess > number) {
            printf("Lower number please!\n");
        } else {
            printf("You guessed it in %d attempts\n", attempts);
        }
    } while (guess != number);

    return 0;
}