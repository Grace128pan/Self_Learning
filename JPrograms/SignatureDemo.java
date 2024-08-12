/*
The name of a method plus its parameter list constitutes the method's signature. 
The method signature is used by the Java compiler to distinguish between different methods in the same class, particularly in case of method overloading
 */

 class MethodSignatureExample {
    //method with one integer parameter
    void display(int num) {
        System.out.println("Method with integer parameter: " + num);
    }

    //overloaded method with one string parameter
    void display(String text) {
        System.out.println("Method with string parameter: " + text);
    }

    //overloaded method with two parameters
    void display(int num, String text) {
        System.out.println("Method with integer and string parameters: " + num + " " + text);
    }
 }

public class SignatureDemo {
    public static void main(String[] args) {
        //create an instance of methodsignatureexample
        MethodSignatureExample obj = new MethodSignatureExample();

        //call the overloaded methods
        obj.display(19);
        obj.display("Hi there!");
        obj.display(20, "I love you!");
    }
}
