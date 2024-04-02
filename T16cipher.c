#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char* cypher(char* input, int offset);

int main(int argc, char *argv[]) {
    // Check for correct number of command-line arguments
    if (argc != 2) {
        printf("error\n");
        return 1;
    }

    // Check if argv[1] is a number
    char *argument = argv[1];
    for (int i = 0; argument[i] != '\0'; i++) {
        if (!isdigit(argument[i])) {
            printf("Usage: %s key\n", argv[0]);
            return 1;
        }
    }

    // Get input
    char input[1000];
    printf("plaintext: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // Remove newline character

    int offset = atoi(argv[1]);
    char* output = cypher(input, offset);

    // Output ciphertext
    printf("ciphertext: %s\n", output);

    free(output); // Free dynamically allocated memory

    return 0;
}

char* cypher(char* input, int offset) {
    int len = strlen(input);
    int move = offset % 26;

    char* output = (char*)malloc((len + 1) * sizeof(char)); // Allocate memory for output string

    for (int i = 0; i < len; i++) {
        if (isalpha(input[i])) {
            char base = isupper(input[i]) ? 'A' : 'a';
            output[i] = ((input[i] - base + move) % 26) + base;
        } else {
            output[i] = input[i]; // Non-alphabetical characters remain unchanged
        }
    }
    output[len] = '\0'; // Null-terminate the output string

    return output;
}
