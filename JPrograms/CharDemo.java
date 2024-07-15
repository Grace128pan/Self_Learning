/*
 1. Java uses unicode, unicode defines a character set that can represent all of the characters found in all human languages
 In java, char is an unsigned 16-bit type having a range of 0 to 65,535.
 2. the standard 8-bit ASCII character set is a subset of unicode character set and ranges from 0 to 127. They are still valid in Java characters
 3.char is an unsigned 16-bit type, it is possible to perform various arithmetic manipulation on char variables
 */
package JPrograms;

public class CharDemo {
    public static void main(String[] args) {
        char ch = 'X';
        System.out.println("Ch is " + ch);

        ch++;
        System.out.println("Ch is now " + ch);

        ch = 90;
        System.out.println("Ch has been transformed to " + ch);
    }

}
