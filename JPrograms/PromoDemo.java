/*
 1. operators, variables and literals are constituents of expressions
 2. all char, byte and short values are promoted to int. If one operand is a long, the whole expression is promoted to long
    if one operand is a float operand, the entire expression is promoted to float. If any of the operands is double, the result is double
3. If the value of a byte is promoted to int inside an expression, outside the expression, the variable is still a byte. Type 
    promotion only affects the evaluation of an expression.

self-test
1.

 */


 public class PromoDemo {
    public static void main(String[] args) {
        byte b;
        int i;

        b = 10;
        i = b * b; // OK, no cast needed because the result is promoted to int

        b = 10;
        b = (byte) (b * b); // cast needed!! Cast is needed here to assign an int to a byte

        System.out.println("i and b are: " + i + " " + b);

        //using a cast to avoid loss of information
        int m;
        for(m = 0; m < 5; m++) {
            System.out.println(m +" / 3: " + m / 3);
            System.out.println(m + " /3: " + (double) m/3);
            System.out.println();
        }

        System.out.println("One\nTwo\nThree");

        int sum = 0;
        for (i = 0; i<10; i++) {
            sum+= i;
        }
        System.out.println("Sum is: " + sum);
    }


 }
