//a program to explain the difference between && and &, || and |
// chain of assignments is allowed in Java
/*
 int x, y, z;
 x = y = z = 100;
 1. shorthand assignment: x = x+ 10; can be written as x += 10; 

 arithmetic and logical shorthand assignment operators are the following:
 +=   -=    *=   /=  %=   &=   |=  ^= (compound assignment operators)

 type conversion in assignments
 */

package JPrograms;

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

        if(d !=0 &(n%d) == 0) {
            System.out.println("d is a factor of " + n); //this will throw an exception because both expressions are evaluated, allowing a division by zero to occur
        }
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
