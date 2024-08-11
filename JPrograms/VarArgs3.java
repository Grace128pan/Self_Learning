/*
we can overload a method that takes a variable-length argument
 */

public class VarArgs3 {
    //first-version of vTest() method
    static void vTest(int ... v) {
        System.out.println("Number of args: " + v.length);
        System.out.println("Contents: ");

        for(int i=0; i<v.length; i++) {
            System.out.println("arg " + i + ": " + v[i]);
        }
        System.out.println();
    }

    //second-version of vTest() method
    static void vTest(boolean ... v) {
        System.out.println("Number of args: " + v.length);
        System.out.println("Contents: ");

        for(int i=0; i<v.length; i++) {
            System.out.println("arg " + i + ": " + v[i]);
        }
        System.out.println();
    }

    //third-version of vTest() method
    static void vTest(String msg, int ... v) {
        System.out.println("vTest(String, int ...)- " + msg + "number of args: " + v.length);
        System.out.println("Contents: ");

        for(int i=0; i<v.length; i++) {
            System.out.println(" arg " + i + ": " + v[i]);
        }
        System.out.println();
    }

    public static void main(String[] args) {
        vTest(1, 2, 3); //call first-version of vTest()
        vTest(true, false, true); //call second-version of vTest()
        vTest("Testing: ", 10, 20); //call third-version of vTest()
    }
}
