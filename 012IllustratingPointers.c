//program 10.1 illustrating pointers

#include <stdio.h>

int main(void) {
    int count = 10, x;
    int *int_pointer;  //declared to be a pointer to an integer

    int_pointer = &count;   //create a pointer to this integer
    x = *int_pointer;

    printf("count = %i, x = %i\n", count, x);

    return 0;
}