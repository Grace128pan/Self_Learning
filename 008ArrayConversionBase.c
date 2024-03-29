//program6.7 will show how to convert an integer from base 10 to base 2 using an array
/*
chapter6 page141 Base conversion using arrays
The task is to deveop a program that converts a positive integer from its base 10 representation into its equivalent representation in
another base up to base 16.
*/
//Program to convert a positive integer to another base //page 142
/*
1.const: qualifier const is used for variables whose value does not change in a program
*/

#include <stdio.h>

int main() 
{
    const char baseDigits[16] = {
        '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    int convertedNumber[64];
    long int numberToConvert;
    int nextDigit, base, index = 0;

    printf("Number to be converted? ");
    scanf("%ld", &numberToConvert);
    printf("Base? ");
    scanf("%i", &base);

    do {
        convertedNumber[index] = numberToConvert % base;
        index ++;
        numberToConvert = numberToConvert / base;
    } while(numberToConvert != 0);

    printf("Converted number = ");

    for (--index; index >= 0; --index) {    //this is the way to show the next digit in the reversed way
        nextDigit = convertedNumber[index];
        printf("%c", baseDigits[nextDigit]);
    }

    printf("\n");
    return 0;
}
/*
if the number to be converted is 128362, and the base is 16, the output will be 1F56A
*/
/*
The const qualifier: this is read-only variable, and you can not change it
const double pi=3.141592654; if you want to divide it by 2, the compiler will give you an error
*/

//This program has issues because no check was made to ensure the value of base was between 2 and 16