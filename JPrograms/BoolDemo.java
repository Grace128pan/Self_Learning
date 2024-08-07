/*
 1. + has a higher precedence than >, so the expression 10 > 9 is evaluated first with parentheses.
*/



public class BoolDemo {
    public static void main(String[] args) {
        boolean b = false;
        System.out.println("b is " + b);

        b = true;
        System.out.println("b is " + b);

        if(b) System.out.println("This is executed.");

        b = false;
        if(b) System.out.println("This is not executed.");

        System.out.println("10 > 9 is " + (10 > 9));
    }
}