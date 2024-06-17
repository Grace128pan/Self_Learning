#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> // For tolower
#include <time.h>

int get_computer_choice() {
    return rand() % 3 + 1;
}

int get_winner(int player1, int player2) {
    if (player1 == player2)
        return 0; // Tie

    if (player1 == 1) {
        if (player2 == 2)
            return 2;
        else
            return 1;
    } else if (player1 == 2) {
        if (player2 == 3)
            return 2;
        else
            return 1;
    } else {
        if (player2 == 1)
            return 2;
        else
            return 1;
    }
}

int main(int argc, char *argv[]) {
    srand(time(NULL));

    int player1, player2;

    int second_player_is_human = 1;

    if (argc > 1 && strcmp(argv[1], "-c") == 0)
        second_player_is_human = 0;

    printf("Welcome to Rock-Paper-Scissors!\n");
    printf("Enter 'exit' to end the game.\n");

    while (1) {
        int starting_player = rand() % 2 + 1;

        printf("\nPlayer %d, enter your choice (1 for Rock, 2 for Paper, 3 for Scissors): ", starting_player);
        char input[10];
        scanf("%s", input);

        // Convert input to lowercase
        for (int i = 0; input[i]; i++) {
            input[i] = tolower(input[i]);
        }

        if (strcmp(input, "exit") == 0) {
            printf("Thanks for playing!\n");
            break;
        }

        player1 = atoi(input);

        if (player1 < 1 || player1 > 3) {
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
            continue;
        }

        if (second_player_is_human) {
            printf("Player 2, enter your choice (1 for Rock, 2 for Paper, 3 for Scissors): ");
            scanf("%s", input);

            // Convert input to lowercase
            for (int i = 0; input[i]; i++) {
                input[i] = tolower(input[i]);
            }

            if (strcmp(input, "exit") == 0) {
                printf("Thanks for playing!\n");
                break;
            }

            player2 = atoi(input);

            if (player2 < 1 || player2 > 3) {
                printf("Invalid choice! Please enter 1, 2, or 3.\n");
                continue;
            }
        } else {
            // Computer's turn
            player2 = get_computer_choice();
            printf("Computer chooses: ");
            switch(player2) {
                case 1:
                    printf("Rock\n");
                    break;
                case 2:
                    printf("Paper\n");
                    break;
                case 3:
                    printf("Scissors\n");
                    break;
            }
        }

        int winner = get_winner(player1, player2);
        if (winner == 0) {
            printf("It's a tie!\n");
        } else {
            printf("Player %d wins!\n", winner);
        }
    }

    return 0;
}
