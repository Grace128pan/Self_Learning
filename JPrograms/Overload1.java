/*
 Method overriding occurs only when the signature of the two methods are indentical. If they are not, then the two methods are simply overloaded
 */

 //methods with differing signatures are overloaded and not overridden

 class A6 {
    int i, j;
    A6(int a, int b) {
        i = a;
        j = b;
    }

    //display i and j
    void show() {
        System.out.println("i and j: " + i + " " + j);
    }
 }

 //create a subclass by extending class A6
 class B6 extends A6 {
    int k;

    B6(int a, int b, int c) {
        super(a, b);
        k = c;
    }

    //overload show()
    void show(String msg) {
        System.out.println(msg + k);   //because signature differs, this show() simply overloaded show() in A6
    }
 }
public class Overload1 {
    public static void main(String[] args) {
        B6 subOb = new B6(4, 5, 6);
        subOb.show("This is k: "); //this calls show() in B6
        subOb.show();//this calls show() in A6
    }
}
