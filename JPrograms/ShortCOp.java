//a program to explain the difference between && and &, || and |
// chain of assignments is allowed in Java
/*
 int x, y, z;
 x = y = z = 100;
 1. shorthand assignment: x = x+ 10; can be written as x += 10; 

 arithmetic and logical shorthand assignment operators are the following:
 +=   -=    *=   /=  %=   &=   |=  ^= (compound assignment operators)

 type conversion in assignments
 1.boolean and int are not compatible
 2. when one type of data is assigned to another type of variable, an automatic type conversion will take place if
 1) the two types are compatible
 2) the destination type is large than the source type
 3. the int type is always large enough to hold all valid byte values, both int and byte are integer types
 4. conversion of long to double is valid because long is an integer type and double is a floating-point type
 */



public class ShortCOp {
    public static void main(String[] args) {
        int n, d;

        n = 10;
        d = 2;

        if(d!=0 && (n%d) == 0) {
            System.out.println("d is a factor of " + n);
        }

        d = 0;
        if(d !=0 &&(n%d) == 0) {
            System.out.println("d is a factor of " + n);
        }
/*
        if(d !=0 &(n%d) == 0) {
            System.out.println("d is a factor of " + n); //this will throw an exception because both expressions are evaluated, allowing a division by zero to occur
        } */

        int i;
        float f;
        i = 10;
        f = i;
        System.out.println("i and f are: " + i + " " + f);  //the output will be 10 10.0

        long L;
        double D;

        L = 100123285L;
        D = L;
        System.out.println("L and D are: " + L + " " + D); 

        //all primitive data types in Java
        byte a = 100;
        short b = 10000;
        int c = 100000;
        long DD = 100000L;
        float e = 10.5f;
        double F = 10.5;
        char g = 'A';
        boolean h = true;

        System.out.println("byte value: " + a);
        System.out.println("short value: " + b);
        System.out.println("int value: " + c);
        System.out.println("Long Value: " + DD);
        System.out.println("Floate value: " + e);
        System.out.println("Double value: " + F);
        System.out.println("Char value: " + g);
        System.out.println("Boolean value: " + h);
/* 
        int i;
        i = 0;
        if(false & (++i <100)) {
            System.out.println("This won't be displayed");
        }
        System.out.println("If statement executed: " + i);
        if(false && (++i<100)) {
            System.out.println("This won't be displayed");
        }
        System.out.println("If statement executed: " + i);
    }
    */
    }
}
