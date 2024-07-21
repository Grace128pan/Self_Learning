/*
This program will show non-void method returning a value.
 */

package JPrograms;

class Vehicle5 {
    int passengers;
    int fuelcap;
    int mpg;

    int range() {
        return mpg*fuelcap; //return the range for a given vehicle
    }
}

class RetMeth {
    public static void main(String[] args) {
        Vehicle5 minivan = new Vehicle5();
        Vehicle5 sportscar = new Vehicle5();

        int range1, range2;

        minivan.passengers = 7;
        minivan.fuelcap = 16;
        minivan.mpg = 21;

        sportscar.passengers = 2;
        sportscar.fuelcap = 14;
        sportscar.mpg = 12;

        range1 = minivan.range();
        range2 = sportscar.range();

        System.out.println("Minivan can carry " +minivan.passengers + " with a range of " +range1 + " miles.");
        System.out.println("Sportscar can carry " +sportscar.passengers + " with a range of " +range2 + " miles.");
    }
}

//actually there is no need to set range1 and range2
/*
we can directly use System.out.println("Minivan can carry " +minivan.passengers + " with a range of " +minivan.range() + " miles.");
we can call range() method directly when necessary
if(v1.range() > v2.range()) {
    System.out.println("Minivan can carry more passengers than sportscar");
 */