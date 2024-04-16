//page 276
/*
4. Write a function called substring() to extract a portion of a
character string.
1)substring(source, start, count, result);
substring("character", 4, 3, result);
this might extract"act" from "character" and place it in result.
2)substring("two words", 4, 20, result);
the result will be words, although 20 characters were requested by the call.
*/

#include <stdio.h>

void substring(const char source[], int start, int count, char result[]) {
    int sourceLength = 0;

    // Calculate the length of the source string
    while (source[sourceLength] != '\0') {
        sourceLength++;
    }

    // Ensure start index is within bounds
    if (start < 0 || start >= sourceLength) {
        printf("Error: Start index out of bounds\n");
        return;
    }

    int i, j = 0;
    // Extract characters from source and store in result
    for (i = start; i < sourceLength && j < count; i++, j++) {
        result[j] = source[i];
    }

    // Add null terminator to result
    result[j] = '\0';
}

int main() {
    char result[100];

    // Test cases
    substring("character", 4, 3, result);
    printf("Substring 1: %s\n", result);

    substring("two words", 4, 20, result);
    printf("Substring 2: %s\n", result);

    return 0;
}
