/*
 In Java, a constructor has the same name as the class it belongs to, it is used to initialize object of that class. Constructor 
 does not have a return type, not even a "void"
 */

 package JPrograms;

 class PersonDemo {
    String name;
    int age;

    //constructor for the Person class
    PersonDemo(String name, int age) {
        this.name = name;
        this.age = age;
    }

    //method to display person details
    void displayPersonDetails() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
 }

 public class ConsInit {
    public static void main(String[] args) {
        //create an instance of the Person class using the constructor
        PersonDemo personNew = new PersonDemo("Grace", 34);
        personNew.displayPersonDetails();
    }
 }