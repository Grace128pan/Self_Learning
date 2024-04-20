/*
exercise6: page 325
Develop insertEntry() and removeEntry() functions for a
doubly linked list that are similar in function to those developed in
previous exercises for a singly linked list. Why can your
removeEntry() function now take as its argument a direct pointer to
the entry to be removed from the list?

In a doubly linked list, each entry contains pointers to both the preceding and the next entry in the list. This makes it possible 
for the removeEntry() function to directly take a pointer to the entry to be removed, as it can access both the preceding and the 
next entry to adjust their pointers accordingly.
*/

#include <stdio.h>
#include <stdlib.h>

// Define a structure for a doubly linked list entry
struct entry {
    int data;
    struct entry *prev; // Pointer to the preceding entry in the list
    struct entry *next; // Pointer to the next entry in the list
};

// Function to insert a new entry into a doubly linked list after a given entry
void insertEntry(struct entry *newEntry, struct entry *after) {
    newEntry->next = after->next;
    newEntry->prev = after;
    if (after->next != NULL) {
        after->next->prev = newEntry;
    }
    after->next = newEntry;
}

// Function to remove an entry from a doubly linked list
void removeEntry(struct entry *entryToRemove) {
    if (entryToRemove == NULL) {
        return; // No entry to remove
    }

    if (entryToRemove->prev != NULL) {
        entryToRemove->prev->next = entryToRemove->next;
    }
    if (entryToRemove->next != NULL) {
        entryToRemove->next->prev = entryToRemove->prev;
    }
    free(entryToRemove); // Free the memory of the removed entry
}

// Function to print the elements of a doubly linked list
void printList(struct entry *head) {
    struct entry *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main(void) {
    // Create the head of the doubly linked list
    struct entry *head = NULL;

    // Create and initialize the first entry
    struct entry *entry1 = (struct entry *)malloc(sizeof(struct entry));
    entry1->data = 10;
    entry1->prev = NULL;
    entry1->next = NULL;
    head = entry1; // Set head to point to the first entry

    // Create and initialize the second entry
    struct entry *entry2 = (struct entry *)malloc(sizeof(struct entry));
    entry2->data = 20;
    insertEntry(entry2, entry1);

    // Create and initialize the third entry
    struct entry *entry3 = (struct entry *)malloc(sizeof(struct entry));
    entry3->data = 30;
    insertEntry(entry3, entry2);

    // Print the elements of the doubly linked list
    printf("Elements of the doubly linked list: ");
    printList(head);

    // Remove the second entry from the list
    removeEntry(entry2);

    // Print the updated list
    printf("List after removing the second entry: ");
    printList(head);

    // Free the allocated memory
    free(entry1);
    free(entry3);

    return 0;
}
