/*
use super to call supercalss constructors
when both the superclass and subclass define constructors, the process is complicated because both the 
superclass and subclass constructors must be executed
in this case, we use another keyword, super, which has two general forms
the first calls a superclass constructor
the second is used to access a member of the superclass that has been hidden by a member of a subclass

a subclass can call a constructor defined by its superclass by use of the following form of super
super(parameter-list);
super() must always be the first statement executed inside a subclass constructor
 */

 //add constructors to TwoDShape

 class TwoDShape3 {
    private double width;
    private double height;

    //parameterized constructor
    TwoDShape3(double w, double h) {
        width = w;
        height = h;  //a constructor for twoDShape3
    }

    //accessor methods for width and height
    double getWidth() { return width; }
    double getHeight() { return height;}
    void setWidth(double w) { width = w;}
    void setHeight(double h) { height = h;}

    void showDim() {
        System.out.println("Width and height are " + width + " and " + height);
    }
 }

 //a subclass of TwoDShape for triangles
 class Triangle3 extends TwoDShape3 {
    private String style;

    Triangle3(String s, double w, double h) {
        super(w, h); //call superclass constructor, here we can use super() to execute the TwoDShape3 constructor

        style = s; //style of triangle
    }

    double area() {
        return getWidth() * getHeight() /2; //area of triangle
    }

    void showStyle() {
        System.out.println("Triangle is " + style);
    }
 }

public class Shape3 {
    public static void main(String[] args) {
        Triangle3 t1 = new Triangle3("filled", 4.0, 4.0);
        Triangle3 t2 = new Triangle3("outlined", 8.0, 12.0);

        System.out.println("Info for t1: ");
        t1.showStyle();
        t1.showDim();
        System.out.println("Area is " + t1.area());

        System.out.println();

        System.out.println("Info for t2: ");
        t2.showStyle();
        t2.showDim();
        System.out.println("Area is " + t2.area());
    }
}
