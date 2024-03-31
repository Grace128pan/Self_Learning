/*
1.a multidimensional array can be passed to a function in the same way as a one-dimensional array
eg. squareRoot(matrix[i][j]);
scalarMultiply(measured_values, constant), measured_values is a two-dimensional array
2. the number of columns must be specified in the function declaration
int array_values[100][50];
int array_values[][50]; both are valid
*/

// program 7.13 use multidimensional arrays and functions

#include <stdio.h>

int main(void) {
    void scalarMultiply (int matrix[3][5], int scalar);
    void displayMatrix(int matrix[3][5]);
    int sampleMatrix[3][5] = {
        {7, 16, 55, 13, 12},
        {12, 10, 52, 0, 7},
        {-2, 1, 2, 4, 9}
    };

    printf("Original matrix:\n");
    displayMatrix(sampleMatrix);

    scalarMultiply(sampleMatrix, 2);

    printf("\nMultiplied by 2:\n");
    displayMatrix(sampleMatrix);

    scalarMultiply(sampleMatrix, -1);

    printf("\nThen multiplied by -1:\n");
    displayMatrix(sampleMatrix);

    return 0;
}

//function to multiply a 3 * 5 array by a scalar

void scalarMultiply(int matrix[3][5], int scalar) {
    int row, column;

    for (row = 0; row < 3; row++) {
        for (column = 0; column < 5; column++) {
            matrix[row][column] *= scalar;
        }
    }
}

void displayMatrix(int matrix[3][5]) {
    int row, column;

    for (row = 0; row < 3; row++) {
        for (column = 0; column < 5; column++) {
            printf("%5i", matrix[row][column]);
        }
        printf("\n");
    }
}