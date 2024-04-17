/* page 303
this program shows how to return a pointer from a function
this progrom defines a function called findEntry(), the purpose of hwich is to search through a linked list to find a specified value
when the specified value is found, the program returns a pointer to the entry in the linked list
if the desired value is not found, the program returns the null pointer
*/

//program 10.10 returning a pointer from a function

#include <stdio.h>

struct entry {
    int value;
    struct entry * next;
};

struct entry *findEntry (struct entry *listPtr, int match) {
    while (listPtr != (struct entry *) 0) {
        if (listPtr-> value == match) {
            return (listPtr);
        } else {
            listPtr = listPtr ->next;
        }   
        }
    return (struct entry *) 0;
}

int main(void) {
    struct entry *findEntry(struct entry *listPtr, int match);
    struct entry n1, n2, n3;
    struct entry *listPtr, *listStart = &n1;

    int search;
    n1.value = 100;
    n1.next = &n2;

    n2.value = 200;
    n2.next = &n3;

    n3.value = 300;
    n3.next = 0;

    printf("Enter value to locate: ");
    scanf("%i", &search);

    listPtr = findEntry(listStart, search);

    if(listPtr !=(struct entry *) 0) {
        printf("Found %i.\n", listPtr->value);
    } else {
        printf("Not found.\n");
    }

    return 0;
}

//trees and hash tables can aslo be used to store and search for data in a program