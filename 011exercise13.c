/* exercise 13: toupper()
If c is a lowercase character, the expression
c – 'a' + 'A'
produces the uppercase equivalent of c, assuming an ASCII character set.
Write a function called uppercase() that converts all lowercase
characters in a string into their uppercase equivalents.
*/
#include <stdio.h>

void uppercase(char *str) {
    while (*str != '\0') {
        // Check if the current character is lowercase
        if (*str >= 'a' && *str <= 'z') {
            // Convert lowercase to uppercase using the formula
            *str = *str - 'a' + 'A';
        }
        str++; // Move to the next character
    }
}

int main() {
    char str[100];

    // Input string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  //str is the test to be read, sizeof(str) is the size of the string, stdin is the standard input

    // Call the uppercase function to convert lowercase to uppercase
    uppercase(str);

    // Output the modified string
    printf("Uppercase string: %s\n", str);

    return 0;
}
