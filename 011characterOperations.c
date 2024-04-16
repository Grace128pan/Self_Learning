//character operations  page272

#include <stdio.h>

int main(void) {
    char c1 = 'm';
    char c = 'a' + 1;
    int i = c - '0';
    printf("%i\n", c1); // the output is 109
    printf("%c\n", c); // the output is b
    printf("%i\n",'0'); //the output is 48
    printf("%i\n", i); // the output is 50
    printf("%i\n", c); // the output is 98
}
//take advantage of ASCII code to do character operations, convert string to integer