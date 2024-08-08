/*
we need to understand the two ways in which an argument can be passed to a subroutine:
the first way is called call-by-value and the second way is called call-by-reference

In the first case. the approach copies the value of an argument into the formal parameter of the subroutine. Therefore, 
changes made to the parameter of the subroutine have no effect on the argument
 */

 class Test {
    void meth(int i, int j) {
        i*= 2;
        j/= 2;
    }
 }

public class CallByValue {
    public static void main(String[] args) {
        Test obj = new Test();
        int a = 15, b = 20;

        System.out.println("a and b before call: " + a + " " + b);
        obj.meth(a, b);
        System.out.println("a and b after call: " + a + " " + b);
    }
}
