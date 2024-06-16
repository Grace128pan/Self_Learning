#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function declarations
void initializeRandomNumber();
int generateRandomNumber();
int getPlayerGuess();
void giveFeedback(int guess, int target);

int main() {
    int targetNumber, playerGuess;
    char playAgain;

    initializeRandomNumber();

    do {
        targetNumber = generateRandomNumber();
        printf("Guess the number (between 1 and 100):\n");

        do {
            playerGuess = getPlayerGuess();
            giveFeedback(playerGuess, targetNumber);
        } while (playerGuess != targetNumber);

        printf("Congratulations! You guessed the number.\n");
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);
    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thank you for playing!\n");
    return 0;
}

// Function to initialize the random number generator
void initializeRandomNumber() {
    srand(time(0));
}

// Function to generate a random number between 1 and 100
int generateRandomNumber() {
    return rand() % 100 + 1;
}

// Function to get the player's guess
int getPlayerGuess() {
    int guess;
    printf("Enter your guess: ");
    scanf("%d", &guess);
    return guess;
}

// Function to give feedback to the player
void giveFeedback(int guess, int target) {
    if (guess > target) {
        printf("Too high! Try again.\n");
    } else if (guess < target) {
        printf("Too low! Try again.\n");
    }
}
