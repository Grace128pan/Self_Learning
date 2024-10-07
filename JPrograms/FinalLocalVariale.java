//page296 => the object class for next time

public class FinalLocalVariale {
    public static void main(String[] args) {
        final int count = 5;
        //count = 10; // Error: cannot assign a value to final variable count
        System.out.println("count: " + count);
    }
}

//Summary
/*
 a final member variable static lets us refer to the constant through its class name rather than through an object
 if the constant in ErrorMsg were modified by static, then the println() statements in main()
 could look like this:
    System.out.println(err.getErrorMsg(Errormsg.OUTER));
    System.out.println(err.getErrorMsg(ErrorMsg.DISKERR));
Declaring a parameter final prevents it from being changed within the method
Declaring a local variable final prevents it from being assigned a value more than once
Many Java Programmers use uppercase identifiers for final constants
 */

/*
 java defines ine special class called object
 it is an implicit superclass of all other classes
 all other classes are subclasses of object
 a reference variable of type object can refer to an object of any other class
 since arrays are implemented as classes, a variable of type object can refer to any array
 */