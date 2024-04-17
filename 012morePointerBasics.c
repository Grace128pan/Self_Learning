//program 10.2 more pointer basics

#include <stdio.h>

int main(void) {
    char c = 'Q';
    char *char_pointer = &c; //c should be defined before it has been referenced in an expression

    printf("%c %c\n", c, *char_pointer);

    c = '/';
    printf("%c %c\n", c, *char_pointer);

    c = '(';
    *char_pointer = '(';
    printf("%c %c\n", c, *char_pointer);

    return 0;
}

/*
1.pointers can be defined in this way:
char *char_pointer;
char_pointer = &c;
*/