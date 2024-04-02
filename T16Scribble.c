#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

// Function to calculate the Scrabble score of a word
int calculateScore(char *word) {
    int score = 0;
    while (*word) {
        switch(toupper(*word)) {
            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
                score += 1;
                break;
            case 'D': case 'G':
                score += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                score += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                score += 4;
                break;
            case 'K':
                score += 5;
                break;
            case 'J': case 'X':
                score += 8;
                break;
            case 'Q': case 'Z':
                score += 10;
                break;
            default:
                printf("Invalid character detected: %c\n", *word);
                return -1; // Return -1 for invalid word
        }
        word++;
    }
    return score;
}

// Function to check if a string contains only letters
bool containsOnlyLetters(char *word) {
    while (*word) {
        if (!isalpha(*word))
            return false;
        word++;
    }
    return true;
}

int main() {
    char word1[100], word2[100];

    // Input words from players
    do {
        printf("Player 1: ");
        scanf("%s", word1);
        if (!containsOnlyLetters(word1))
            printf("Please enter a word containing only letters A-Z.\n");
    } while (!containsOnlyLetters(word1));

    do {
        printf("Player 2: ");
        scanf("%s", word2);
        if (!containsOnlyLetters(word2))
            printf("Please enter a word containing only letters A-Z.\n");
    } while (!containsOnlyLetters(word2));

    // Calculate scores for each player
    int score1 = calculateScore(word1);
    int score2 = calculateScore(word2);

    if (score1 == -1 || score2 == -1) {
        printf("Invalid words entered. Please try again.\n");
        return 1; // Exit with error code
    }

    // Determine the winner
    if (score1 > score2)
        printf("Player 1 wins!\n");
    else if (score1 < score2)
        printf("Player 2 wins!\n");
    else
        printf("It's a tie!\n");

    return 0;
}

//we should make sure the users input the correct letters from A to Z