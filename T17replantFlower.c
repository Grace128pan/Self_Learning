
/*
#include <stdio.h>
#include <stdbool.h>

// Function to replant flower in larger pot
void replant_flower(bool has_soil, bool has_water, bool has_larger_pot) {
    if (has_soil && has_water && has_larger_pot) {
        printf("Replanting the flower in a larger pot... Done!\n");
    } else {
        printf("Oops! You need the following supplies to replant the flower:\n");
        if (!has_soil) {
            printf("- Soil\n");
        }
        if (!has_water) {
            printf("- Water\n");
        }
        if (!has_larger_pot) {
            printf("- Larger pot\n");
        }
    }
}

int main() {
    // Assume we have all supplies initially
    bool has_soil = true;
    bool has_water = true;
    bool has_larger_pot = true;

    // Call the function to replant flower
    replant_flower(has_soil, has_water, has_larger_pot);

    return 0;
}
*/
#include <stdio.h>

// Function to replant flower in larger pot
void replant_flower() {
    printf("Oops! There are no supplies to replant the flower.\n");
    printf("You need the following supplies:\n");
    printf("- Larger pot\n");
    printf("- Soil\n");
    printf("- Water\n");
}

int main() {
    // Call the function to replant flower
    replant_flower();

    return 0;
}
