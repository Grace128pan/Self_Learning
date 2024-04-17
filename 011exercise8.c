/*
exercise 8: page 277
using findString(), removeString(), and insertString() functions to write a function called replaceString() that takes three character
string arguments as follows:
replaceString(source, s1, s2);
replaceString(text, "1", "one");
the function will replace the first occurence of the character string "1" inside the character string text, if it exists,
with the string"one"
replaceString(text, "*", "");
this function will remove the first star sign from the text and replace it with empty string
*/

#include <stdio.h>
#include <string.h>

int findString(const char *source, const char *search);
void removeString(char *source, int start, int count);
void insertString(char *source, const char *insert, int position);

void replaceString(char *source, const char *s1, const char *s2) {
    int index = findString(source, s1); // Find the first occurrence of s1 in source

    if (index != -1) { // If s1 is found
        removeString(source, index, strlen(s1)); // Remove s1 from source
        insertString(source, s2, index); // Insert s2 into source at the location of s1
    }
}

int main() {
    char text[50] = "1 + 1 = 2";
    
    printf("Before replacement: %s\n", text);
    
    replaceString(text, "1", "one");
    
    printf("After replacement: %s\n", text);
    
    return 0;
}

int findString(const char *source, const char *search) {
    int i, j;
    int source_length = strlen(source);
    int search_length = strlen(search);

    for (i = 0; i <= source_length - search_length; i++) {
        for (j = 0; j < search_length && source[i + j] == search[j]; j++);
        if (j == search_length) return i; // Match found
    }
    
    return -1; // Match not found
}

void removeString(char *source, int start, int count) {
    int source_length = strlen(source);
    int i;

    for (i = start; i < source_length - count + 1; i++) {
        source[i] = source[i + count];
    }
}

void insertString(char *source, const char *insert, int position) {
    int source_length = strlen(source);
    int insert_length = strlen(insert);
    int i;

    for (i = source_length; i >= position; i--) {
        source[i + insert_length] = source[i];
    }

    for (i = 0; i < insert_length; i++) {
        source[position + i] = insert[i];
    }
}
//It is a little bit complicated, but it works