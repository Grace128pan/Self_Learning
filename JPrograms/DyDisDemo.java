/*
Java page286
 overridden methods support polymorphism
 a superclass reference can refer to a subclass object
 when an overridden method is called through a superclass reference, java determines which version of that method to execute based upon
 the type of the object being referred to at the time the call occurs
this determination is made at run time
when different types of objects are referred to, different versions of an overidden method will be called.
it is the type of the object being referred to(not the type of the reference variable) that determines which version of an overridden by a subclass, then
when different types of objects are referred to through a superclass reference variable, different versions of the method are executed
 */

 //the following program will demonstrate the method dispatch

 class Sup {
    void who() {
        System.out.println("who() in Sup");
    }
 }

 class Sub1 extends Sup {
    void who() {
        System.out.println("who() in Sub1");
    }
 }

 class Sub2 extends Sup {
    void who() {
        System.out.println("who() in Sub2");
    }
 }

public class DyDisDemo {
    public static void main(String[] args) {
        Sup superOb = new Sup();
        Sub1 subOb1 = new Sub1();
        Sub2 subOb2 = new Sub2();

        Sup supRef;

        //in each case, the version of who() is called at run time by the type of object being referred to.
        supRef = superOb;
        supRef.who();  //calls who() in Sup

        supRef = subOb1;
        supRef.who(); //calls who() in Sub1

        supRef = subOb2;
        supRef.who(); //calls who() in Sub2
    }
}
