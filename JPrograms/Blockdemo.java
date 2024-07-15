/*
    * This program illustrates the use of a block of code.
    * semicolon is a separator, and it is often used to terminate a statement
    * A block of code is ended by the closing brace
    * Breaking long lines of code into separate lines will make the code more readable
 */

package JPrograms;

public class Blockdemo {
    public static void main(String[] args) {
        double i, j, d;
        i = 5;
        j = 10;

        if(i != 0) {
            System.out.println("i does not equal zero");
            d = j / i;
            System.out.println("j / i is " + d);
        }
    }
}
 