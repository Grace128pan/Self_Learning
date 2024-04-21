/*
In base 2, there is a truth table that shows the result of the AND operation on two bits. The truth table is as follows:
b1    b2	b1 AND b2
0	  0	    0
0	  1	    0
1	  0	    0
1	  1	    1
1)The size of short int is implementation-defined, but it's commonly 2 bytes (16 bits) on most systems. 
This means it can represent values from -32,768 to 32,767 (if it's a signed short int) or from 0 to 65,535 
(if it's an unsigned short int).
Signed vs. Unsigned: Like int, short int can be signed or unsigned. If signed, it can represent both positive 
and negative values; if unsigned, it can only represent non-negative values.
2) if w1 and w2 are two short integers, w1 is set to 25 and w2 is set to 77, assume we are dealing with short int size 16 bits.
w1 = 25 = 0000 0000 0001 1001
w2 = 77 = 0000 0000 0100 1101
w1 & w2 = 0000 0000 0000 1001 = 9
3) w3 = w1 & 3
if w1 = 00001101 = 13
   3 =  00000011  = 3
   w3 = 00000001 = 1
4) similarly
word &=15 equals word = word & 15
5) in normal computers, we typically use octal(base-8) or hexadecimal(base-16) to represent binary numbers.
*/

//program 11.1 The bitwise AND operator
// this program is presnted to illustrate the bitwise AND operator, we are dealing with positive values, all integers
// are declared as unsigned int values.

#include <stdio.h>

int main(void) {
    unsigned int word1 = 077u, word2 = 0150u, word3 = 0210u;
//in base-8, 077u means 7*8^1 + 7*8^0 = 56 + 7 = 63, unsigned int means non-negative values
// 63(base-10) = 111111(base-2) = 077(base-8) 
//in base-8, 0150u means 1*8^2 + 5*8^1 + 0*8^0 = 64 + 40 = 104
//104(base-10) = 1101000(base-2) = 0150(base-8)
//in base-8, 0210u means 2*8^2 + 1*8^1 + 0*8^0 = 128 + 8 = 136
// word1 & word2 to get base-8 050 works in this way:
// 63 = 111111
//104 = 001101000
//050 = 000101000
    printf("%o  ", word1 & word2);
    printf("%o  ", word1 & word1);
// 077u = 111111(base-2)
//0150u= 001101000(base-2)
//0210u= 010001000(base-2)
// 077u & 0150u & 0210u = 000001000(base-2) = 10(base-8)
    printf("%o  ", word1 & word2 & word3);
    printf("%o\n", word1 & 1);          // %o is used to print octal values(base-8)
// 077u = 111111(base-2)
// 1 = 000001(base-2)
// 077u & 1 = 000001(base-2) = 1(base-8)
    return 0;
}