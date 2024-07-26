/*
It is possible to shift the bits that make up a value to the left or to the right by a specified amount
<<   left shift
>>   right shift
>>>  unsigned right shift

the general forms for these operators are shown here:
value << num-bits
value >> num-bits
value >>> num-bits

Negative numbers are usually represented by setting the high-order bit of an integer to 1. This is the approach used by Java
If the value is being shifted is negative, each right shift brings in a 1 on the left
if the value is positive, each right shift brings in a 0 on the left

1 is 0000 0001
-1 is 1111 1111 (two's complement of 1)

left shift <<
the left shift operator shifts all bits in a number to the left by a specified number of positions, the bits shifted out on the left are discarded and the right side is filled with zeros

signed right shift >>
the signed right shift operator shifts all bits in a number to the right by a specified number of positions.
the leftmost bits are filled with the original sign bit(0 for positive numbers and 1 for negative numbers), which preserves the sign of the number

unsigned right shift >>>
the unsigned right shift operator shifts all bits in a number to the right by a specified number of positions, the leftmost bits are 
filled with zeros, regardless of the original sign of the number.
 */

public class ShiftOp {
    public static void main(String[] args) {
        int x = -8; //the binary representation of -8 is 1111 1000
        int y = x >> 2; // the binary representation of -8 after right shift by 2 is 1111 1110
        System.out.println(y);

        int z = 1; // the binary representation of 1 is 0000 0001
        int w = z<<2;  // the binary representation of 1 after left shift by 2 is 0000 0100
        System.out.println(w);

        int a = -8; //the binary representation of -8 is  11111000
        int b = a >>> 2;  //00111110
        System.out.println(b);
    }
}
