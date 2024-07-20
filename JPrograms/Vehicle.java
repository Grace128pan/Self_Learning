/*
chapter 4 Introducing classes, objects, and methods
1. know the fundamentals of the class
2. understand how objects are created
3. understand how reference variables are assigned
4. create methods, return values and use parameters
5. use the return keywords
6. return a value from a method
7. add parameters to a method
8. utilize constructors
9. create parameterized constructors
10. understand new
11. understand garbage collection
12. use the this keyword

objects are instances of classes
a class is a set of plans that specify how to build an object
the methods and variables that constitute a class are called members of the class. The data members are also referred to as instance variables

a class is created by using the keyword class followed by the name of the class
class classname {
    // declare instance variables
    type var1;
    type var2;
    //...
    type varN;

    // declare methods
    type method1(type arg1, type arg2, ..., type argN) {
        // method body
    }
    type method2(type arg1, type arg2, ..., type argN) {
        // method body
    }
    //...
    type methodN(type arg1, type arg2, ..., type argN) {
        // method body
    }
}

define a class
class Vehicle {
    int passengers; // number of passengers
    int fuelcap; // fuel capacity in gallons
    int mpg; // fuel consumption in miles per gallon

    //create a Vehicle object
    Vehicle minivan = new Vehicle();
    }

    dot operator (.) is used to access the members of an object: objectname.membername
 */

 // this is a program that uses the Vehicle class

package JPrograms;

public class Vehicle {
    int passengers;
    int fuelcap;
    int mpg;
}

class VehicleDemo {
    public static void main(String[] args) {
        Vehicle minivan = new Vehicle();
        int range;

        minivan.passengers = 7;
        minivan.fuelcap = 16;
        minivan.mpg = 21;

        range = minivan.fuelcap*minivan.mpg;
        System.out.println("Minivan can carry " + minivan.passengers + " with a range of " + range);
    }
}