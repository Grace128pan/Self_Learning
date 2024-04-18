#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Check for command line arguments
    if (argc != 2) {
        printf("Usage: %s infile\n", argv[0]);
        return 1;
    }

    // Create char buffer with size 7 chars to read into
    char buffer[8];

    // Create array to store plate numbers
    char **plates = (char **)malloc(8 * sizeof(char *));

    // Check if memory allocation was successful
    if (plates == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Open file for reading
    FILE *infile = fopen(argv[1], "r");
    if (infile == NULL) {
        printf("Unable to open file\n");
        return 1;
    }

    int idx = 0;
    // Read data from file using fread
    while (fread(buffer, sizeof(char), 7, infile) == 7) {
        // Replace '\n' with '\0' if present
        buffer[7] = '\0';

        // Allocate memory for plate number
        plates[idx] = (char *)malloc(strlen(buffer) + 1);
        if (plates[idx] == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }

        // Copy data from buffer to plates array
        strcpy(plates[idx], buffer);

        // Increase idx
        idx++;
    }

    // Close the file
    fclose(infile);

    // Output the results
    for (int i = 0; i < idx; i++) {
        printf("%s\n", plates[i]);
    }

    // Free dynamically allocated memory
    for (int i = 0; i < idx; i++) {
        free(plates[i]);
    }
    free(plates);

    return 0;
}
//valgrind is not compatible with windows, but codespace is possible