/*
 The following program will demonstrate the usage of the unsighed right shift operator in Java >>>
 */

public class UnsignedShiftOp {
    public static void main(String[] args) {
        int num = -8;

        System.out.println("original number(int): " + num);
        System.out.println("Binary representation of the number is: " + Integer.toBinaryString(num));

        int shiftedNum = num >>> 2;

        System.out.println("Number after unsigned right shift(int): " + shiftedNum);
        System.out.println("Binary representaition of the shifted number is: " + Integer.toBinaryString(shiftedNum));
    }
} 
