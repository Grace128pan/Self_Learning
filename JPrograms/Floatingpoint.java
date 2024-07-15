/*
1. two floating-point types: float and double
float: single-precision floating-point(32 bits wide)
double: double-precision floating-point(64 bits wide)

2.sqrt() method: returns the square root of a double value
sqrt() is used to compute the length of the hypotenuse of a right triangle with sides of length x and y
 */

package JPrograms;

public class Floatingpoint {
    public static void main(String[] args) {
        double x, y, z;

        x=3;
        y=4;
        z=Math.sqrt(x*x + y*y);
        System.out.println("Hypotenuse is: " + z);
    }
}
