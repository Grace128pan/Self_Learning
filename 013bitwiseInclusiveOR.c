/*
page332
Bitwise Inclusive OR
the truth table for inclusive-OR operator is as follows:
b1  b2   b1|b2
0   0     0
0   1     1
1   0     1
1   1     1
1) w1 is unsigned int = octal 0432(base-8); w2 is unsigned int = octal 0152(base 8); then w1|w2 = 0573(base-8)
how to calculate it?
0432(base 8) = 000100011010(base 2)
0152(base 8) = 000001101010(base 2)
then w1|w2 =000101111010(base 2) = 0573(base 8)
2)for example, 07(base-8) =000111(base 2), if w1 = 101010(base 2)  then w1|07 =101111(base 2)
*/

/*
The bitwise exclusive OR operator (XOR operator)
The truth table for the XOR operator is as follows:
b1  b2   b1^b2
0   0     0
0   1     1
1   0     1
1   1     0
w1=0536(base 8) = 000101011110(base 2)
w2=0266(base 8) = 000010110110(base 2)
w1^w2 = 000111101000(base 2) =0750(base 8)
1)the interesting property of exclusive OR operator is that any value exclusive ored with itself is 0
2)^ can be used to exchange two values without the need for an extra memory location
3) i1^=i2; i2^=i1; i1^=i2; is used to exchange the values of i1 and i2
*/

#include <stdio.h>

int main() {
    int i1, i2;

    // Input two values
    printf("Enter value for i1: ");
    scanf("%d", &i1);
    printf("Enter value for i2: ");
    scanf("%d", &i2);

    // Exchange the values without using a temporary variable
    i1 ^= i2;
    i2 ^= i1;
    i1 ^= i2;

    // Output the exchanged values
    printf("After exchanging:\n");
    printf("i1: %d\n", i1);
    printf("i2: %d\n", i2);

    return 0;
}
// this is an easy way to exchange values
/*
So, if you want to allow input in different formats (decimal, hexadecimal, or octal), you can use %i. 
If you want to restrict input to decimal format(base 10) only, you can use %d
*/




