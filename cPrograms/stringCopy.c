//string copy

#include <stdio.h>
#include <string.h>

void copyString(char dest[], char src[]) {
    strcpy(dest, src);  //the destination array where the content is to be copied; the source string from which the content is to be copied.
}

int main() {
    char src[] = "What a nice day!";
    char dest[50];
    copyString(dest, src);
    printf("Copied string: %s\n", dest);
    return 0;
}