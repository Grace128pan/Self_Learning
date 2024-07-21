/*
 IN Java, each object of a class has its own copy of the instance fields(attributes) defined in the class
 Instance fields are non-static fields, meaning each object maintains its own copy of the fields
 This allows each object to have its own state independent of other objects of the same class
 */

 //definition of the Car2 class
 package JPrograms;

 class CarTwo {
    //Instance fields(attributes) of the class
    String model;
    String color;
    int year;

    //constructor of the class
    //this constructor initializes the fields with given values
    CarTwo(String model, String color, int year) {
        this.color = color;
        this.model = model;
        this.year = year;
    }

    //method or behavior of the class
    //this method prints the car's information
    void showInfo() {
        System.out.println("The model is: " + model);
        System.out.println("The color is: " + color);
        System.out.println("The year is: " + year);
    }
 }

 //the Car2 class is to test the CarTwo class
 public class Car2 {
    public static void main(String[] args) {
        //creating two objects of the CarTwo class
        CarTwo niceCar = new CarTwo("Toyota", "Red", 2019);
        CarTwo anotherNiceCar = new CarTwo("Honda", "blue", 2020);

        System.out.println("The first car's information is: ");
        niceCar.showInfo();

        System.out.println("The second car's information is: ");
        anotherNiceCar.showInfo();

        System.out.println();
        //modifying the first car's information
        niceCar.color = "Green";

        //displaying the first car's information after modification
        System.out.println("The first car's information after modification is: ");
        niceCar.showInfo();

        //displaying the second car's information showing it was not affected
        System.out.println("The second car's information again: ");
        anotherNiceCar.showInfo();
        
    }
 }

 