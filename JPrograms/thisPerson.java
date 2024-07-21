/*
 1.This programs show how to use this keyword in java
 */

package JPrograms;

class Person {
    //attributes of the class
    String name;
    int age;

    //constructor of the class
    //This constructor initializes the fields with given values
    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    //method or behavior of the class
    //This method displays the person's information

    void personInfo() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

//the thisPerson class will test the person class
public class thisPerson {
    public static void main(String[] args) {
        //creating an object of the person class
        Person person1 = new Person("Alice", 25);

        //calling the method of the object
        person1.personInfo();

        System.out.println("....................");
        //creating another object of the Person class
        Person person2 = new Person("Bob", 20);

        //calling the method of the object
        person2.personInfo();
    }
}