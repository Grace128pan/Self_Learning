//This program will demonstrate how to build a subclass of Vehicle for trucks

class VehicleM {
    private int passengers; // number of passengers
    private int fuelcap; //fuel capacity in gallons
    private int mpg; // fuel consumption in miles per gallon

    //This is a constructor for Vehicle
    VehicleM(int p, int f, int m) {
        passengers = p;
        fuelcap = f;
        mpg = m;
    }

    //return the range
    int range() {
        return mpg * fuelcap;
    }

    //compute fuel needed for a given distance
    double FuelNeededM(int miles) {
        return (double) miles /mpg;
    }
    
    //accessor methods for instance variables
    int getPassengers() { return passengers; }
    void setPassengers(int p) { passengers = p; }

    int getFuelcap() { return fuelcap; }
    void setFuelcap(int f) { fuelcap = f; }

    int getMpg() { return mpg; }
    void setMpg(int m) { mpg = m; }
}

//extend VehicleM to create a truckM specialization
class TruckM extends VehicleM {
    private int cargocap; //cargo capacity in pounds

    //This is a constructor for TruckM
    TruckM(int p, int f, int m, int c) {
        //initialize vehicleM members using VehicleM's constructor
        super(p, f, m);
        cargocap = c;
    }

    //accessor methods for cargocap
    int getCargo() { return cargocap;}
    void putCargo(int c) { cargocap = c;}

}

public class TruckDemo {
    public static void main(String[] args) {
        //construct some trucks
        TruckM semi = new TruckM(2, 200, 7, 4400);
        TruckM pickup = new TruckM(3, 28, 15, 2000);
        double gallons;
        int dist = 252;

        gallons = semi.FuelNeededM(dist);

        System.out.println("Semi can carry " + semi.getCargo() + " pounds.");
        System.out.println("To go " + dist + " miles semi needs " + gallons + " gallons of fuel.\n");

        gallons = pickup.FuelNeededM(dist);

        System.out.println("Pickup can carry " + pickup.getCargo() + " pounds.");
        System.out.println("To go " + dist + " miles pickup needs " + gallons + " gallons of fuel.\n");

    }
}
