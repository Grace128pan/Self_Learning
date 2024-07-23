/*
 This program demonstrates how constructors are being used for Vehicle

 1.new operator
 class-var = new class-name(arg-list);

 Java uses garbage collection approach to manage memory
 When no references to an object exist, the memory is automatically reclaimed. The recycled memory is then available for other objects.
 */


 class Vehicle7 {
    int passengers;
    int fuelcap;
    int mpg;
    //this is a constructor for vehicle
    Vehicle7(int p, int f, int m) {
        passengers = p;
        fuelcap = f;
        mpg = m;
    }

    //return the range
    int range() {
        return mpg * fuelcap;
    }

    //compute fuel needed for a given distance 
    double fuelneeded(int miles) {
        return (double) miles / mpg;
    }
 }

 class VehConsDemo {
    public static void main(String[] args) {
        //construct complete vehicles
        Vehicle7 minivan = new Vehicle7(7, 16, 21);
        Vehicle7 sportscar = new Vehicle7(2, 14, 12);
        double gallons;
        int dist = 252;

        gallons = minivan.fuelneeded(dist);

        System.out.println("To go " + dist + " miles minivan needs " + gallons + " gallons of fuel.");

        gallons = sportscar.fuelneeded(dist);

        System.out.println("To go " + dist + " miles sportscar needs " + gallons + " gallons of fuel.");
    }
 }