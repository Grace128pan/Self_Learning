/*
1.A cast is an instruction to convert one type to another.
(target-type) value
double x, y;
(int) (x/y)  //this will cast the result of x/y to an integer
2. When a cast involves a narrowing conversion, information might be lost.
when 1.23 is assigned to an integer, then 0.23 will be missing, the result will be 1.

3. range
byte: -128 to 127 (8-bit)
short: -32768 to 32767 (16-bit)
int: -2,147,483,648 to 2,147,483,647 (32-bit)
long: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 (64-bit)
float: 1.4E-45 to 3.4E+38    (32-bit)
double: 4.9E-324 to 1.8E+308 (64-bit)
char: 0 to 65,535 (16-bit unicode)
boolean: true or false  (typical 1 bit)

operator precedence
highest
++, -- (postfix)
++, -- (prefix)   ~, !, +, - (unary) (type-cast)
*, /, % 
+, -
<<, >>, >>>
<, <=, >, >=, instanceof
==, !=
&
^
|
&&
||
?:
->
=  op=
lowest
 */

package JPrograms;

public class CastDemo {
    public static void main(String[] args) {
        double x, y;
        byte b;
        int i;
        char ch;

        x = 10.0;
        y = 3.0;

        i = (int) (x/y); //cast double to int
        System.out.println("Integer outcome of x/y: " + i);

        i = 100;
        b = (byte) i; //cast int to byte
        System.out.println("value of b: " + b);

        i = 257;
        b = (byte) i; //cast int to byte
        System.out.println("value of b is: " + b); // Information loss this time, because 257 is out of byte range

        b = 88;  //ASCII code for X
        ch = (char) b; //cast byte to char
        System.out.println("ch is: " + ch);


        //a truth table for the logical operators in Java
        boolean p, q;

        System.out.println("P\tQ\tAND\tOR\tXOR\tNOT");

        p = true; q = true;
        System.out.print(p + "\t" + q + "\t");
        System.out.print((p&q) + "\t" + (p|q) + "\t");
        System.out.println((p^q) + "\t" +(!p));

        p = true; q = false;
        System.out.print(p + "\t" + q + "\t");
        System.out.print((p&q) + "\t" + (p|q) + "\t");
        System.out.println((p^q) + "\t" +(!p));
        
        p = false; q = true;
        System.out.print(p + "\t" + q + "\t");
        System.out.print((p&q) + "\t" + (p|q) + "\t");
        System.out.println((p^q) + "\t" +(!p));

        p = false; q = false;
        System.out.print(p + "\t" + q + "\t");
        System.out.print((p&q) + "\t" + (p|q) + "\t");
        System.out.println((p^q) + "\t" +(!p));
        
        System.out.println();
        boolean m, n;

        //great way to transform true and false to 1 and 0
        System.out.println("M\tN\tAND\tOR\tXOR\tNOT");

        m = true; n = true;
        System.out.print(booleanToInt(m) + "\t" + booleanToInt(n) + "\t");
        System.out.print(booleanToInt(m & n) + "\t" + booleanToInt(m | n) + "\t");
        System.out.println(booleanToInt(m ^ n) + "\t" + booleanToInt(!m));

        m = true; n = false;
        System.out.print(booleanToInt(m) + "\t" + booleanToInt(n) + "\t");
        System.out.print(booleanToInt(m & n) + "\t" + booleanToInt(m | n) + "\t");
        System.out.println(booleanToInt(m ^ n) + "\t" + booleanToInt(!m));
        
        m = false; n = true;
        System.out.print(booleanToInt(m) + "\t" + booleanToInt(n) + "\t");
        System.out.print(booleanToInt(m & n) + "\t" + booleanToInt(m | n) + "\t");
        System.out.println(booleanToInt(m ^ n) + "\t" + booleanToInt(!m));

        m = false; n = false;
        System.out.print(booleanToInt(m) + "\t" + booleanToInt(n) + "\t");
        System.out.print(booleanToInt(m & n) + "\t" + booleanToInt(m | n) + "\t");
        System.out.println(booleanToInt(m ^ n) + "\t" + booleanToInt(!m));
    }

    private static int booleanToInt(boolean value) {
        return value ? 1 : 0;
    }
    
}