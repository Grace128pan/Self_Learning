/*
exercise 5:
This code defines a function findString() which searches for a substring within another string. 
It iterates through the source string and compares substrings with the target string. If a match is found, 
it returns the starting index of the match; otherwise, it returns -1. 
*/
#include <stdio.h>
#include <string.h>  
//<string.h> should be added in order to use strlen(), strcat(), strcpy(),strcamp(), strchr(),strstr(), strtok() usage

int findString(const char *source, const char *target) {
    int i, j, k;

    for (i = 0; source[i] != '\0'; i++) {
        j = i;
        k = 0;

        while (source[j] == target[k] && target[k] != '\0') {
            j++;
            k++;
        }

        if (target[k] == '\0') {
            return i; // Return the starting position where target was found
        }
    }

    return -1; // Return -1 if target was not found in source
}

int main() {
    char source[] = "a chatterbox";
    char target[] = "hat";

    int index = findString(source, target);

    if (index != -1) {
        printf("'%s' found at index %d in '%s'\n", target, index, source);
    } else {
        printf("'%s' not found in '%s'\n", target, source);
    }

    return 0;
}
