/*
rewrite the readLine() function from chapter 9 so that is uses a character pointer rather than an array
*/

#include <stdio.h>

void readLine(char *buffer) {
    char character;
    int i = 0;
    do {
        character = getchar();
        *(buffer + i) = character;
        i++;
    } while(*(buffer + i - 1) != '\n');

    *(buffer + i - 1) = '\0';
}

int main() {
    int i;
    char line[81];
    for (i=0; i<3; i++) {
        readLine(line);
        printf("%s\n", line);
    }
    return 0;
}

//This will just read the stuff written in the terminal and print it out.