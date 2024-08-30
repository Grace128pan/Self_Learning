/*
an abstract method is created by specifying the abstract type modifier
an abstract method contains no body and is therefore, not implemented by the superclass
a subclass must override it
it can not simply use the version defined by the superclass
the general form:
abstract type name(parameter-list);
the abstract modifier can be used only on instance methods, it can not be applied to static methods or to constructors
 */

//create an abstract class
abstract class TwoDShape8 {
    private double width;
    private double height;
    private String name;

    // a default constructor
    TwoDShape8() {
        width = height = 0.0;
        name = "none";
    }

    // parameterized constructor
    TwoDShape8(double w, double h, String n) {
        width = w;
        height = h;
        name = n;
    }

    // construct object with equal width and height
    TwoDShape8(double x, String n) {
        width = height = x;
        name = n;
    }

    // construct an object from an object
    TwoDShape8(TwoDShape8 ob) {
        width = ob.width;
        height = ob.height;
        name = ob.name;
    }

    // accessor methods for width and height
    double getWidth() {
        return width;
    }

    double getHeight() {
        return height;
    }

    void setWidth(double w) {
        width = w;
    }

    void setHeight(double h) {
        height = h;
    }

    String getName() {
        return name;
    }

    void showDim() {
        System.out.println("Width and height are " + width + " and " + height);
    }

    // Now, area() is an abstract method
    abstract double area(); // make area() into an abstract method
}

// a subclass of TwoDShape7 for triangles
class Triangle8 extends TwoDShape8 {
    private String style;

    // a default constructor
    Triangle8() {
        super();
        style = "none";
    }

    // constructor for Triangle7
    Triangle8(String s, double w, double h) {
        super(w, h, "triangle");
        style = s;
    }

    // one argument constructor
    Triangle8(double x) {
        super(x, "triangle"); // call superclass constructor
        style = "filled";
    }

    // construct an object from an object
    Triangle8(Triangle8 ob) {
        super(ob); // pass object to TwoDShape7 constructor
        style = ob.style;
    }

    double area() {
        return getWidth() * getHeight() / 2;
    }

    void showStyle() {
        System.out.println("Triangle is " + style);
    }
}

// a subclass of TwoDShape7 for rectangles
class Rectangle8 extends TwoDShape8 {
    // a default constructor
    Rectangle8() {
        super();
    }

    // constructor for Rectangle7
    Rectangle8(double w, double h) {
        super(w, h, "rectangle"); // call superclass constructor
    }

    // construct a square
    Rectangle8(double x) {
        super(x, "rectangle"); // call superclass constructor
    }

    // construct an object from an object
    Rectangle8(Rectangle8 ob) {
        super(ob); // pass object to TwoDShape7 constructor
    }

    boolean isSquare() {
        return getWidth() == getHeight();
    }

    double area() {
        return getWidth() * getHeight();
    }
}

public class AbsShape {
    public static void main(String[] args) {
        TwoDShape8 shapes[] = new TwoDShape8[4]; // changed array size to4

        shapes[0] = new Triangle8("outlined", 8.0, 12.0);
        shapes[1] = new Rectangle8(10);
        shapes[2] = new Rectangle8(10.0, 4.0); // explicit cast to double
        shapes[3] = new Triangle8(7.0);

        for (int i = 0; i < shapes.length; i++) {
            System.out.println("Object is " + shapes[i].getName());
            System.out.println("Area is " + shapes[i].area());
            System.out.println();
        }
    }
}

