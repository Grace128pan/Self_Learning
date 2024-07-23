/*
This program will illustrate the us of this keyword to call another constructor in the same class(constructor chain)
*/



class PersonThree {
    private String name;
    private int age;

    //default constructor
    public PersonThree() {
        this("Unknown", 0);
    }

    //parameterized constructor
    public PersonThree(String name, int age) {
        this.name = name;
        this.age = age;
    }

    //method to display person details

    public void displayPerson() {
        System.out.println("Name: " + name + " Age: " + age);
    }
}

public class thisCallCons {
    public static void main(String[] args) {
        PersonThree onePerson = new PersonThree();
        onePerson.displayPerson();

        PersonThree twoPerson = new PersonThree("Bob", 32);
        twoPerson.displayPerson();
    }
}