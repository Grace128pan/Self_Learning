/*
exercise3
The function developed in exercise 2 only inserts an element after an
existing element in the list, thereby preventing you from inserting a new
entry at the front of the list. How can you use this same function and yet
overcome this problem? (Hint: Think about setting up a special structure
to point to the beginning of the list.)
*/

#include <stdio.h>
#include <stdlib.h> // for malloc

// Define a structure for a list entry
struct entry {
    int data;
    struct entry *next;
};

// Define a structure for the list head
struct listHead {
    struct entry *first; // Pointer to the first entry in the list
};

// Function to insert a new entry into a linked list
void insertEntry(struct entry *newEntry, struct entry *after) {
    newEntry->next = after->next;
    after->next = newEntry;
}

// Function to insert a new entry at the front of the list
void insertAtFront(struct entry *newEntry, struct listHead *head) {
    newEntry->next = head->first;
    head->first = newEntry;
}

int main(void) {
    struct listHead head;
    head.first = NULL;

    // Allocate memory for entry1
    struct entry *entry1 = (struct entry *)malloc(sizeof(struct entry));
    if (entry1 == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1; // Return error code
    }
    entry1->data = 10;
    entry1->next = NULL;

    // Insert entry1 at the front of the list
    insertAtFront(entry1, &head);

    // Print the data in the linked list
    struct entry *current = head.first;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");

    return 0;
}

/*
stdin: Standard input stream. It is used by programs to read input from the user.
stdout: Standard output stream. It is used by programs to write normal output to the console.
stderr: Standard error stream. It is used by programs to write error messages and diagnostic information to the console.
*/