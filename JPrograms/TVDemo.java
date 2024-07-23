/*
1. a constructor in Java can have one or more parameters. These parameters are used to initialize the instance variable of an object when it is created
 */



 class TV {
    String brand;
    int size;
    String resolution;

    // Constructor with parameters  - brand, size, resolution
    TV(String brand, int size, String resolution) {
        this.brand = brand;
        this.size = size;
        this.resolution = resolution;
    }

    //method to display TV details
    void displayTV() {
        System.out.println("The brand, size and resolution of the TV are: " + brand + ", " + size + ", " + resolution);
    }
 }

 public class TVDemo {
    public static void main(String[] args) {
        //creating an instance of TV using the constructor with parameters
        TV tv1 = new TV("Samsung", 55, "4k UHD");

        //display TV details
        tv1.displayTV();
    }
 }