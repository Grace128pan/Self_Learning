//Combining operations with assignment: The assignment operators
/*
1.op: is any of the arithmetic operators, including + or - or * or / or %
2. count = count + 10   count += 10;  count = count - 5   count -= 5;  a= a/(b+c)   a/= b + c;
3. all operators but the comma operators have higher precedence than the assignment operators, which all have the same precedences
*/

/*
Invalid or valid constants in C programming language
0x10.5;: Invalid floating-point constant because it contains a decimal point after the hexadecimal prefix 0x.
0X0G1;: Invalid constant because G is not a valid hexadecimal digit.
0xFFFF;: Valid hexadecimal integer constant.
123L;: Valid integer constant with the suffix L indicating it's a long integer.
0Xab05;: Valid hexadecimal integer constant.
-12E-12: Valid floating-point constant in scientific notation.
07777;: Valid octal integer constant.
1234uL;: Valid integer constant with suffix u indicating it's an unsigned integer and L indicating it's a long integer.
1.2Fe-7;: Invalid because the suffix Fe is not valid for a floating-point constant. It should be f or F.
15,000;: Invalid because it contains a comma, which is not allowed in numeric constants in C.
1.234L;: Valid floating-point constant with suffix L indicating it's a long double.
197u;: Valid integer constant with suffix u indicating it's an unsigned integer.
100U;: Valid integer constant with suffix U indicating it's an unsigned integer.
0XABCDEFL;: Valid hexadecimal integer constant with suffix L indicating it's a long integer.
*/ 

#include <stdio.h>

int main(void) {
    // Define variables
    float F, C;

    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &F);    //scanf is a function in C programming used for reading input from the standard input stream (usually the keyboard) according to a specified format.

    // Convert Fahrenheit to Celsius
    C = (F - 32) / 1.8;

    // Output the result
    printf("%.2f degrees Fahrenheit is equal to %.2f degrees Celsius.\n", F, C);

    return 0;
}

