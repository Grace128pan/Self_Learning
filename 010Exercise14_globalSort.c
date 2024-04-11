/*
Rewrite the functions developed in the last four exercises to use global
variables instead of arguments. For example, the preceding exercise
should now sort a globally defined array.
*/

#include <stdio.h>

int array[16] = {34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11};
int ascending = 1; // Sorting order: 1 for ascending, 0 for descending

void sort(void) {
    int i, j, temp;
    int n = sizeof(array) / sizeof(array[0]); // Calculate the size of the array

    for (i = 0; i < n - 1; ++i) {
        for (j = i + 1; j < n; ++j) {
            if (ascending) {
                if (array[i] > array[j]) {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            } else {
                if (array[i] < array[j]) {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
    }
}

int main(void) {
    int i;

    printf("The array before the sort:\n");
    for (i = 0; i < 16; ++i)
        printf("%i ", array[i]);

    sort(); // Sort the array using the global variables

    printf("\n\nThe array after the sort:\n");
    for (i = 0; i < 16; ++i)
        printf("%i ", array[i]);

    printf("\n");
    return 0;
}