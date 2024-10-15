/*
In Java, a superclass reference variable can refer to a subclass object because of polymorphism.
This is important in the context of method overriding because it allows java to decide which method(the superclass or subclass) to call at runtime.
 */

class Employee {
    String name;

    //constructor of employee
    Employee(String name) {
        this.name = name;
    }

    //method to calculate salary(to be overridden by subclasses
    double calculateSalary() {
        return 0.0; //default behavior for a generic employee
    }
}

//superclass representing a full-time employee
class FullTimeEmployee extends Employee {
    double monthlySalary;

    //constructor of full-time employee
    FullTimeEmployee(String name, double monthlySalary) {
        super(name);
        this.monthlySalary = monthlySalary;
    }

    //override the method to calculate salary
    double calculateSalary() {
        return monthlySalary;
    }
}

//subclass representing a part-time employee
class PartTimeEmployee extends Employee {
    double hourlyRate;
    int hoursWorked;

    //constructor of part-time employee
    PartTimeEmployee(String name, double hourlyRate, int hoursWorked) {
        super(name);//call the constructor of the superclass
        this.hourlyRate = hourlyRate;
        this.hoursWorked = hoursWorked;
    }

    //override the method to calculate salary
    double calculateSalary() {
        return hourlyRate * hoursWorked;
    }
}
public class SevenTestSix {
    public static void main(String[] args) {
        //superclass reference referring to a subclass object(full-time employee)
        Employee emp1 = new FullTimeEmployee("Alice", 5000.0);
        //superclass reference referring to a subclass object(part-time employee)
        Employee emp2 = new PartTimeEmployee("Bob", 20.0, 80);

        //display the salary for both employees
        System.out.println("Salary of " + emp1.name + " is " + emp1.calculateSalary());
        System.out.println("Salary of " + emp2.name + " is " + emp2.calculateSalary());
}
}


