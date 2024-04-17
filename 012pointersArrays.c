/*
page 306
1.pointers to arrays result in code that uses less memory and executes faster
int array[100];
int *valuesPtr;   //pointer to an integer in the array
char array[100];
char *textPtr;  //pointer to a character in the array
valuesPtr = values //assigns the address of the first element of the array to the pointer
valuesPtr = &values[0]; //assigns the address of the first element of the array to the pointer
2. *valuesPtr can be used to access the first integer of the values array values[0]
to reference values[3], we can use *(valuesPtr + 3)
in general, *(valuesPtr + i) is equivalent to values[i]
3. to set values[10] to 27, we can use values[10] = 27 or *(valuesPtr + 10) = 27;
4.textPtr++; textPtr--;
*/

//program 10.11 working with pointers to arrays
//function to sum the elments of an integer array

#include <stdio.h>

int arraySum(int array[], const int n) {
    int sum = 0, *ptr;
    int *const arrayEnd = array + n;

    for( ; array < arrayEnd; array++) {
        sum += *array;
    }
    return sum;
}

int main(void) {
    int arraySum(int *array, const int n);
    int values[10] = {3,7,-9,3,6,-1,7,9,1,-5};

    printf("The sum is %i\n", arraySum(values, 10));
    return 0;
}