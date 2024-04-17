 /*
 page313
 pointers to character strings can easily be used to access the individual characters of the string.
 write a function called copyString() to copy one string into another
 void copyString(char to[], char from[]) {
    int i;
    for (i=0; from[i] !='\0; i++) {
        to[i] = from[i];
    }
    to[i] = '\0';
 }
 */

//program 10.13 pointer version of copyString()

#include <stdio.h>

void copyString(char *to, const char *from) { //const char *from is a pointer to a constant character, not be changed
    for ( ; *from !='\0';from++, to++) {
        *to = *from;
    }
    *to = '\0';
}

int main(void) {
    void copyString(char *to, const char *from);
    char string1[] = "A string to be copied.";
    char string2[50];

    copyString(string2, string1);
    printf("%s\n", string2);

    copyString(string2, "So is this."); //string2 is the destination, "So is this." is the source
    printf("%s\n", string2);

    return 0;
}