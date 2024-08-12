/*
To make a member accessible only by other members of its class, we should use private access modifier. this ensures
the member is not accessible from outside the class, including subclasses and classes in the same package.
 */

 class ExampleClass {
    //a private member varibale
    private int secretNumber;

    //constructor to initialize the private member
    ExampleClass(int number) {
        secretNumber = number;
    }

    //a public method to access the private member
    public void showSecretNumber() {
        System.out.println("The secret number is: " + secretNumber);
    }

    //a private method that can only be called within the class
    private void changeSecretNumber(int newNumber) {
        secretNumber = newNumber;
        System.out.println("Secret number changed to: " + secretNumber);
    }

    //a public method that uses the private method
    public void setSecretNumber(int newNumber) {
        changeSecretNumber(newNumber); //calling the private method
    }
 }

public class PrivateDemo {
    public static void main(String[] args) {
        //create an instance of ExampleClass
        ExampleClass example3 = new ExampleClass(43);

        //accessing the private member using a public method
        example3.showSecretNumber();

        //updating the private member using a public method that internally calls a private method
        example3.setSecretNumber(100);
    }
}
