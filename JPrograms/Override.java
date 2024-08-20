/*
 In a class hierarchy, when a method in a subclass has the same return type and signature as a method in its superclass, then
 the method is said to override the method in the superclass.
 when an overridden method is called from within the subclass, it will always refer to the version of the method defined by the subclass
 the version of the method defined by the superclass will be hidden.
 */

 //method overriding
 class A5 {
    int i, j;
    A5(int a, int b) {
        i = a;
        j = b;
    }

    //display i and j
    void show() {
        System.out.println("i and j: " + i + " " + j);
    }
 }

 class B5 extends A5 {
    int k;

    B5(int a, int b, int c) {
        super(a, b);
        k = c;
    }

    //display  k -- this will override show() in A5
    void show() {
        super.show(); //this calls show() in A5
        System.out.println("k: " + k);
    }
 }
public class Override {
    public static void main(String[] args) {
        B5 subOb = new B5(1, 2, 3);

        subOb.show(); //this calls show() in B5
    }
}
