/*
Write a function called removeEntry() to remove an entry from a
linked list. The sole argument to the procedure should be a pointer to the
list. Have the function remove the entry after the one pointed to by the
argument. (Why can’t you remove the entry pointed to by the argument?)
You need to use the special structure you set up in exercise 3 to handle the
special case of removing the first element from the list.
*/
#include <stdio.h>
#include <stdlib.h>

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
void insertAtFront(struct entry *newEntry, struct listHead *head) {
    newEntry->next = head->first;
    head->first = newEntry;
}

// Function to remove an entry from a linked list
void removeEntry(struct listHead *head) {
    if (head->first == NULL || head->first->next == NULL) {
        // If the list is empty or contains only one element, do nothing
        return;
    }
    
    struct entry *temp = head->first->next;  // Temporarily store the entry to be removed
    head->first->next = temp->next;          // Update the next pointer of the first entry
    free(temp);                              // Free the memory of the removed entry
}

// Function to print the data in the linked list
void printList(struct listHead *head) {
    struct entry *current = head->first;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main(void) {
    struct listHead head;
    head.first = NULL;

    // Insert some entries at the front of the list
    for (int i = 5; i > 0; i--) {
        struct entry *newEntry = (struct entry *)malloc(sizeof(struct entry));
        newEntry->data = i * 10;
        insertAtFront(newEntry, &head);
    }

    printf("Original list: ");
    printList(&head);

    // Remove an entry from the list
    removeEntry(&head);

    printf("List after removing entry: ");
    printList(&head);

    return 0;
}
