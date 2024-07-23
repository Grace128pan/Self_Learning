//date types in Java: int, float, double(double precision)


public class Exam3 {
    public static void main(String[] args) {
        int v;
        double x;

        v = 10;
        x = 10.0;

        System.out.println("original value of v: " + v);
        System.out.println("Original value of x: " + x);
        System.out.println();   //output a blank line

        v = v / 4;
        x = x / 4;

        System.out.println("v after division: " + v);  // fractional part is lost
        System.out.println("x after division: " + x);
    }
}