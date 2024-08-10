/*
The difference between a static method and a normal method is that the static method is called through the class name
without any object of that class being created

The following program will create a static method
 */

class staticMethod {
    static int val = 1024; // a static variable

    //a static variable
    static int valDiv2() {
        return val/2;
    }
}
public class StaMeth {
    public static void main(String[] args) {
        System.out.println("val is " + staticMethod.val);
        System.out.println("staticMethod.valDiv2(): " + staticMethod.valDiv2());

        staticMethod.val = 4;
        System.out.println("the new value of val is " + staticMethod.val);
        System.out.println("the new staticMethod.valDiv2(): " +staticMethod.valDiv2());
    }
}

/*
static method limitations:
1)they can directly call only other static methods in their class
2)they can directly access only static variables in their class
3)they do not have a this reference

example:
class staticErr {
    int denom = 3; // a normal instance variable
    static int val = 1024; // a static variable

    //Error! can't access a non-static variable from a static method
    static int valDivDenom() {
        return val/denom; //Error! can't access a non-static variable from a static method
    }
here denom is a normal instance variable that can not be accessed within a static method
 */