/*
Global variables: page 188/1270
1. a global variable: a variable that is declared outside of any function, they can be referenced by any function in the program
*/
//program 7.15 converting a positive integer to another base

#include <stdio.h>

int convertedNumber[64];
long int numberToConvert;
int base;
int digit = 0;

void getNumberAndBase(void) {
    printf("Number to be converted? ");
    scanf("%li", &numberToConvert);

    printf("Base? ");
    scanf("%i", &base);

    if(base<2 || base>16) {
        printf("Bad base- must be between 2 and 16\n");
        base = 10;
    }
}

void convertNumber(void) {
    do {
        convertedNumber[digit] = numberToConvert % base;
        digit++;
        numberToConvert /= base;
    } while (numberToConvert !=0);
}

void displayConvertedNumber(void) {
    const char baseDigits[16] = {
        '0', '1', '2', '3', '4', '5', '6', '7',
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'
    };
    int nextDigit;

    printf("Converted number = ");

    for (--digit; digit >= 0; --digit) {
        nextDigit = convertedNumber[digit];
        printf("%c", baseDigits[nextDigit]);
    }
    printf("\n");
}

int main(void) {
    void getNumberAndBase(), convertNumber(), displayConvertedNumber();

    getNumberAndBase();
    convertNumber();
    displayConvertedNumber();

    return 0;
}

//for readability, the global variables can be defined in the following ways
/*
int gConvertedNumber[64];
long int gNumberToConvert;
int gBase;
int gDigit = 0;
int gData[100]; //here the global variables are initialized to 0 by default
global variables have default values of 0, local variables do not have default values, so they must be initialized before they are used
*/
