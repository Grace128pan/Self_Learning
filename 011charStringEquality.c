/*
Testing two character strings for equality
1.if(string1 == string2)
    printf("The strings are equal\n");
else
    printf("The strings are not equal\n");
equality operator can be applied to floats, ints, chars, strings,  but not to arrays, or structures
2.if (equalStrings(string1, string2))
    printf("The strings are equal\n");
else
    printf("The strings are not equal\n");
*/
// program 9.4 testing two strings for equality

#include <stdio.h>
#include <stdbool.h>

bool equalStrings(const char s1[], const char s2[]) {
    int i = 0;
    bool areEqual;

    while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        i++; }
    if (s1[i] == '\0' && s2[i] == '\0') {
        areEqual = true;
    } else {
        areEqual = false;
    }
    return areEqual;
   
}

int main(void) {
    bool equalStrings(const char s1[], const char s2[]);
    const char stra[] = "string compare test";
    const char strb[] = "string";

    printf("%i\n", equalStrings(stra, strb));
    printf("%i\n", equalStrings(stra, stra));
    printf("%i\n", equalStrings(strb, "string"));
    return 0;
}