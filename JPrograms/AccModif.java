/*
 an access modifier must precede a member's declaration. 
 access modifier are public, private, protected and the default package-private control the visibility of the class members(fields, class etc) from other classes
 */

 class A {
    public int publicVar = 10; //public: accessible from any other class
    private int privateVar = 20; //private: accessible only within the class A
    protected int protectedVar = 30; //protected: accessible within the package and its subclasses
    int defaultVar = 40; //default: accessible only within the package

    public int getPrivateVar() {
        return privateVar;
    }
 }

public class AccModif {
    public static void main(String[] args) {
        A obj = new A();

        //access public variable
        System.out.println("The public variable: " + obj.publicVar);

        //access private variable
        System.out.println("The private variable can only be accessed through getter method: " + obj.getPrivateVar());

        //access protected variable
        System.out.println("The protected variable: " + obj.protectedVar);

        //access default package-private variable
        System.out.println("default variable: " +obj.defaultVar);
    }
}
