/*
int snprintf(char *str, size_t size, const char *format, ...);
str: Pointer to the string where the resulting C-string is stored.
size: Maximum number of characters to be copied to str (including the null terminator).
format: C string that contains a format string that follows the same specifications as format in printf.
...: Depending on the format string, the function may expect a sequence of additional arguments, each containing a value to be used to replace a format specifier in the format string (or a pointer to a storage location, for n).
*/

#include <stdio.h>

int main() {
    char buffer[20];
    int value = 12345;
    
    int length = snprintf(buffer, sizeof(buffer), "The value is %d", value);
    
    if (length >= sizeof(buffer)) {
        printf("String was truncated.\n");  // If the formatted string is too long to fit in the buffer,  truncation refers to the act of cutting off a portion of the data because it exceeds a certain limit or size constraint.
    } else {
        printf("Formatted string: %s\n", buffer);
    }
    
    return 0;
}

/*
pointers will be used
1.define simple pointers
2.using pointers in common c expressions
3.using pointers to create linked lists
4.apply the const keyword to pointers
5.pass pointers as arguments to functions
*/

/*
pointers and indirection
Indirection is the ability to reference something using a pointer.
indirection: basically pointers work in c in an indirect way
int count = 10;
int *int_pointer;
asterisk defines pointers, it is used to indirectly access the value of one or more integer values
1)unary operator & is known as address operator, it returns the address of a variable
int_pointer = &count;
this can set up the indirect reference between int_pointer and count
2) asterisk indirection operator *  address operator &
*/