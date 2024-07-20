/*
 The program shows two vehicle objects being created and manipulated.
 
 new operator dynamically allocates memory for an object and returns a reference to it. 
 In java, all objects are dynamically allocated.
 Vehicle minivan; // declare a reference to an object
 minivan = new Vehicle(); // allocate a new object of type Vehicle

 reference variables and assignment
 Vehicle car1 = new Vehicle();
 Vehicle car2 = car1; // car2 is now a reference to the same object as car1

 methods are subroutins that manipulate the data defined by the class and provide access to the data. In most cases, other parts of
 the program will interact with a class through the methods
 methods format:
    return-type name(parameter-list) {
        // body of the method
    }
if the method eos not return a value, the return type is void
 */

package JPrograms;

class Vehicle {
    int passengers;
    int fuelcap;
    int mpg;
}

class Vehicle2 {
    public static void main(String args[]) {
        Vehicle minivan = new Vehicle();
        Vehicle sportscar = new Vehicle();
        Vehicle car1 = new Vehicle();
        Vehicle car2 = car1;
        Vehicle car3 = new Vehicle();
        car2 = car3; // car2 is now a reference to the same object as car3

        int range1, range2;

        minivan.passengers = 7;
        minivan.fuelcap = 16;
        minivan.mpg = 21;

        sportscar.passengers = 2;
        sportscar.fuelcap = 14;
        sportscar.mpg = 12;

        car1.mpg = 26;
        car3.mpg = 34;

        range1 = minivan.fuelcap * minivan.mpg;
        range2 = sportscar.fuelcap * sportscar.mpg;

        System.out.println("Minivan can carry " + minivan.passengers + " with a range of " + range1 + " miles.");
        System.out.println("Sportscar can carry " + sportscar.passengers + " with a range of " + range2 + " miles.");
        System.out.println(car1.mpg);
        System.out.println(car2.mpg);
        System.out.println(car3.mpg);
    }
}