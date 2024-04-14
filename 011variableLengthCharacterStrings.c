/*
variable-length character strings
In c language,  null character '\0' is used to terminate a string.
const char word[] = {'H', 'e', 'l', 'l', 'o', '\0'};
count the length of the string, null characters are not counted.
stringLength (characterString) should return the value of 3 when
char characterString[] = {'c', 'a', 't', '\0'};
*/

//program 9.2 counting the characters in a string

#include <stdio.h>

int stringLength (const char string[]) {
    int count = 0;
    while (string[count] !='\0') {
        count++;  
    }
    return count;
} 

int main(void) {
    int stringLength(const char string[]);
    const char word1[] = {'a', 's', 't', 'e', 'r', '\0'};
    const char word2[] = {'a', 't', '\0'};
    const char word3[] = {'a', 'w', 'e', 's', 'o', 'm', 'e', '\0'};

    printf("%i %i %i\n", stringLength(word1), stringLength(word2), stringLength(word3));
    return 0;
}