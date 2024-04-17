//program 10.14 revised version of the copyString() function
#include <stdio.h>

void copyString(char *to, const char *from) {
    while(*from) {
        *++to = *++from;  //by doing this way, we are skipping the first character of the string
    }
    *to = '\0';
}

int main(void) {
    void copyString(char *to, const char *from);
    char string1[] = "This is just a test";
    char string2[50];

    copyString(string2, string1);
    printf("%s\n", string2);

    copyString(string2, "So awesome I am!");
    printf("%s\n", string2);

    return 0;
}