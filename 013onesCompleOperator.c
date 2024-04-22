/*  page 334
1.unary operator: ++, --, +, -, !, ~, sizeof, (type), *, &, (type)*, (type)& (an operator that takes a single operand)
2.binary operator: *, /, %, +, -, <<, >>, <, <=, >, >=, ==, !=, &, ^, |, &&, ||
3. the ~ operator is a bitwise NOT operator
4. the truth table for ~ is as follows:
    ~0 = 1
    ~1 = 0
5. suppose
w1 = 0122457(base 8) = 000 001 010 010 100 101 111 (short int of 16 bits long)
~w1= 0055320(base 8) = 000 000 101 101 011 010 000
6. 
The ones complement operator (~) should not be confused with the arithmetic
minus operator (−) or with the logical negation operator (!). So if w1 is defined
as an int, and set equal to 0, then −w1 still results in 0. If you apply the ones
complement operator to w1, you end up with w1 being set to all ones, which is
−1 when treated as a signed value in twos complement notation. Finally,
applying the logical negation operator to w1 produces the result true (1)
because w1 is false (0).
7. The AND, OR, and Exclusive-OR operators each have lower
precedence than any of the arithmetic or relational operators, but higher
precedence than the logical AND and logical OR operators. The bitwise AND
is higher in precedence than the bitwise Exclusive-OR, which in turn is higher
in precedence than the bitwise OR. The unary ones complement operator has
higher precedence than any binary operator.
*/

//program 11.2 illustrating bitwise operators

#include <stdio.h>

int main(void) {
    unsigned int w1 = 0525u, w2 = 0707u, w3 = 0122u; //(base 8)
    //w1 = 0525u(base 8) = 000 101 010 101(base 2)
    //w2 = 0707u(base 8) = 000 111 000 111(base 2)
    //w1&w2= 0505u(base 8) = 000 101 000 101(base 2)
    //w1|w2= 0727u(base 8) = 000 111 010 111(base 2)
    //w1^w2= 0222u(base 8) = 000 010 010 010(base 2)
    printf("%o %o %o\n", w1 & w2, w1 | w2, w1 ^ w2);
    //w1 = 0525u(base 8) = 000 101 010 101(base 2)
    //~w1= 000 010 101 010(base 2)
    //~w2 = 000 000 111 000 (base 2)
    //w3 = 000 001 010 010 (base 2)
    //~w3 = 000 110 101 101 (base 2)
    printf("%o %o %o\n", ~w1, ~w2, ~w3); //ones complement operator
    //w1 ^ w1 = 000 000 000 000 (base 0) exclusive OR operator ^
    // & has higher precedence than ~
    //w1 & ~w2 = 000 101 010 101 & 000 000 111 000 = 000 000 010 000 (base 2)
    // w1 | w2 = 000 101 010 101(base 2) | 000 111 000 111(base 2) = 000 111 010 111(base 2)
    printf("%o %o %o\n", w1 ^ w1, w1 & ~w2, w1 | w2);
    // ~ has higher precedence than &, which has higher precedence than |
    //w1 | w2 & w3 = 000 101 010 101(base 2) | 000 111 000 111(base 2) & 000 001 010 010 (base 2)
    //             = 000 101 010 101(base 2) | 000 001 000 010(base 2)
    //             = 000 101 010 111(base 2)
    //w1 | w2 & ~w3 = 000 101 010 101(base 2) | 000 111 000 111(base 2) & 000 110 101 101(base 2)
    //              = 000 101 010 101(base 2) | 000 110 000 101(base 2)
    //              = 000 111 010 101(base 2)
    printf("%o %o\n", w1 | w2 & w3, w1 | w2 & ~w3);
    // ~(~w1 & ~w2) =~ (000 010 101 010(base 2) & 000 000 111 000 (base 2))
    //              =~ 000 000 101 000(base 2)
    //              = 000 111 010 111(base 2)
    //~(~w1 | ~w2) = ~ (000 010 101 010(base 2) | 000 000 111 000 (base 2))
    //             = ~ 000 010 111 010(base 2)
    //             = 000 101 000 101(base 2)
    printf("%o %o\n", ~(~w1 & ~w2), ~(~w1 | ~w2)); // ~ has higher precedence than &, which has higher precedence than |

    w1 ^= w2;
    w2 ^= w1;
    w1 ^= w2;

    printf("w1 = %o, w2 = %o\n", w1, w2);
    return 0;
}

// interesting calculations of base 8 and base 2