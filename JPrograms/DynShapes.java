/*
Java implements the one interface, multiple methods
overridden methods allows superclass to provide all the elements the subclass can use directly
it also defines those methods that the derived class must implement on its own
this allows the subclass the flexibility to define its own methods, yet still enforces a consistent interface
by combining inheritance with overridden methods, a superclass can define the general form of the methods that will 
be used by all of its subclasses
 */

//the following program will use dynamic method dispatch

class TwoDShape6 {
    private double width;
    private double height;
    private String name;

    //a default constructor
    TwoDShape6() {
        width = height = 0.0;
        name = "none";
    }

    //parameterized constructor
    TwoDShape6(double w, double h, String n) {
        width = w;
        height = h;
        name = n;
    }

    //construct object with equal width and height
    TwoDShape6(double x, String n) {
        width = height = x;
        name = n;
    }

    //construct an object from an object
    TwoDShape6(TwoDShape6 ob) {
        width = ob.width;
        height = ob.height;
        name = ob.name;
    }

    //access methods for width and height
    double getWidth() { return width; }
    double getHeight() { return height; }
    void setWidth(double w) { width = w; }
    void setHeight(double h) { height = h;} 

    String getName() { return name; }

    void showDim() {
        System.out.println("width and height are " + width + " and " + height);
    }

    double area() {
        System.out.println("area() must be overridden.");
        return 0.0;
    }
}

//a subclass of TwoDShape6 for triangles
class Triangle6 extends TwoDShape6 {
    private String style;

    //a default constructor
    Triangle6() {
        super();
        style = "none";
    }

    //constructor for triangle6
    Triangle6(String s, double w, double h) {
        super(w, h, "triangle");
        style = s;
    }

    //one argument constructor
    Triangle6(double x) {
        super(x, "triangle"); //call superclass constructor
        style = "filled";
    }

    //construct an object from an object
    Triangle6(Triangle6 ob) {
        super(ob); //pass object to TwoDShape constructor
        style = ob.style;
    }

    //override area() for triangle6
    double area() {
        return getWidth()*getHeight()/2;
    }

    void showStyle() {
        System.out.println("Triangle is " + style);
    }
}

//a subclass of TwoDShape6 for rectangles
class Rectangle6 extends TwoDShape6 {
    //a default constructor
    Rectangle6() {
        super();
    }

    //constructor for rectangle6
    Rectangle6(double w, double h) {
        super(w, h, "rectangle");// call superclass constructor
    }

    //construct a square
    Rectangle6(double x) {
        super(x, "rectangle"); //call superclass constructor
    }

    //construct an object from an object
    Rectangle6(Rectangle6 ob) {
        super(ob); //pass object to TwoDShape constructor
    }

    boolean isSquare() {
        if(getWidth() == getHeight()) return true;
        return false;
    }

    //override area() for Rectangle6
    double area() {
        return getWidth()*getHeight();
    }
}
public class DynShapes {
    public static void main(String[] args) {
        TwoDShape6[] shapes = new TwoDShape6[5];

        shapes[0] = new Triangle6("outlined", 8.0, 12.0);
        shapes[1] = new Rectangle6(10);
        shapes[2] = new Rectangle6(10, 4);
        shapes[3] = new Triangle6(7.0);
        shapes[4] = new TwoDShape6(10, 20, "generic");

        for(int i=0; i<shapes.length; i++) {
            System.out.println("Object is " + shapes[i].getName());
            System.out.println("Area is " + shapes[i].area());
            System.out.println();
        }
    }

   
}
