/*
a method can have normal parameters along with a variable-length parameter, but the variable-length parameter must be the last parameter declared by the method
eg. int doIt(int a, int b, int ...v) { //...v is the variable-length parameter}
 */

 //we can use varargs with standard arguments

public class VarTest {
    //here, msg is a normal parameter and v is a varargs parameter
    static void vaTest(String msg, int ...v) {
        System.out.println(msg + v.length);
        System.out.println("Contents: ");

        for(int i=0; i<v.length; i++) {
            System.out.println("arg " + i + " : " + v[i]);
        }
        System.out.println();
    }

    public static void main(String[] args) {
        vaTest("one vararg: ", 10);
        vaTest("Three varagrs: ", 1, 2, 3);
        vaTest("No varargs: ");
    }
}

/*
limitations of varargs:
1. only one varargs parameter is allowed in a method
2. varargs must be the last parameter in the method
 */