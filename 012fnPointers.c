/*
exercise2: page324
1. when working with pointers to functions, we need to know the type of value returned and the number and types of its arguments
int (*fptr)(int, int); // fptr is a pointer to a function that takes two int arguments and returns an int
FUNCTION operator () has higher precedence than indirection operator * so we need to use parentheses to avoid confusion
2. it is valid to store function pointers in an array, so we can create tables that contains pointers to functions to be called
3. dispatch tables 
4. pointers and memory address
on most computer system, a memory cell is called a byte

Write a function called insertEntry() to insert a new entry into a
linked list. Have the procedure take as arguments a pointer to the list entry
to be inserted (of type struct entry as defined in this chapter), and a
pointer to an element in the list after which the new entry is to be
inserted.

*/
#include <stdio.h>

// Define the structure for a list entry
struct entry {
    int data;             // Data of the entry
    struct entry *next;   // Pointer to the next entry
};

// Function to insert a new entry into a linked list
void insertEntry(struct entry *newEntry, struct entry *after) {
    newEntry->next = after->next;   // Set the next pointer of the new entry to the next pointer of the entry after
    after->next = newEntry;         // Update the next pointer of the entry after to point to the new entry
}

// Example usage
int main(void) {
    // Define some entries for testing
    struct entry entry1 = {10, NULL};
    struct entry entry2 = {20, NULL};
    struct entry entry3 = {30, NULL};

    // Link the entries together
    entry1.next = &entry2;
    entry2.next = &entry3;

    // Create a new entry to be inserted
    struct entry newEntry = {25, NULL};

    // Insert the new entry after entry2
    insertEntry(&newEntry, &entry2);

    // Print the data in the linked list
    struct entry *current = &entry1;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");

    return 0;
}

//using poe to show how it works is helpful.