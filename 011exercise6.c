/*
exercise6: page 276
write a function called removeString() to remove a specific number of characters from a character string
the function should take three arguments: the source string, the starting index number in the source string, and the number of characters to remove
1)removeString("the wrong son", 4, 6), the final output would be "the son"

*/
#include <stdio.h>
#include <string.h>

void removeString(char *source, int start, int count) {
    int i, length;

    // Get the length of the source string
    length = strlen(source);

    // Shift characters to the left to overwrite the removed characters
    for (i = start; i <= length - count; i++) {
        source[i] = source[i + count];
    }

    // Null-terminate the string at the correct position
    source[length - count] = '\0';
}

int main() {
    char text[] = "the wrong son";
    int start = 4;
    int count = 6;

    printf("Before removing: %s\n", text);
    
    removeString(text, start, count);

    printf("After removing: %s\n", text);

    return 0;
}
