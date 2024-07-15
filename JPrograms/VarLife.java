/*
1. Java has 4 general classes of operators: arithmetic, bitwise, relational, and logical
2. arithmetic operators: +, -, *, /, %, ++, --
3. % means we get the remainder of the division; if interger / integer, then result is integer, and the remainder is lost
4. ++ and -- are unary operators; they can be prefix or postfix
5. prefix: ++x, --x; postfix: x++, x--
6. prefix: increment/decrement the variable before using it; postfix: use the variable and then increment/decrement it
for example, x=10; y= ++x; in this case, y will be set to 11, and x will be set to 11
x = 10; y=x++; in this case, y will be set to 10, and x will still be set to 11
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