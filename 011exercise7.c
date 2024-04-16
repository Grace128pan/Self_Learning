/* page 277
write a function called insertString() to insert one character string into another string.
1)the arguments consist of the source string, the string to be inserted, and the position in the source string
where the string is to be inserted
2)insertString(text,"per", 10)
*/

#include <stdio.h>
#include <string.h>

void insertString (char *source, const char *insert, int position) {
    int source_length = strlen(source);
    int insert_length = strlen(insert);
    int i;

    for (i=source_length; i>=position; i--) {
        source[i + insert_length] = source[i];
    }

    for (i = 0; i < insert_length; i++) {
        source[position + i] = insert[i];
    }
}

int main() {
    char text[50] = "the wrong son";
    const char insert[] = "per";
    int position = 10;

    printf("Before insertion: %s\n", text);

    insertString(text, insert, position);

    printf("After insertion: %s\n", text);

    return 0;
}