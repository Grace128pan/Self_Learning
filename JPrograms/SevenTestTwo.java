/*  page297
The goal is to create a subclass of twoDShape called Circle. Include an area() method that computes the area of the circle and a constructor
that uses super to initialize the twoDShape portion
 */
//step1 create a superclass called TwoDShape8
 class TwoDShape10 {
    //step2: create two fields for width and height
    private double width;
    private double height;
    //step3: constructor to intialize width and height
    public TwoDShape10(double width, double height) {
        this.width = width;
        this.height = height;
    }
    //step4: create methods to access width and height
    public double getWidth() {
        return width;
    }

    public double getHeight() {
        return height;
    }

    //step5: crate methods to display dimensions(optional for understanding)
    public void showDim10() {
        System.out.println("Width and height are " + width + " and " + height);
    }
 }

 //step6: create a subclass called circle
 class Circle10 extends TwoDShape10 {
  
    //step7: create constructor that uses super to initialize the width and height
    public Circle10(double radius) {
        super(radius, radius); //a circle's width and height are the same, so we use radius twice
      
    }

    //step8: create a method to calculate the area of the circle
    public double area() {
        double radius = getWidth(); //get the radius(since width==height for a circle)
        return Math.PI * radius * radius; //calculate the area of the circle : PI * r^2
    }
 }
 //step9: creare the main class to test the circle class
public class SevenTestTwo {
    public static void main(String[] args) {
        //step10: create an object of circle class
        Circle10 myCircle = new Circle10(5.0);

        //step11: display the circle's dimensions
        myCircle.showDim10();

        //step12: display the area of the circle
        System.out.println("Area is " + myCircle.area());
    }
}

//test3: normally we can use private to prevent a subclass from accessing a member of a superclass
