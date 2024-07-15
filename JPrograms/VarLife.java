/*
1. Java has 4 general classes of operators: arithmetic, bitwise, relational, and logical
2. arithmetic operators: +, -, *, /, %, ++, --
3. % means we get the remainder of the division; if interger / integer, then result is integer, and the remainder is lost
 */

package JPrograms;

public class VarLife {
    public static void main(String[] args) {
        int x = 10;
        for (x=0; x<3; x++) {
            int y = -1;
            System.out.println("y is " + y);
            y = 100;
            System.out.println("y is now " + y);
        }

        //demonstrate % operator
        int iresult, irem;
        double dresult, drem;

        iresult = 10/3;
        irem = 10%3;
        dresult = 10.0/3.0;
        drem = 10.0%3.0;

        System.out.println("Result and remainder of 10/3 is " + iresult +" " + irem);
        System.out.println("Result and remainder of 10.0/3.0 is " + dresult + " " +drem);
    }
}