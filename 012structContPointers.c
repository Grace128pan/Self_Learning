/*
structure containing pointers
1.a pointer can also be a member of a structure
2.struct intPtrs {     //two integer pointers are included in the structure
    int *p1;
    int *p2;
};
struct intPtrs pointers;  //a structure variable can have 2 pointers as its members
*/

//using structures containing pointers program 10.5

#include <stdio.h>

int main(void) {
    struct intPtrs {
        int *p1;
        int *p2;
    };

    struct intPtrs pointers;
    int i1 = 100, i2;
    pointers.p1 = &i1;
    pointers.p2 = &i2;
    *pointers.p2 = -97;  //structure operator. has higher precedence than * indirection operator

    printf("i1 = %i, *pointers.p1 = %i\n", i1, *pointers.p1);
    printf("i2 = %i, *pointers.i2 = %i\n", i2, *pointers.p2);

    return 0;
}