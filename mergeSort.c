#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_CITIES 10

typedef struct {
    char city[20];
    int temp;
} avg_temp;

avg_temp temps[NUM_CITIES];

void sort_cities(int low, int high);
void merge(int low, int mid, int high);

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

    sort_cities(0, NUM_CITIES - 1);

    printf("\nAverage July Temperatures by City\n\n");

    for (int i = 0; i < NUM_CITIES; i++) {
        printf("%s: %i\n", temps[i].city, temps[i].temp);
    }

    return 0;
}

// Merge sort algorithm to sort cities by temperature in descending order
void sort_cities(int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;

        sort_cities(low, mid);
        sort_cities(mid + 1, high);

        merge(low, mid, high);
    }
}

// Merge function to merge two sorted subarrays
void merge(int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;

    avg_temp left[n1], right[n2];

    for (int i = 0; i < n1; i++) {
        left[i] = temps[low + i];
    }
    for (int j = 0; j < n2; j++) {
        right[j] = temps[mid + 1 + j];
    }

    int i = 0, j = 0, k = low;

    while (i < n1 && j < n2) {
        if (left[i].temp >= right[j].temp) {
            temps[k] = left[i];
            i++;
        } else {
            temps[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        temps[k] = left[i];
        i++;
        k++;
    }

    while (j < n2) {
        temps[k] = right[j];
        j++;
        k++;
    }
}
