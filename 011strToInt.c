//program 9.11 converting a string to its integer equivalent

//function to convert a string to an integer

#include <stdio.h>

int strToInt (const char string[]) {
    int i, intValue, result = 0;

    for (i=0; string[i] >='0' && string[i] <= '9'; i++) {
        intValue = string[i] -'0';
        result = result * 10 + intValue;
    }
    return result;
}

int main(void) {
    int strToInt(const char string[]);

    printf("%i\n", strToInt("245"));
    printf("%i\n", strToInt("100")+25);
    printf("%i\n", strToInt("13*5"));  //there are special character * there, so the output is 13

    return 0;
}

/*
ASCII value of '5' is 53.
ASCII value of '0' is 48.
So, intValue = '5' - '0' will result in intValue = 53 - 48, which equals 5.
*/
/*
1.c programming has many useful functions
strlen()-to find the length of a character string
strcmp()-to compare two strings
strcat()-to concatenate two strings
strcpy()-to copy one string to another
atoi()-to convert a string to an integer
isupper()-to check if a character is uppercase
islower()-to check if a character is lowercase
isdigit()-to check if a character is a digit
isalpha()-to check if a character is a letter
*/