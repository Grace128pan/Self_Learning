/*
In this chapter I am about to learn
1. the int, float, double, char, and _bool data types
2. modify data types with short, long, and long long
3. rules for naming variables
4. basic math operators and arithmetic expressions
5. type casting
1.1 float, double, char and _bool are 4 basic data types in C
1.2 double is a float type with twice the precision
1.3 char can be used to store a single character such as "a", ";" "6"
1.4 _bool can only be 0 and 1, indicating on/off, yes/no, true/false(binary choice)
1.5 in C, any number, single character, or character string is known as a constant
for example, the number 58 presents a constant integer value
the character string"Programming is fun.\n" is a constant character string
1.6 expressions consisting entirely of constant values are called constant expressions\
for example: 128 + 7 - 17 is a constant expression
128 + 7 - i is not a constant expression
2.1 in C, an integer constant consists of a sequence of one or more digits such as 158, -10, 0 or 12000
*/

/*
3.1 octal notation is in base 8, must be 0-7, 0177 = 127(1*64+7*8+7)
3.2 an integer value can be displayed in octal notation by using %o in the format string of a printf() statement
3.3 %#o cause a leading zero to be displayed before an octal value
3.4 0x/0X: hexadecimal(base 16) notation, immediately after x are the digits of the hexadecimal value, composing of the digits 0-9 and the letters a-f
(or A-F), letters represent the value 10-15
for example: rgbColor = 0xFFEF0D
3.5 %x: display a value in hexadecimal format without the leading 0x, and using lowercase a-f for hexadecimal digits
%#x: display the value with the leading 0x
%X/%#X: will display with uppercase letters
*/

#include<stdio.h>
int main(void)
{
    int rgbColor1, rgbColor2;
    float m;
    rgbColor1 = 0XFFEF0D;
    rgbColor2 = 0XAABF0E;
    m = 0x0.3p10;
    printf("Color is %#X and %#X\n", rgbColor1, rgbColor2);
    printf("the value of m is %f\n", m);

    return 0;
}

/*
floating number type: float
3., 125.8, -.0001 are all valid examples of floating-point constants
1. %f: display a floating point value in the terminal
2. 1.7e4 = 1.7 * 10^4 , here e is mantissa(it can be uppercase or lowercase), 4 is exponent; 2.25e-3 = 2.25 *10^(-3)
3. %e: display a value in scientific notation
4. %g: let printf() decide whether to display the floating point based on the value of the exponent
1)if the exponent <-4 or >5, %e is used; 2)otherwise, %f is used
5. a hexadecimal floating constant: a leading 0x or 0X, followed by one or more decimal or hexadecimal digits, followed by a p or P, followed
by an optionally signed binary exponent
0x0.3p10 =3/16 * 2^10 = 0.5.
*/

/*
extended precision type Double
1. double is used whenever the range provided by a float variable is insufficient
2. values of double can store roughly twice as many significant digits as can a variable of type float
3. most computers represent double values using 64 digits
4. all floating point constants are taken as double values by the C compiler
5. to display a double value, %f, %e or %g can be used
*/

/*
the singular character char
'a','0',';' are all examles of character constants
character string: any number of characters enclosed in double quotes ""
single character: '\n'
%c: can be used in a printf() call to display the value of a char variable at the terminal
*/

/*
_Bool type
1.store just 0 and 1
2. the standard header file <stdbool.h> defines the values bool, true, and false
*/

