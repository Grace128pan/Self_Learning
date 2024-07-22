/*
 In Java, if a method returns no value, its return type must be 'void'
 The program below demonstrates how to create a method with a void return type
 */

 package JPrograms;

 class PrintMessage {
    //method with void return type
    void PrintHello () {
        System.out.println("Hello, World!");
    }
 }

 class Method1 {
    public static void main(String[] args) {
        //create an instance of the PrintMessage class

        PrintMessage message = new PrintMessage();

        //call the printHello method
        message.PrintHello();
    }
 }