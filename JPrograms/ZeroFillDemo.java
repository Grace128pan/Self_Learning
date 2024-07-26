/*
1.promotion to int
In java, when you perform operations on byte or short, they are automatically promoted to int

2.sign extension
when a negative byte or short is promoted to int, the sign bit is extended to fill the higher bits
this means the negative value keeps its sign when expanded to int

3.right shift >>
normal right shift keeps the sign bit(preserving the sign of the number)

4.zero-fill right shift >>>
zero-fill right shift always fills the higher bits with zeros,regardless of the sign
this can be confusing because when you shift a promoted byte or short, you have to shift through 24 bits of sign extension 
before you get back to the original byte or short value

Bitwise shorthand assignments
x = x ^ 127;
x ^= 127;  (exclusive OR)

a shift left doubles the value, a shift right halves the value in binary calculations
 */

public class ZeroFillDemo {
    public static void main(String[] args) {
        byte b = -8; //00001000 represents 8,  11111000 represents -8
        int i = b>>1; // 11111100  represent -4
        System.out.println(i);

        byte b1 = -8; //00001000 represents 8,  11111000 represents -8
        int i1 = b1>>>1;         //  011111111111111111111100 represent 2147483644
        System.out.println(i1);
    }
    
}
