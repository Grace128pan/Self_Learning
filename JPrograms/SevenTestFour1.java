//using super() to access superclass method

//superclass
class Vehicle11 {
    int speed;

    //method to display method
    void displaySpeed() {
        System.out.println("Speed: " + speed + " km/hr");
    }

 }

  //subclass
  class Car11 extends Vehicle11 {
    int speed; //hides the superclass field
    Car11(int superSpeed, int subSpeed) {
        super.speed = superSpeed; //accessing the superclass field
        this.speed = subSpeed; //initializing the subclass field
    }

    void displaySpeed() {
        super.displaySpeed(); //calling the superclass method
        System.out.println("Car speed: " + speed + " km/hr");
    }

}
public class SevenTestFour1 {
    public static void main(String[] args) {
        Car11 c = new Car11(100, 200);
        c.displaySpeed(); //calling the subclass method
    }
}
