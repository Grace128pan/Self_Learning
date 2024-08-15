/*
Using super to access superclass members
there is a second form of super that acts somewhat like this, except that it always refers to the superclass of the subclass in which it is sued
the usage has the following general form
super.member
here, member can be either a method or an instance variable
this form of super is most applicable to situations in which member names of a subclass hide members by the same name in the superclass
 */

 //using super to overcome name hiding
 class A1 {
    int i;
 }

 //create a subclass by extending class A
 class B extends A1 {
    int i; // this i hides the i in A

    B(int a, int b) {
        super.i = a; // i in A, here super.i refers to the i in A
        i = b; // i in B
    }

    void show() {
        System.out.println("i in superclass: " + super.i);
        System.out.println("i in subclass: " + i);
    }
 }

public class UseSuper {
    public static void main(String[] args) {
        B subOb = new B(1, 2);
        subOb.show();
    }
}

//super can also be used to call methods that are hidden by subclass.