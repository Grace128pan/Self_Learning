/*
1.the bitwise or, as the reverse of and, can be used to turn bits on
Any bit that is set to 1 in either operand will cause the corresponding bit in the result to be set to 1
 11010011
|10101010 
 11111011   

 The following program make use of the or to change the uppercase program into a lowercase program as shown here:
 */

public class LowCase {
    public static void main(String[] args) {
        char ch;
        for(int i=0; i<26; i++) {
            ch = (char)('A' + i);
            System.out.print(ch);

            //this statement turns on the 6th bit
            ch = (char) ((int) ch | 32); // ch is now lowercase
            System.out.print(ch + " ");
        }
    }
}
