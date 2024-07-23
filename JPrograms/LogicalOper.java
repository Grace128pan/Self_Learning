/*
1. relational or logical operators are shown below
operator      meaning
==            equal to
!=            not equal to
>             greater than
<             less than
>=            greater than or equal to
<=            less than or equal to
&             logical and
|             logical or
!             logical not
^             logical xor(exclusive or)
||            short-circuit or    // short-circuit means if first condition is true then it will not check the second condition
&&            short-circuit and   // short-circuit means if first condition is true then it will not check the second condition
In logical operations, the XOR (exclusive or) operator (^) returns true if and only if exactly one of the operands is true. If both operands are true or both are false, the result is false.
 */


public class LogicalOper {
    public static void main(String[] args) {
        int i, j;
        boolean b1, b2;

        i = 10;
        j = 11;
        if(i < j) System.out.println("i < j");
        if(i <= j) System.out.println("i <= j");
        if(i !=j) System.out.println("i != j");
        if(i ==j) System.out.println("this won't execute");
        if(i >=j) System.out.println("this won't execute");
        if (i > j) System.out.println("This won't execute");

        b1 = true;
        b2 = false;
        if(b1 & b2) System.out.println("This won't execute");
        if(!(b1 & b2)) System.out.println("!(b1 & b2) is true");
        if(b1 | b2) System.out.println("b1 | b2 is true");
        if(b1 ^ b2) System.out.println("b1 ^ b2 is true");
    }
}
