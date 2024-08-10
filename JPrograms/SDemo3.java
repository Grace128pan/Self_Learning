
// Use a static block
class sBlock {
    static double rootOf2;
    static double rootOf3;

    static {  // This block is executed when the class is loaded
        System.out.println("Inside static block.");
        rootOf2 = Math.sqrt(2.0);  // Initialize static variable rootOf2
        rootOf3 = Math.sqrt(3.0);  // Initialize static variable rootOf3
    }

    sBlock(String msg) {
        System.out.println(msg);  // Print the message passed to the constructor
    }
}

public class SDemo3 {
    public static void main(String[] arg) {
        // Creating an instance of sBlock, which will call the constructor
        //sBlock ob = new sBlock("Inside constructor.");   // This will print the message passed to the constructor
        
        // Access and print the static variables
        System.out.println("Square root of 2 is " + sBlock.rootOf2);
        System.out.println("Square root of 3 is " + sBlock.rootOf3);
    }
}
