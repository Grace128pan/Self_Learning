/*
This program will use parameterized method to add a new feature to the Vehicle class: the ability
to compute the amount of fuel needed for a given distance
double fuelNeeded(int miles) {
return (double) miles/mpg;
}
 */

 package JPrograms;

 class Vehicle6 {
    int passengers;
    int fuelcap;
    int mpg;

    int range() {
        return mpg*fuelcap;
    }

    double fuelNeeded(int miles) {  // compute fuel needed for a given distance
        return (double) miles/mpg;
    }
 }

 class CompFuel {
    public static void main(String[] args) {
        Vehicle6 minivan = new Vehicle6();
        Vehicle6 sportscar = new Vehicle6();
        double gallons;
        int dist = 252;

        minivan.passengers = 7;
        minivan.fuelcap = 16;
        minivan.mpg = 21;

        sportscar.passengers = 2;
        sportscar.fuelcap = 14;
        sportscar.mpg = 12;

        gallons = minivan.fuelNeeded(dist);

        System.out.println("To go " + dist + " miles minivan needs " + gallons + " gallons of fuel.");

        gallons = sportscar.fuelNeeded(dist);

        System.out.println("To go " + dist + " miles sportscar needs " + gallons + " gallons of fuel.");
    }
 }