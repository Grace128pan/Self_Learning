/* page 276
The countWords() function from Programs 9.7 and 9.8 incorrectly
counts a word that contains an apostrophe as two separate words. Modify
this function to correctly handle this situation. Also, extend the function to
count a sequence of positive or negative numbers, including any embedded
commas and periods, as a single word.
*/

//counting words in a text and handle words with apostrophes and sequences of positive or negative numbers

#include <stdio.h>
#include <stdbool.h>
//in English "cat's" and "dog's" are considered as correct English words, we should consider apostrophes as part of the word
bool alphabetic(const char c) {
    if((c >='a' && c <='z') || (c >='A' && c <='Z')|| c == '\'') {
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
    } while (character != '\n');
    buffer[i-1] ='\0';
}

int countWords (const char string[]) {
    int i, wordCount = 0;
    bool lookingForWord = true;

    for (i = 0; string[i] !='\0'; i++) {
        if (alphabetic(string[i])) {
            if (lookingForWord) {
                wordCount ++;
                lookingForWord = false;
            }
        } else if(string[i] == ',' || string[i] == '.') {
            while (string[i] == ',' || string[i] == '.') {
                i++;
            }
            if (alphabetic(string[i])) {
                wordCount ++;
                lookingForWord = false;
            }
        } else {
            lookingForWord = true;
        }
    }
    return wordCount;
}

int main(void) {
    char text[81];
    int totalWords = 0;

    printf("Type in your text.\n");
    printf("When you are done, press 'Return'.\n\n");

    while(1) {
        readLine(text);
        if (text[0] == '\0') {
            break;
        }
        totalWords += countWords(text);
    }

    printf("\nThere are %i words in the above text.\n", totalWords);
    return 0;
}