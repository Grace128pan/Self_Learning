/*
chapter 11: operations on bits /page 328
1. the bitwise and operator
2. the bitwise inclusive or operator
3. the bitwise exclusive or operator
4. the ones complement operator
5. the left shift operator
6. the right shift operator
7. bit fields
*/
/*
1)a byte consists of 8 smaller units called bits
2)each bit can be either 0 or 1
*/
// 0 * 2^0 + 0 * 2^1 + 1 * 2^2 + 0 * 2^3 + 0 * 2^4 + 1 * 2^5 + 1 * 2^6 + 0 * 2^7 = 4 + 32 + 64 = 100
// this is a way to change base 2 number: 01100100 to base 10 number: 100, the leftmost zero is the sign bit

/*
1.the rightmost of a byte is know as the least significant or low-order bit
2.the leftmost bit is known as the most significant or high-order bit
3. for negative words
1 on the leftmost bit is the sign bit, 0 is positive, 1 is negative
2. the representation of base 2 number -1 is 11111111
step1: find the representation of 1 in base 2: 00000001
step2: find the ones complement of 00000001: 11111110
step3: add 1 to the ones complement: 11111111
4. with 8 bits, representation of 5 will be 00000101
step1: find the representation of 5 in base 2: 00000101
step2: find the ones complement of 00000101: 11111010
step3: add 1 to the ones complement: 11111011
in this process we get the representation of -5 in base 2
5. in base 2, the largest positive number that can be represented with 8 bits is 01111111, which is 127
6. the smallest negative number that can be represented with 8 bits is 10000000, which is -128= -2^7
7. so in two complement representation, the range of numbers that can be represented with 8 bits is -128 to 127
8. In today's 32-bit and 64-bit computers, the range of numbers that can be represented is -2^31 to 2^31 - 1 and -2^63 to 2^63 - 1
9. with unsigned modifier, we can store 2^8=256 or 2^32 = 4294967296 or 2^64 = 18446744073709551616
*/

/*
Bit Operators
symbols      operations
&            bitwise and
|            bitwise inclusive or
^            bitwise exclusive or
~            ones complement
<<           left shift
>>           right shift
*/

//a program to demonstrate the usage of ~ operator
#include <stdio.h>

int main() {
    unsigned int x = 5; // binary representation: 0000 0101
    unsigned int y = ~x; // bitwise complement of x

    printf("Binary representation of ~x: %08x\n", y); // Output: fffffffa

    return 0;
}

//this is the way of hexadecimal representation of the number
//bit operations can be performed on any type of integer values in C such as int, short, long, long long, unsigned int, signed int etc.
//but they can not perform on floating-point values
