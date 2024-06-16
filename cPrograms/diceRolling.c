/*
guess the dice game
This program uses various data types (int, float, double, char, _Bool) and basic math operations (addition, division) 
to create a simple and interactive game.
*/

#include <stdio.h> // to use printf() and scanf()
#include <stdlib.h> // to use rand() and srand()
#include <time.h>  // to use time()
#include <stdbool.h> // to use _Bool type

int main() {
    int dice1, dice2, sum, guess;
    char play_again;
    _Bool correct_guess = false;
    float average;
    double total = 0.0;
    int rounds = 0;

    srand(time(0)); // seed the random number generator

    do {
        //roll the dice
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        int sum = dice1 + dice2;

        //prompt the user for the guess
        printf("Guess the sum of the two dice(2-12): ");
        scanf("%d", &guess);

        //check the guess
        correct_guess = (guess == sum);

        //calculate the total and average sum of the dice rolls
        total += sum;
        rounds++;
        average = total / rounds;

        //give feedback
        if (correct_guess) {
            printf("Congratulations! You guessed correctly! The sum was %d.\n", sum);
        } else {
            printf("Sorry, you guessed incorrectly. The sum was %d.\n", sum);
        }

        //display the current average sum of the dice rolls
        printf("The average sum of the dice rolls is %.2f.\n", average);

        //ask the user if they want to play again
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &play_again);
    } while (play_again == 'y' || play_again == 'Y');

    printf("Thanks for playing!\n");
    return 0;
}