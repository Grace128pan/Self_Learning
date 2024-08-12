/*
a static block in Java is used to initialize static variables or perform any setup that is required when a class is first loaed into memory
this block of code runs once, when the class is loaded, before any objects are created or any static methods are called
static block functions
1)Initialization of static variables: if you need to perform complex initialization of static variables, you can do this in a static block
2)loading resources: if your class needs to load some resources(eg. configuration files, database connections) when it first loaded, a static
block is a good place to do this
3)one-time setup: any one-time setup that needs to happen when the class is loaded can be done in a static block
 */

 class staticBExample {
    //static variable
    static int staticVar;

    //static block to initialize the static variable
    static {
        System.out.println("Static block executed.");
        staticVar = 42;
    }

    //constructor
    staticBExample() {
        System.out.println("Constructor executed.");
    }

    //static method to display the static varibale
    static void displayStaticVar() {
        System.out.println("Static variable value: " + staticVar);
    }
 }
public class StaticBlo2 {
    public static void main(String[] args) {
        System.out.println("Main method starts.");

        //access static variable and static method without creating an object
        staticBExample.displayStaticVar();

        //create an instance of staticBExample
       // staticBExample example2 = new staticBExample();    //this step will make constructor executed shows in the terminal

        System.out.println("Main method ends."); 
    }
}
