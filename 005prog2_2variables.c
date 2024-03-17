/*
variable names:
1.they must begin with a letter, underscore(_), and can be followed by any combinations of letters(uppercase or lowercase), underscores, or the digits
0-9
valid variable names: sum; pieceFlag; i; J5x7;Number_of_moves;_sysflag
2.invalid variable names:sum$value; piece flag; 3Spencer; int
3.int can nto be used as a variable name, because its use has a special meaning to C compiler
4.Upper and lowercase letters are distinct in C programming
eg. sum; SUM; Sum are different variable names
*/

/*
binary arithmetic expressions: + or - or * or /(operate on two values or terms)
*/

// Using the arithmetic operators 
#include <stdio.h>

int main(void)
{
    int a = 100;
    int b = 2;
    int c = 25;
    int d = 5;
    int result;
    result = a - b;
    printf("a - b = %d\n", result);

    result = b * c;
    printf("b * c = %d\n", result);

    result = a / c;
    printf("a / c = %d\n", result);

    result = a + b * c;
    printf("a + b * c = %d\n", result);

    printf("a * b + c * d = %d\n", a * b + c * d);

    return 0;
}


