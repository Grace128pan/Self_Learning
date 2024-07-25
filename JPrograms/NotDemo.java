/*
 1. The unary one's complement(NOT) operator reverses the state of all the bits of the operand. For example, if some integer called A has 
 the bit pattern 10010110, then ~A produces a result with the bit pattern 01101001

 The program demonstrates the bitwise NOT operator
 */

public class NotDemo {
    public static void main(String[] args) {
        byte b = -34;

        for(int t=128; t>0; t=t/2) {
            if((b&t) != 0) System.out.print("1 ");
            else System.out.print("0 ");
        }
        System.out.println();

        //reverse all bits
        b = (byte) ~b;

        for(int t=128; t>0; t=t/2) {
            if((b&t) != 0) System.out.print("1 ");
            else System.out.print("0 ");
        }
    }
}
