/*
 chapter1:
 1. history and philosophy of Java
 2. Java's contribution
 3. Java's bytecode importance
 4. Buzzword
 5. object-oriented programming
 6. run simple java programs
 7. variables
 8. if for control statements
 9. create blocks of code
 10. how statements are positioned, indented, and terminated
 11. know java keywords
 12. understand rules for java indentifiers
 */
/*
 1. from consumer electronics to Internet programming, Java becomes a large-scale success
 2. Java uses the syntax of C and C++ but is simpler
 3. Java solved the problem of portability and security
 4. Java Virtual Machine(JVM) was designed as an interpreter for Java bytecode. It is a part of the Java Runtime Environment(JRE)
 5. Object-oriented programming: data controlling access to code
 6. all object-oriented programming languages have 3 basic principles: encapsulation, inheritance, polymorphism.
 7. Java's basic unit of encapsulation is the class
 8. Objects are instances of a class. A class is a set of plans that specify how to build an object
 9. the data defined by the class are referred to as member variables or instance variables; the code that operates on that data is referred to as methods
 10. method in Jave is function in C++/C
 11. polymorphism: the ability to use the same method name for different purposes-one interface, multiple methods
 12. Inheritance: one object can acquire the properties of another object
 13. jdk(Java Development Kit) is a software development kit used to develop Java applications
 */



public class Chapter1 {
    public static void main(String[] args) {
        // Create an instance of the inner Person class
        Chapter1 chapter1 = new Chapter1();
        Person person = chapter1.new Person();
        
        // Set properties
        person.setName("Alice");
        person.setAge(30);
        
        // Get and print properties
        System.out.println("Name: " + person.getName());
        System.out.println("Age: " + person.getAge());
    }
    
    public class Person {
        private String name; // private property, accessible within the Person class
        private int age;
    
        // public method to set the name property
        public void setName(String name) {
            this.name = name;
        }
    
        public String getName() {
            return name;
        }
    
        public void setAge(int age) {
            this.age = age;
        }
    
        public int getAge() {
            return age;
        }
    }
}


