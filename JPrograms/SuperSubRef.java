/*
a reference variable of a superclass can be assigned a reference to an object of any subclass derived from that superclass
a superclass reference can refer to a subclass object
 */

 //this program shows a superclass reference can refer to a subclass object
 class X1 {
    int a;
    X1(int i) { a= i;}
 }

 class Y1 extends X1 {
    int b;
    Y1(int i, int j) {
        super(j); //superclass constructor
        b = i;
    }
 }
public class SuperSubRef {
    public static void main(String[] args) {
        X1 x = new X1(10);
        X1 x2;
        Y1 y = new Y1(5, 6);
        
        x2 = x; //x2 refers to X1 object
        System.out.println("x2.a: " + x2.a);

        x2 = y; //x2 refers to Y1 object
        System.out.println("x2.a: " + x2.a);

        //x reference know only about x members
        x2.a = 19; //ok
       //x2.b = 27; //error, X doesn't have a b member
    }
}
