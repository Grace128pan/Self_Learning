/*  page 242
Initializing and displaying character strings 
1. c permits a character array to be initialized by simply specifying a constant character string, rather
than a list of individual characters
char word[] = {'H', 'e', 'l', 'l', 'o', '\0'}; //curly braces can be omitted here
char word[] = "Hello";
2.if you explicitly specify the size of the array, make certain you leave enough room for the termination null character
char word[6] = "Hello"; // 6 characters, including the null character
3.%s inside the printf function is used to display an array of character that is terminated by the null character
if word is a null-terminated character array, printf("%s", word); will display the entire string
*/

//program 9.3 concatenating character strings
#include <stdio.h>

int main(void) {
    void concat(char result[], const char str1[], const char strs[]);
    const char s1[] = {"Test "};
    const char s2[] = {"works."};
    char s3[20];

    concat(s3, s1, s2);
    printf("%s\n", s3);
    return 0;
}

//function to concatenate two character strings

void concat(char result[], const char str1[], const char str2[]) {
    int i, j;

    //copy str1 to result
    for (i = 0; str1[i] != '\0'; i++) {
        result[i] = str1[i];
    }

    //copy str2 to result
    for (j = 0; str2[j] != '\0'; j++) {
        result[i+j] = str2[j];
    }
    //terminate the concatenated string with a null character
    result [i+j] = '\0';
}

//bear in mond that string must be defined to contain at least n+1 characters
//string[n] = '\0'; //null character(which takes up one character space) is automatically added to the end of the string
