/*
Write a pointer version of the sort() function from Chapter 7,
“Working with Functions.” Be certain that pointers are exclusively used
by the function, including index variables in the loops.
*/

#include <stdio.h>

void sort(int *array, int size) {
    int *i, *j, temp;
    for (i = array; i < array + size - 1; i ++) {
        for (j = i; j < array + size; j ++) {
            if (*i > *j) {
                temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
}

int main() {
    int numbers[] = {4, 3, 1, 5, 3};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i ++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    sort(numbers, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; i ++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}