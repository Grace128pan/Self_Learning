/*
exercise 10: page 278
write a dictionary sort function to sort a dictionary into alphabetical order
*/

#include <stdio.h>
#include <string.h>

// Define the maximum number of entries in the dictionary
#define MAX_ENTRIES 100   // Maximum number of entries in the dictionary

// Structure to hold value-definition pairs
struct DictionaryEntry {
    char value[50];
    char definition[100];
};

// Function to perform dictionary sort
void dictionarySort(struct DictionaryEntry dict[], int size) {
    // Bubble sort algorithm
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // Compare values and swap if necessary
            if (strcmp(dict[j].value, dict[j + 1].value) > 0) {
                struct DictionaryEntry temp = dict[j];
                dict[j] = dict[j + 1];
                dict[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct DictionaryEntry dictionary[MAX_ENTRIES];
    int size;

    // Input the size of the dictionary
    printf("Enter the number of entries in the dictionary: ");
    scanf("%d", &size);

    // Input value-definition pairs
    printf("Enter value-definition pairs (value definition):\n");
    for (int i = 0; i < size; i++) {
        scanf("%s %[^\n]", dictionary[i].value, dictionary[i].definition);
    }

    // Sort the dictionary
    dictionarySort(dictionary, size);

    // Print the sorted dictionary
    printf("\nSorted dictionary:\n");
    for (int i = 0; i < size; i++) {
        printf("%s: %s\n", dictionary[i].value, dictionary[i].definition);
    }

    return 0;
}

//this is the way to use bubble sort to sort the dictionary alphabetically
