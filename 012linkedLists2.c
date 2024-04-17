/*  page 296
usually associated with a linked list is at least one pointer to the list
the pointer is used to access the first element of the list
1)struct entry *list_pointer = &n1;
2)a constant value 0 is used to indicate the end of the list, named null pointer
3)you can mark the three-entry list's end by storing the null pointer in n3.next
n3.next = (struct entry *) 0;
*/

//program 10.7 traversing alinked list(use while loop to sequence through the list and display the value member of each entry in the list)
#include <stdio.h>

int main(void) {
    struct entry {
        int value;
        struct entry *next;
    };

    struct entry n1, n2, n3;
    struct entry *list_pointer = &n1;

    n1.value = 100;
    n1.next = &n2;
    
    n2.value = 200;
    n2.next = &n3;

    n3.value = 300;
    n3.next = (struct entry *) 0;

    while (list_pointer != (struct entry *) 0) {
        printf("%i\n", list_pointer->value);
        list_pointer = list_pointer->next;
    }
    return 0;
}