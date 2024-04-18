#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for an array of integers
    int *arr = (int *)malloc(n * sizeof(int));
    
    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Read elements from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the elements
    printf("Elements you entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free dynamically allocated memory
    free(arr);

    return 0;
}

/*
In this example, the program first prompts the user to enter the number of elements they want to store in the array. 
Then, it dynamically allocates memory for an array of integers using malloc(). After reading the elements from the user, 
it displays them back to the user. Finally, it frees the dynamically allocated memory using free(). This example illustrates 
how malloc() can be used to allocate memory for an array whose size is determined at runtime.
*/