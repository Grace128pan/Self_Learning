/*
page 263 
character strings, structures, and arrays
1.We can define a structure to store the word and its definition
struct entry {
    char word[15];
    char definition[50];
}
struct entry word1 = {"blob", "an amorphous mass"};
struct entry dictionary[100];
entry = lookup(dictionary, word, entries); //return -1 if the word is not found
*/

//program 9.9 using the dictionary lookup program
#include <stdio.h>
#include <stdbool.h>

struct entry {
    char word[15];
    char definition[50];
};

bool equalStrings(const char s1[], const char s2[]) {
    int i = 0;
    bool areEqual;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        i++;
    }
    if (s1[i] == '\0' && s2[i] == '\0') {
        areEqual = true;
    } else {
        areEqual = false;
    }
    return areEqual;
}

int lookup(const struct entry dictionary[], const char search[], const int entries) {
    int i;

    for (i = 0; i < entries; i++) {
        if (equalStrings(search, dictionary[i].word)) {
            return i;
        }
    }
    return -1;
}

int main(void) {
    const struct entry dictionary[10] = {
        {"aardvark", "a burrowing African mammal"},
        {"abyss", "a bottomless pit"},
        {"acumen", "mentally sharp; keen"},
        {"addle", "to become confused"},
        {"aerie", "a high nest"},
        {"affix", "to append; attach"},
        {"agar", "a jelly made from seaweed"},
        {"ahoy", "a nautical call of greeting"},
        {"aigrette", "an ornamental cluster of feathers"},
        {"ajar", "partially opened"}
    };

    char word[15];
    int entries = 10;
    int entry;

    printf("Enter word:");
    scanf("%14s", word);

    entry = lookup(dictionary, word, entries);

    if (entry != -1) {
        printf("%s\n", dictionary[entry].definition);
    } else {
        printf("Sorry, the word %s is not in my dictionary.\n", word);
    }
    return 0;
}
