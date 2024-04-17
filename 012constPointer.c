/* page 300
in pointers to things to be considered
1)whether the pointer is constant
2)whether the thing it points to is constant
char c = 'x';
char *charPtr = &c;
char *const CharPtr = &c; // pointer is constant
so we can't change the address of the pointer  charPtr = &d;  will not be valid
3) const char *charPtr = &c; // thing it points to is constant
in this case  *charPtr = 'Y'; will not be valid
4) const char *const charPtr = &c; // both are constant
*/

//pointers and functions
/*
1. we can pass a pointer as an argument to a function
print_list(list_pointer);
inside the function, the formal parameter is a pointer
void print_list (struct entry *pointer) {}
although pointers can not be changed by function, the thing they point to can be changed
2. we can return a pointer from a function
*/

//program 10.8 using pointers and functions

#include <stdio.h>

void test(int *int_pointer) {
    *int_pointer = 100;
}

int main(void) {
    void test(int *int_pointer);
    int i = 50, *p = &i;

    printf("before the call to test i = %i\n", i);

    test (p);
    printf("after the call to test i = %i\n", i);

    return 0;
}