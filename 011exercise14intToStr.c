/* exercise14  page278
Write a function called intToStr() that converts an integer value into
a character string. Be certain the function handles negative integers
properly
*/

#include <stdio.h>
#include <stdlib.h>

// Function to convert an integer to a character string
char* intToStr(int num) {
    // Maximum length of the integer string including sign and null terminator
    int maxLength = 12; // Assuming a 32-bit integer (-2147483648 to 2147483647)
    char* str = (char*)malloc(maxLength * sizeof(char)); // Allocate memory for the string
    if (str == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

/*The 's' in snprintf() stands for "secure", indicating that it's a safer version compared to sprintf(), 
as it prevents buffer overflow by taking an additional argument specifying the size of the buffer.
*/
    // Convert the integer to a string
    int length = snprintf(str, maxLength, "%d", num);
    if (length < 0 || length >= maxLength) {
        printf("Conversion error\n");
        free(str);
        exit(1);
    }

    return str;
}

int main() {
    int num;
    char* str;

    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Convert the integer to a string
    str = intToStr(num);

    // Output the converted string
    printf("String representation of the integer: %s\n", str);

    // Free the dynamically allocated memory
    free(str);

    return 0;
}
