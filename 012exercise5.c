/*
exercise 5: page 325
A doubly linked list is a list in which each entry contains a pointer to the
preceding entry in the list as well as a pointer to the next entry in the list.
Define the appropriate structure definition for a doubly linked list entry
and then write a small program that implements a small doubly linked list
and prints out the elements of the list.
*/
#include <stdio.h>
#include <stdlib.h>

struct entry {
    int data;
    struct entry *prev;
    struct entry *next;
};

//function to preint the elements of a doubly linked list
void printList(struct entry *head) {
    struct entry *current = head;
    while (current != NULL) {
        printf("%d ", current -> data);
        current = current -> next;
    }
    printf("\n");
}

int main(void) {
    struct entry *head = NULL;

    struct entry *entry1 = (struct entry *)malloc(sizeof(struct entry));
    entry1 -> data = 10;
    entry1 -> prev = NULL;
    entry1 -> next = NULL;
    head = entry1;

    struct entry *entry2 = (struct entry *)malloc(sizeof(struct entry));
    entry2 -> data = 20;
    entry2 -> prev = entry1;
    entry2 -> next = NULL;
    entry1 -> next = entry2;

    struct entry *entry3 = (struct entry *)malloc(sizeof(struct entry));
    entry3 -> data = 30;
    entry3 -> prev = entry2;
    entry3 -> next = NULL;
    entry2 -> next = entry3;

    printf("Elements of the doubly linked list: ");
    printList(head);

    free(entry1);
    free(entry2);
    free(entry3);

    return 0;

}


