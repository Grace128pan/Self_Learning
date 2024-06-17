//string length calculations

#include <stdio.h>
#include <string.h>

int stringLength(char str[]){
    return strlen(str);
}

int main() {
    char str[] = "Hello World!";
    int length = stringLength(str);
    printf("Length of the string: %d", length);
    return 0;
}