/*
the common usages of super in java
1)access superclass constructors
2)access superclass methods or fields
 */
class Animal10 {
    String name;

    //constructor of a superclass
    Animal10(String name) {
        this.name = name;
        System.out.println("Animal Constructor called: " + name);
    }

    //method to display name
    void displayInfo10() {
        System.out.println("Animal Name: " + name);
    }
}

//subclass
class Dog10 extends Animal10 {
    String breed;

    //constructor of a subclass
    Dog10(String name, String breed) {
        //using super() to call the superclass constructor
        super(name);
        this.breed = breed;
        System.out.println("Dog Constructor called: " + breed);
    }

    //method to display breed
    void displayInfo10() {
        super.displayInfo10(); //calling the superclass method
        System.out.println("Breed: " + breed);
    }
}
public class SevenTestFour {
    
}
