/*
 Some var restrictions
 1.only one variable can be declared at a time
 2. a variable can not use null as an initializer
 3. the variable being declared can not be used by the initializer expression
 4. We can declare an array type using var, we can not use var with an array initializer

 var myArray = new int[10]; //valid
 var myArry = {1, 2, 3}; // wrong

 bitwise operators
 1) the bitwise operators can be used on values of type long, int, short, char, or byte
 2) bitwise operations can not be used on boolean, float, or double, or class types

 operator     result
 &          bitwise AND
 |          bitwise OR
 ^          bitwise XOR
 >>         shift right
 >>>        unsigned shift right
 <<         shift left
 ~          One's complement(unary NOT)

 the Bitwise AND, OR, and XOR operators are used to compare the individual bits of two values
 The following table shows the outcome of each operation using 1's and 0's
 p     q      p & q     p | q     p ^ q  ~p
 0     0       0         0         0      1
 1     0       0         1         1      0
 0     1       0         1         1      1
 1     1       1         1         0      0

 the lowercase letter a-z has the ASCII value of 97-122
 the uppcase letter A-Z has the ASCII value of 65-90  (these values are base-10)
 we can transform these values to base 2
 A = 65 = 01000001 (base 2, 65/2 = 32, 1, 32/2 = 16, 0, 16/2 = 8, 0, 8/2 = 4, 0, 4/2 = 2, 0, 2/2 = 1, 0)
 a = 97 = 01100001 (base 2, 97/2 = 48, 1, 48/2 = 24, 0, 24/2 = 12, 0, 12/2 = 6, 0, 6/2 = 3, 0, 3/2 = 1, 1)  turn off the six bit, we get uppercase
 */

 //This program will demonstrate how to change lowercase letters to uppercase letters
public class UpCase {
    public static void main(String[] args) {
        char ch;

        for(int i=0; i<26; i++) {
            ch = (char)('a' + i);
            System.out.print(ch + " ");

        //this statement turns off the 6th bit to get the uppercase
            ch = (char) ((int) ch & 65503); //ch is now uppercase
            System.out.print(ch + " ");

            
        }
        System.out.println();
        //check if bit4 is on
        int status = 12; // 00001100 is the binary representation of 12, THE 4th bit is on

        if((status & 8)!= 0) System.out.println("Bit 4 is on.");
        else System.out.println("bit 4 is off.");
    }
}
