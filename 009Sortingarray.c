/*
Sorting array:
1. you will use sort() function to sort an array in ascending order
you are sorting an array a of n elements
step1: set i to 0
step2: set j to i + 1
step3: if a[i] > a[j], then exchange their values
step4:set j to j + 1, if j < n, go to step3
step5:set i to i + 1, if i < n-1, go to step 2
step6: a is now sorted in ascending order
*/
// program 7.12 sorting an array of integers into ascending order

#include <stdio.h>

void sort(int a[], int n) {
    int i, j, temp;

    for (i = 0; i < n-1; i ++) {
        for ( j = i + 1; j < n; j ++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main(void) {
    int i;
    int array[16] = {34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11};

    void sort(int a[], int n);

    printf("The array before the sort: \n");

    for (i=0; i < 16; i++) {
        printf("%i ", array[i]);
    }

    sort(array, 16);

    printf("\n\nThe array after the sort: \n");

    for (i=0; i < 16; i ++) {
        printf("%i ", array[i]);
    }
    printf("\n");
    return 0;
}