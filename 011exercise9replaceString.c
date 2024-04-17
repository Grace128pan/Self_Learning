/* exercise 9: page 278
You can extend even further the usefulness of the replaceString()
function from the preceding exercise if you have it return a value that
indicates whether the replacement succeeded, which means that the string
to be replaced was found inside the source string. So, if the function
returns true if the replacement succeeds and false if it does not, the
loop

do
stillFound = replaceString (text, " ", "");
while ( stillFound );
could be used to remove all blank spaces from text, for example.
Incorporate this change into the replaceString() function and try it
with various character strings to ensure that it works properly
*/

#include <stdio.h>
#include <string.h>

int findString(const char *source, const char *search);
void removeString(char *source, int start, int count);
void insertString(char *source, const char *insert, int position);

int replaceString(char *source, const char *s1, const char *s2) {
    int index = findString(source, s1); // Find the first occurrence of s1 in source

    if (index != -1) { // If s1 is found
        removeString(source, index, strlen(s1)); // Remove s1 from source
        insertString(source, s2, index); // Insert s2 into source at the location of s1
        return 1; // Replacement succeeded
    }
    
    return 0; // Replacement failed
}

int main() {
    char text[50] = "1 + 1 = 2";
    
    printf("Before replacement: %s\n", text);
    
    int stillFound;
    do {
        stillFound = replaceString(text, "1", "one");
    } while (stillFound);
    
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

//This program will replace all the 1 into one in the text string