/*
One of the most natural applications for a two-dimensional array arises in the case of a matrix
1. Mi,j, here i means row, j means column. i and j all starts from 0.
2. Two-dimensional arrays can be initialized in the following way
int M[4][5] = {
    {10, 5, -3, 17, 82},
    {9, 0, 0, 8, -7},
    {32, 20, 1, 0, 14},
    {0, 0, 8, 7, 6}
}; //here M[1][2] = 0, it means 1st row and 2nd column(starting from 0 row and 0 column)
3. if we do not initialize all the values in the 2D array, the rest of the values will be initialized to 0.
4.int matrix[4][3] = {[0][0] = 1, [1][1] = 5, [2][2] = 9, [3][2] = 7};
the unspecified elements are initialized to zero.
*/

//Variable Length arrays
/*
int size;
printf("Enter the size of the array: ");
scanf("%d", &size);
int array[size]; //this is called variable length array
1. The size of the array is determined at runtime.
2. The size of the array is determined by the value of the variable size.
3. The size of the array is not determined at compile time.
4.it can only declare in the function, not in the global scope.
5. it can not be declared in static function
*/

//program 6.8 page127  Generating Fibonacci Numbers Using Variable Length Arrays
/*
Fibonacci numbers are a sequence of numbers in which each number is the sum of the two preceding ones, usually starting with 0 and 1.
*/

#include <stdio.h>

int main() 
{
    int i, numFibs;

    printf("How many Fibonacci numbers do you want(between 1 and 75)? ");
    scanf("%d", &numFibs);

    if (numFibs < 1 || numFibs > 75) {
        printf("Bad number, sorry!\n");
        return 1;
    }

    unsigned long long int Fibonacci[numFibs];

    Fibonacci[0] = 0;
    Fibonacci[1] = 1;

    for (i = 2; i < numFibs; i++) {
        Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];
    }

    for (i = 0; i < numFibs; i++) {
        printf("%llu ", Fibonacci[i]);  //%llu is used for unsigned long long int
    }

    printf("\n");
    return 0;
}