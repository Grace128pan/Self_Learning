#include <stdio.h>

int main() {
    int height;

    printf("Enter the height of the pyramid (1 to 8 inclusive): ");
    scanf("%d", &height);

    // Check if height is within the specified range
    if (height < 1 || height > 8) {
        printf("Height should be in the range of 1 to 8 inclusive.\n");
        return 1; // Exiting with error
    }

    for (int i = 1; i <= height; i++) {
        // Print leading spaces
        for (int j = 0; j < height - i; j++) {
            printf(" ");
        }

        // Print hashtags on the left
        for (int j = 0; j < i; j++) {
            printf("#");
        }

        // Print spaces between the halves
        printf("  ");

        // Print hashtags on the right
        for (int j = 0; j < i; j++) {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
