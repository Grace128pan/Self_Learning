/*
An inner class in Java is a class that is defined within another class
Inner classes have access to the members(including private members) of the outer class
they are used to logically group classes that are only used in one place, or to access the outer class's members in a more
convenient way

types of inner classes
1)non-static inner class(known as member inner class)
2)static nested class
3)local inner class(defined within a method
4)anonymous inner class(a class with no name, used for instantiating objects with certain modifications)
 */

class Outer1 {
    private String message = "Hello from the outer class!";

    //this is a non-static inner class
    class Inner1 {
        void displayMessage() {
            //accessing private member of the outer class
            System.out.println("message from the outer class: " + message);
        }
    }
}
public class InnerClassDemo {
    public static void main(String[] args) {
        //create an instance of the outer class
        Outer1 outer = new Outer1();

        //create an instance of the inner class using the outer class instance
        Outer1.Inner1 inner = outer.new Inner1();

        //call the method of the inner class
        inner.displayMessage();
    }
}
