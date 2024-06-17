//substring search

#include <stdio.h>
#include <string.h>

char* substringSearch(char str[], char substr[]) {   //char* is a pointer to a character
    return strstr(str, substr);
}

int main() {
    char str[] = "Hello, World!";
    char substr[] = "World";
    char* result = substringSearch(str, substr);
    if (result) {
        printf("Substring found at index: %ld\n", result - str);
    } else {
        printf("Substring not found\n");
    }
    return 0;
}