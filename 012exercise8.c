/*
exercise8 write a function called sort3() to sort three integers in ascending order. The function is not to be implemented with arrays.
*/

//we can use pointers to handle this sorting problem

#include <stdio.h>

void sort3(int *a, int *b, int *c) {
    if (*a > *b) {
        int temp = *a;
        *a = *b; 
        *b = temp;
    }
    if (*b > *c) {
        int temp = *b;
        *b = *c;
        *c = temp;
    }
    if (*a > *c) {
        int temp = *a;
        *a = *c;
        *c = temp;
    }
}

int main() {
    int x = 3, y = 1, z = 2;
    printf("Before sorting: x = %d, y = %d, z = %d\n", x, y, z);

    sort3(&x, &y, &z);

    printf("After sorting: x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}