//page289 linked list
/*
1.the concepts of pointers to structures, and structures containing pointers are very powerful ones in c
2.linked lists, doubly linked lists, trees
struct entry {
    int value;
    struct entry *next;
}
struct entry n1, n2;
n1.next = &n2;
n2.next = &n3;
this is a linked list
*/
//program 10.6 function to use linked lists

#include <stdio.h>

int main(void) {
    struct entry {
        int value;
        struct entry *next;
    };

    struct entry n1, n2, n3;
    int i;
    n1.value = 100;
    n2.value = 200;
    n3.value = 300;

    n1.next = &n2;
    n2.next = &n3;

    i = n1.next->value;
    printf("%i ", i);

    printf("%i\n", n2.next->value);
    return 0;
}

//if we use n1.next = n2.next; this statement has the effect of copying the pointers contained in n2.next into n1.next
//because n2.next = &n3; n1.next = n2.next; then  n1.next->value = 300
/*
n2_3.next = n2.next;
n2.next = &n2_3; //this will insert n2_3 between n2 and n3
*/