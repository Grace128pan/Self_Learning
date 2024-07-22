/*
The following program will illustrate how new is used to create an object of a class.
 */

 package JPrograms;

 class FashionCar {
     String carName;
     int carPrice;

     //constructor for the class
     FashionCar(String name, int price) {
        this.carName = name;
        this.carPrice = price;
     }
     //method to display the car information
     void displayCar() {
        System.out.println("The car name and car price are: " + carName + " " +carPrice);
     }
 }

 public class newIllustrate {
    public static void main(String[] args) {
        //creating an object of the class FashionCar
        FashionCar car3 = new FashionCar("BMW", 50000);
        FashionCar car4 = new FashionCar("Audi", 60000);

        //calling the method of the class FashionCar
        car3.displayCar();
        car4.displayCar();
    }
 }