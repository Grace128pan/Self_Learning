/*
 automatic conversions apply only if there is no direct match between a parameter and argument
 */

 class Overload3 {
    void f(byte x) {
        System.out.println("Inside f(byte): " + x); //a byte paramater is specified
    }

    void f(int x) {
        System.out.println("Inside f(int): " + x);
    }

    void f(double x) {
        System.out.println("Inside f(double): " + x);
    }
 }

public class TypeConv2 {
    public static void main(String[] args) {
        Overload3 ob = new Overload3();

        int i = 10;
        double d = 10.1;

        byte  b = 99;
        short s = 10;
        float f = 11.5F;

        ob.f(i);
        ob.f(d);

        ob.f(b); //byte is directly matched, no type conversion, calls ob.f(byte)

        ob.f(s); //short is converted to int, calls ob.f(int)      type conversion 
        ob.f(f); //float is converted to double, calls ob.f(double)     type conversion
    }
}
