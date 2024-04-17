/*
exercise 11:
extend the strToInt() function so that is the first character of the string is a minus sign, the value that
follows it is taken as a negative number
*/

#include <stdio.h>

int strToInt(const char string[]) {
    int i= 0, result = 0, sign = 1; 

    if (string[0] == '-') {
        sign = -1;
        i = 1; //move to the next character after the negative sign
    }

    for(; string[i] >= '0' && string[i] <= '9'; i++) {
        result = result * 10 + (string[i] - '0');
    }
    return sign * result;
}

int main() {
    printf("%i\n", strToInt("245"));
    printf("%i\n", strToInt("-100") + 25);
    printf("%i\n", strToInt("13x5"));

    return 0;
}