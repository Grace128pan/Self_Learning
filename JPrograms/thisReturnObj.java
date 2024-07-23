/*
 The java program illustrate the use of 'this' to return the current object for method chaining.
 */


class People {
    private String name;
    private int age;

    //setter method for name with chaining
    People setName(String name) {
        this.name = name;
        return this; //return the current object
    }

    //setter method for age with chaining
    People setAge(int age) {
        this.age = age;
        return this; //return the current object
    }

    //method to display person details
    void displayPeople() {
        System.out.println("Name: " + name + " Age: " + age);
    }
}

public class thisReturnObj {
    public static void main(String[] args) {
        People p1 = new People();
        p1.setName("John").setAge(40);  //method chaining
        p1.displayPeople();
    }
}