/*
 1.a class is a blueprint or template for creating objects. it defines the attributes and behaviors (methods)
 that objects of the class will have
 2.an object is an instance of a class. It is a concrete entity that has state(attribute values) and behavior(methods)
 as defined by the class

 There is an example to illustrate the difference between a class and an object:
 */

 package JPrograms;

 class Car {
    //properties or attributes of the class
    String color;
    String model;
    int year;

    //method or behavior of the class
    void displayInfo() {
        System.out.println("Model: " + model);
        System.out.println("Color: " + color);
        System.out.println("Year: " + year);
    }
 }

 public class CarInfo {
    public static void main(String[] args) {
        //creating an object of the car class
        Car myCar = new Car();

        //setting the attributes of the object
        myCar.color = "Black";
        myCar.model = "BMW";
        myCar.year = 2020;

        myCar.displayInfo();

        System.out.println("*******************");
        
        //creating another object of the car class
        Car anotherCar = new Car();

        //setting the attributes of the object
        anotherCar.color = "Red";
        anotherCar.model = "Audi";
        anotherCar.year = 2019;

        anotherCar.displayInfo();
    }
 }