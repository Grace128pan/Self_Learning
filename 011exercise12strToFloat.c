/* page 278
write a function called strToFloat that converts a character string into a floating point number.
have the function accept an optional leading minus sign.
strToFloat("-867.6921") should return the value -867.6921
*/
#include <stdio.h>
#include <ctype.h>
/* This header file contains functions that allow you to classify characters, 
such as determining if a character is alphabetic, numeric, lowercase, uppercase
*/

float strToFloat(const char string[]) {   //take the string array as an argument
    int i = 0;
    float result = 0.0f;
    float sign = 1.0f;   //indicate a positive floating point number, may be set to -1.0f if a negative sign is found
    float decimalMultiplier = 0.1f;
    int decimalFlag = 0;  //initialize to 0, set to 1 if a decimal point is found

    // Check for negative sign
    if (string[0] == '-') {
        sign = -1.0f;
        i = 1; // Move to next character after the negative sign
    }

    for (; string[i] != '\0'; ++i) {
        if (isdigit(string[i])) {
            if (decimalFlag) {   //parsing the fractional part
                result = result + (string[i] - '0') * decimalMultiplier;
                decimalMultiplier *= 0.1f;
            } else {  //parse the integer part
                result = result * 10.0f + (string[i] - '0');
            }
        } else if (string[i] == '.') {  //check for a decimal point
            decimalFlag = 1;
        } else {
            // Invalid character
            printf("Error: Invalid character encountered: %c\n", string[i]);
            return 0.0f;
        }
    }

    return sign * result;
}

int main(void) {
    printf("%.4f\n", strToFloat("-867.6921"));
    printf("%.4f\n", strToFloat("123.456"));
    printf("%.4f\n", strToFloat("3.14"));
    printf("%.4f\n", strToFloat("12.34x"));   //invalid character encountered
    return 0;
}
