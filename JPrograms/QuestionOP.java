/*
The following program will demonstrate the usage of ? operator in Java.
 */

public class QuestionOP {
    public static void main(String[] args) {
        int a=10, b=20;
        int min =(a<b) ? a: b;

        System.out.println("Minimum value is: " + min);

        boolean m = true;
        boolean n = false;

        if(m & n) {
            System.out.println("a & b is false, so this will not be printed");
        }

        if(m && n) {
            System.out.println("a && b is false, so this will not be printed");
        }

        if(m | n) {
            System.out.println("a | b is true, so this will be printed");
        }
    }
}
