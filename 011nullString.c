/*
1. a character string  contains no characters other than the null character is called null string
stringLength() = 0 if string is null string
char buffer[100] = ""; this means buffer is null string
*/

//the following program uses readLine(), alphabetic(), countWords() functions from previous programs

//program 9.8 counting words in a piece of text

#include <stdio.h>
#include <stdbool.h>

bool alphabetic(const char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return true;
    } else {
        return false;
    }
}

void readLine(char buffer[]) {
    char character;
    int i = 0;
    do {
        character = getchar();
        buffer[i] = character;
        i++;
    } while (character != '\n' && i < 200); // Add boundary to prevent buffer overflow
    buffer[i - 1] = '\0';
}

int countWords(const char string[]) {
    int i, wordCount = 0;
    bool lookingForWord = true;

    for (i = 0; string[i] != '\0'; i++) {
        if (alphabetic(string[i])) {
            if (lookingForWord) {
                wordCount++;
                lookingForWord = false;
            }
        } else {
            lookingForWord = true;
        }
    }
    return wordCount;
}

int main(void) {
    char text[200];
    int totalWords = 0;
    bool endOfText = false;

    printf("Type in your text.\n");
    printf("When you are done, press 'Return'.\n\n");

    while (!endOfText) {
        readLine(text);
        if (text[0] == '\0') {
            endOfText = true;
        } else {
            totalWords += countWords(text);
        }
    }
    printf("\nThere are %i words in the above text.\n", totalWords);
    return 0;
}

//press enter 2 times, we get return