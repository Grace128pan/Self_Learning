/*
 in Java, sometimes a class needs to perform some initialization tasks before it can create objects
 2.it might need to establish a connection to a remote site, or initialize certain static variables before any of the class's static methods are used
 3.to handle such situations, Java allows the use of a static block
 4.a static block is executed when the class is first loaded. therefore, it runs before the class can be used for any other purpose

 static block features
 1)automatic execution: the static block is executed automatically when loaded without needing to be explicitly called
 2)executed once: the static block is executed only once when loaded, regardless of how many objects of that class are created
 3)Initialization of static variables: it can be used to initialize static variables or perform one-time setup tasks
 */

 class StaticBlockExample {
    // A static variable
    static int staticVar;

    // An instance variable
    int instanceVar;

    // Static block
    static {
        System.out.println("Static block is executed before the class is loaded.");
        staticVar = 10; // Initialize the static variable
        // Assume there is some code here to establish a database connection
    }

    // Constructor
    StaticBlockExample(int value) {
        System.out.println("Constructor is executed.");
        instanceVar = value; // Initialize the instance variable
    }

    // Static method
    static void staticMethod() {
        System.out.println("Static method is executed.");
    }

    // Instance method
    void instanceMethod() {
        System.out.println("Instance method is executed. Instance variable: " + instanceVar);
    }
}

public class staticBlock {
    public static void main(String[] args) {
        // The static block will execute the first time the class is used
        System.out.println("Before creating an object: ");
        StaticBlockExample example1 = new StaticBlockExample(5); // Static block has already executed when this object is created
        System.out.println("Static variable: " + StaticBlockExample.staticVar);

        // Use the object
        example1.instanceMethod(); // Now we are using the example1 object

        System.out.println("\nBefore calling static method: ");
        StaticBlockExample.staticMethod(); // Static block won't execute again when this method is called
    }
}

    

