#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to replace vowels with numbers
void replace_vowels(char *word) {
    while (*word) {
        switch (*word) {
            case 'a':
                *word = '6';
                break;
            case 'e':
                *word = '3';
                break;
            case 'i':
                *word = '1';
                break;
            case 'o':
                *word = '0';
                break;
            // 'u' remains unchanged
        }
        word++;
    }
}

int main(int argc, char *argv[]) {
    // Check if the program is executed with the correct number of command-line arguments
    if (argc != 2) {
        printf("Error: Please provide exactly one word as a command-line argument.\n");
        return 1; // Return 1 to indicate error
    }

    // Get the word from command-line argument
    char *word = argv[1];

    // Replace vowels with numbers
    replace_vowels(word);

    // Print the converted word
    printf("Converted word: %s\n", word);

    return 0; // Return 0 to indicate success
}
