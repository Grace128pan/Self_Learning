#include <stdio.h>
#include <string.h>

#define NUM_CITIES 10

typedef struct {
    char city[20]; // Changed to char array to store strings
    int temp;
} avg_temp;

avg_temp temps[NUM_CITIES];

void sort_cities(void);

int main(void) {
    strcpy(temps[0].city, "Austin");
    temps[0].temp = 97;

    strcpy(temps[1].city, "Boston");
    temps[1].temp = 82;

    strcpy(temps[2].city, "Chicago");
    temps[2].temp = 85;

    strcpy(temps[3].city, "Denver");
    temps[3].temp = 90;

    strcpy(temps[4].city, "Las Vegas");
    temps[4].temp = 105;

    strcpy(temps[5].city, "Los Angeles");
    temps[5].temp = 82;

    strcpy(temps[6].city, "Miami");
    temps[6].temp = 97;

    strcpy(temps[7].city, "New York");
    temps[7].temp = 85;

    strcpy(temps[8].city, "Phoenix");
    temps[8].temp = 107;

    strcpy(temps[9].city, "San Francisco");
    temps[9].temp = 66;

    sort_cities();

    printf("\nAverage July Temperatures by City\n\n");

    for (int i = 0; i < NUM_CITIES; i++) {
        printf("%s: %i\n", temps[i].city, temps[i].temp);
    }
}

// Selection sort algorithm for sorting cities by temperature in descending order
void sort_cities(void) {
    int i, j, max_index;
    avg_temp temp;

    for (i = 0; i < NUM_CITIES - 1; i++) {
        max_index = i;

        for (j = i + 1; j < NUM_CITIES; j++) {
            if (temps[j].temp > temps[max_index].temp) {
                max_index = j;
            }
        }

        // Swap the elements
        temp = temps[i];
        temps[i] = temps[max_index];
        temps[max_index] = temp;
    }
}
