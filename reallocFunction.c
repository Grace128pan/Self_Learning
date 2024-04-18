#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    printf("Enter the initial size of the array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for an array of integers
    int *arr = (int *)malloc(n * sizeof(int));
    
    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Read and display the initial elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Initial elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Prompt the user for the new size of the array
    printf("Enter the new size of the array: ");
    scanf("%d", &m);

    // Resize the array using realloc()
    arr = (int *)realloc(arr, m * sizeof(int));
    
    // Check if reallocation was successful
    if (arr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    // Read and display the additional elements
    printf("Enter %d additional elements:\n", m - n);
    for (int i = n; i < m; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Updated elements of the array:\n");
    for (int i = 0; i < m; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free dynamically allocated memory
    free(arr);

    return 0;
}
