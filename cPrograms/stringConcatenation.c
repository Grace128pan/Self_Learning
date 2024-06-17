//string concatenation

#include <stdio.h>
#include <string.h>

void concatenateStrings(char dest[], char src[]) {
    strcat(dest, src);
}

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "World!";
    concatenateStrings(str1, str2);
    printf("Concatenated String: %s\n", str1);
    return 0;
}
