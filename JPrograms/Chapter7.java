/*
 chapter 7: inheritance
 1.understand inheritance basics
 2.call superclass constructors
 3.use superclass constructors
 4.create a multilevel class hierarchy
 5.know when constructors are called
 6.understand superclass references to subclass objects
 7.overide methods
 8.use overridden methods to achieve dynamic method dispatch
 9.use abstract classed
 10.use final
 11.know the object class

 Inheritance
 1)it is one of the most fundamental principles of object-oriented programming because it allows the creation of hierarchical classifications
 2)using inheritance, we can create a general class that defines traits common to a set of related items
 3)this class can then be inherited by other, more specific classes, each adding those things that are unique to it
 4)in Java, a class that is inherited is called a superclass. the class that does the ineriting is called a subclass
 therefore a subclass is a specialized version of a superclass. it inherits all of the variables and methods defined by the superclass and adds its own, unique elements

 inheritance basics
 Java suppoets inheritance, by allowing one class to incorporate another class into its declaration. This is done by using the extends keywords
 this the subclass adds to/extends the superclass 
 */

 //the following will demonstrate a simple class hierarchy

 //a class for two-dimensional objects

 class TwoDShape {
    double width;
    double height;

    void showDim() {
        System.out.println("Width and height are " + width + " and " + height);
    }
}

    //a subclass of TwoDShape for triangles
    class Triangle extends TwoDShape { //triangle inherits TwoDShape
        String style;

        double area() {
            return width * height / 2; //Triangle can refer to the members of TwoDShape as if they were declared by Triangle
        }

        void showStyle() {
            System.out.println("Triangle is " + style);
        }
    }


public class Chapter7 {
    public static void main(String[] args) {
        Triangle t1 = new Triangle();
        Triangle t2 = new Triangle();

        t1.width = 4.0;
        t1.height = 4.0;
        t1.style = " filled";  //All members of triangle are available to triangle objects, although inherited from TwoDShape

        t2.width = 8.0;
        t2.height = 12.0;
        t2.style = " outlined";

        System.out.println("Info fro t1: ");
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
/*
the subclass of a superclass can have access to all the members of the superclass that are not private
but the superclass can not access the members of the subclass
TwoDShape: width, height, showDim()
Triangle: width, height, showDim(), style, area(), showStyle()

the general form of a class declaration that inherits a superclass is shown below:
class subclass extends superclass-name {
    //body of class}

rules of inheritances in Java
1)we can specify only one superclass for any subclass that we create
2)Java does not support the inheritance of multiple superclasses into a single subclass(this differs from c++)
3)In java we can create a hierarchy of the inheritance in which a subclass becomes a superclass of another subclass
4)no class can be a superclass of itself

a major advantage of ineritance si that once you have created a superclass that defines the attributes common to a set of 
objects, it can be used to create any number of more specific subclasses
each subclass can previsely tailor its own classification
eg.
class Rectangle extends TwoDShape {
    boolean isSquare() {
        if(width == height) return true;
        return false;
    }
    double area() {
        return width * height;
    }
}

private numbers are not inherited by subclasses
 */
