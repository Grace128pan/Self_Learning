/*
constructors and inheritance
the constructor of the superclass constructs the superclass portion of the object, and the constructor for the subclass constructs the subclass part

when only the subclass defines a constructor, the process is straightforward: 
simply construct the subclass object. the superclass portion of the object is constructed automatically
using its default constructor. It also makes style private, since it is now set by the constructor
 */

//add a constructor to Triangle
//a class for two-dimensional objects
class TwoDShape2 {
    private double width;
    private double height; //these are private

    //accessor methods for width and height
    double getWidth() { return width; }
    double getHeight() { return height;}
    void setWidth(double w) { width = w;}
    void setHeight(double h) { height = h;}

    void showDim() {
        System.out.println("Width and height are " + width + " and " + height);
    }
}

//a subclass of TwoDShapes for triangles
class Triangle2 extends TwoDShape2 {
    private String style;

    //constructor
    Triangle2(String s, double w, double h) {
        setWidth(w);
        setHeight(h); // Initialize TwoDShape2's width and height

        style = s; //initialize style
    }

    double area() {
        return getWidth()*getHeight() / 2;
    }

    void showStyle() {
        System.out.println("Triangle is " + style);
    }
}
public class Shape2 {
    public static void main(String[] args) {
        Triangle2 t1 = new Triangle2("filled", 4.0, 4.0);
        Triangle2 t2 = new Triangle2("outlined", 8.0, 12.0);

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
