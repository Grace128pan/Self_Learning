/*
 In a class hierarchy, constructors complete their ecutation in order of derivation, from superclass to subclass.

 The following program will demonstrate when constructors are executed in a class hierarchy.
 */

 //create a superclass
 class A3 {
    A3() {
        System.out.println("Constructing A3.");
    }

    void displayA3() {
        System.out.println("Method in A3");
    }
 }

 //create a subclass by extending class A3
 class B3 extends A3 {
    B3() {
        System.out.println("Constructing B3.");
    }
    void displayB3() {
        System.out.println("method in B3");
    }
 }

 //create another subclass by extending B3
 class C3 extends B3 {
    C3() {
        System.out.println(" Constructing C3.");
    }
    void displayC3() {
        System.out.println("method in C3");
    }
 }

public class ConstructorOrder {
    public static void main(String[] args) {
        C3 c = new C3();

        c.displayA3();
        c.displayB3();
        c.displayC3();
    }
}
