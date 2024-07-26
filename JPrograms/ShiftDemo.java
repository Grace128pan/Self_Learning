/*
 The following program will demonstrate the shift << and >> operators in Java.
 */

public class ShiftDemo {
    public static void main(String[] args) {
        int val = 1; // 00000001
        for(int i=0; i<8; i++) {
            for(int t=128; t>0; t = t/2) {
                if((val&t)!=0) System.out.print("1 ");
                else System.out.print("0 ");
            }
            System.out.println();
            val = val << 1; //shift left is 00000010
        }
        System.out.println();

        val = 128; // 10000000
        for (int i=0; i<8; i++) {
            for(int t=128; t>0; t = t/2) {
                if((val&t)!=0) System.out.print("1 ");
                else System.out.print("0 ");
            }
            System.out.println();
            val = val >>1; //shift right is 01000000
        }
        
    }
    
}
