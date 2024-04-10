#include <stdio.h>
#include <string.h> //make sure "strcpy" can be used to copy strings

#define NUM_CITIES 10

typedef struct {
    char city[20]; // Changed to char array to store strings
    int temp;
} avg_temp;

avg_temp temps[NUM_CITIES];

void sort_cities(void);

int main(void) {
    // Initializing cities and temperatures
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

    sort_cities(); // Sorting cities by temperature

    printf("\nAverage July Temperatures by City\n\n");

    // Printing sorted cities
    for (int i = 0; i < NUM_CITIES; i++) {
        printf("%s: %i\n", temps[i].city, temps[i].temp);
    }
}

// Bubble sort algorithm for sorting cities by temperature in descending order
void sort_cities(void) {
    int i, j;
    avg_temp temp;

    for (i = 0; i < NUM_CITIES - 1; i++) {
        for (j = 0; j < NUM_CITIES - i - 1; j++) {
            if (temps[j].temp < temps[j + 1].temp) {
                // Swap if the temperature of current city is less than next city
                temp = temps[j];
                temps[j] = temps[j + 1];
                temps[j + 1] = temp;
            }
        }
    }
}

//structure is used to store the city name and temperature