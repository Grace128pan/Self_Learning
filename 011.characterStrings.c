/*
chapter 9 character strings   page 235
1.understanding character arrays
2.employing variable-length character arrays
3.using escape characters
4. adding character arrays to structures
5. performing data operations on strings
*/
/*
1.the double quotation mark in c can contain any combination of letters, numbers, or special characters, other than a 
double quotation mark itself. 
2. char is declared to contain only a single character
plusSign = '+';
*/

//In the example above, 'A' is a single character constant, while "Hello, world!" is a string literal. 
//The %c format specifier is used to print single characters, and the %s format specifier is used to print strings./

//we we define char str[] ="Hello, world!";  str is an array of characters, we can modify its elements
#include <stdio.h>

int main() {
    char singleChar = 'a';
    const char* stringLiteral = "Hello, world!";

    printf("The single character is: %c\n", singleChar);
    printf("The string literal is: %s\n", stringLiteral);
}