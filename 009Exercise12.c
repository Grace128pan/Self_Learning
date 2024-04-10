//page 200:
/*
a. Write a function transposeMatrix() that takes as an argument a 4
× 5 matrix and a 5 × 4 matrix. Have the function transpose the 4 × 5
matrix and store the results in the 5 × 4 matrix. Also write a main()
routine to test the function.
*/

#include <stdio.h>

void transposeMatrix(int input[][5], int output[][4]) {
    for (int i=0; i<4; i++) {
        for (int j=0; j<5; j++) {
            output[j][i] = input [i][j];
        }
    }
}

int main() {
    int matrix1[4][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };

    int transposed[5][4];

    transposeMatrix(matrix1, transposed);

    printf("original Matrix(4*5): \n");

    for(int i=0; i<4; i++) {
        for (int j=0; j<5; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\nTransposed Matrix(5*4):\n");
    for(int i=0; i<5; i++) {
        for (int j=0; j<4; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//Very interesting to transpose 4*5 matrix to 5*4 matrix