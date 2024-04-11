/*
exercise12.b page 200
b. Using variable-length arrays, rewrite the transposeMatrix()
function developed in exercise 12a to take the number of rows and
columns as arguments, and to transpose the matrix of the specified
dimensions.
A variable-length array (VLA) is an array whose length is determined at runtime rather than compile time
*/
#include <stdio.h>
#include <stdlib.h>  // this is used for dynamic memory allocation

// Function to transpose a matrix of given dimensions
// the reason for using **input is to allow flexibility in handling 2D arrays of different sizes
// int input[i][j] means fixed-size 2D array, i and j must be known at compile time
void transposeMatrix(int rows, int cols, int **input, int **output) {  //input and output are pointers to pointers
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            output[j][i] = input[i][j];
        }
    }
}

// Function to allocate memory for a 2D array
int** allocateArray(int rows, int cols) {
    int **arr = (int **)malloc(rows * sizeof(int *));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
        if (arr[i] == NULL) {
            printf("Memory allocation failed\n");
            exit(EXIT_FAILURE);
        }
    }
    return arr;
}

// Function to free memory allocated for a 2D array
void freeArray(int **arr, int rows) {
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
}

int main() {
    // Define a matrix with specified dimensions
    int rows = 4, cols = 5;
    int **matrix1 = allocateArray(rows, cols);
    int **transposed = allocateArray(cols, rows);

    // Initialize matrix1
    int count = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix1[i][j] = count++;
        }
    }

    // Transpose the matrix
    transposeMatrix(rows, cols, matrix1, transposed);

    // Display the original matrix
    printf("Original Matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    // Display the transposed matrix
    printf("\nTransposed Matrix (%d x %d):\n", cols, rows);
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }

    // Free memory
    freeArray(matrix1, rows);
    freeArray(transposed, cols);

    return 0;
}

/*
The transposeMatrix() function now takes pointers to pointers to integers (int **) instead of 2D arrays.
Two helper functions, allocateArray() and freeArray(), are defined to allocate and deallocate memory for 2D arrays dynamically.
Inside the main() function, we allocate memory for the original matrix (matrix1) and the transposed matrix (transposed) using the allocateArray() function.
After using the matrices, memory is freed using the freeArray() function to prevent memory leaks.
*/
//need more time to figure it out.
//In this way, pointers are utilized. I need to make more progress in the following chapters