/*
 creating a multilevel hierarchy 
 given three classes called A B and C, C can be a subclass of B, B can be a subclass of A.

 To see how a multilevel hierarcy can be useful, consider the following program
 the subclass TriangleC is used as a superclass to create the subclass called ColorTriangle
 ColorTriangle inherits all of the traits of TriangleC and TwoDShapeC and adds a field called color, which holds the color of the triangle.

 */

 //a multilevel hierarchy

 class TwoDShapeC {
    private double width;
    private double height;

    //a default constructor
    TwoDShapeC() {
        width = height = 0.0;
    }

    //parameterized constructor
    TwoDShapeC(double w, double h) {
        width = w;
        height = h;
    }
    
    //construct object with equal width and height
    TwoDShapeC(double x) {
        width = height = x;
    }

    //accessor methods for width and height
    double getWidth() { return width; }
    double getHeight() { return height; }

    void setWidth(double w) { width = w;}
    void setHeight(double h) { height = h;}

    void showDim() {
        System.out.println("Width and height are " + width + " and " + height);
    }

 }

 //extend TwoDShapeC
 class TriangleC extends TwoDShapeC {
    private String style;

    //a default constructor
    TriangleC() {
        super();
        style = "none"; 
    }

    TriangleC(String s, double w, double h) {
        super(w, h); //call the superclass constructor
        style = s;
    }

    //one argument constructor
    TriangleC(double x) {
        super(x); //call the superclass constructo
        style = "filled";
    }

    double area() {
        return getWidth()*getHeight()/2;
    }

    void showStyle() {
        System.out.println("Triangle is " + style);
    }
 }

 //extend TriangleC
 class ColorTriangle extends TriangleC {
    private String color; //colorTriangle inherits TriangleC, which is descended from TwoDShapeC
                          // so ColorTriangle includes all members of TriangleC and TwoDShapeC

    ColorTriangle(String c, String s, double w, double h) {
        super(s, w, h);

        color = c;
    }

    String getColor() { return color; }

    void showColor() {
        System.out.println("Color is " + color);
    }
 }
public class Shape5 {
    public static void main(String[] args) {
        ColorTriangle t1 = new ColorTriangle("Blue", "outlined", 8.0, 12.0);
        ColorTriangle t2 = new ColorTriangle("Red", "filled", 2.0, 2.0);

        System.out.println("Info for t1: ");
        t1.showStyle();
        t1.showDim();
        t1.showColor();
        System.out.println("Area is " + t1.area());

        System.out.println();

        System.out.println("Info for t2: ");
        t2.showStyle();
        t2.showDim();
        t2.showColor();
        System.out.println("Area is " + t2.area());
    }
}
