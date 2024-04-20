/*
rewrite the compareString() function from chapter 9 so that character pointers are used instead of arrays
page325

*/

#include <stdio.h>

int compareString(const char *string1, const char *string2) {
    while (*string1 == *string2) {
        if (*string1 == '\0') {
            
            return 0;
        }
        string1 ++;
        string2 ++;
        }
   
    return *string1 - *string2;
 }

int main() {
    char string1[] = "hello";
    char string2[] = "world";

    printf("Comparing \"%s\" and \"%s\": %i\n", string1, string2, compareString(string1, string2));
    return 0;
}

//In order to make accurate comparisons, both pointers should point to the same number of characters in the strings being compared.
/*
In the main function, you're comparing the strings "hello" and "world". 
The result -15 indicates that the first differing characters in the strings have different ASCII values. 
Specifically, 'h' has an ASCII value of 104, while 'w' has an ASCII value of 119. 
Therefore, the difference is calculated as 104 - 119 = -15, leading to the result -15.
*/