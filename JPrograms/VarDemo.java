/*
 1. To use local variable type inference, the variable must be declared with var as the type name and it must include an initializer
 double avg = 10.0 // explicit type declaration
 var avg = 10.0 // implicit type declaration
 IN BOTH CASES, avg is of type double
 
 2.var is context-sensitive
   int var = 1; // var is a variable of type int, not a keyword

 3. we can use var to declare array
 var myArry = new int[10]; // myArry is of type int[]

 we can not use [] with var, so
 var myArray = new int[10]; //wrong
 var myArray[] = new int[10]; //wrong

 4. var can only be used to declare a variable only when that variable is initialized
 var counter; //wrong

 5. var can only be used to declare local variables
 
The following is a simple demonstration of local variable type inference
 */

public class VarDemo {
    public static void main(String[] args) {
        //use type inference to determine the type of the variable named avg. In this case, double is inferred
        var avg = 10.0; //use var to infer type of avg
        System.out.println("Value of avg: " +avg);

        //In the following context, var is not a predefined identifier
        //it is simply a user-defined variable name
        int var = 1; //use var as a variable name
        System.out.println("Value of var is: " + var);

        //Interestingly, in the following sequence, var is used
        //as both the type of the declaration and as a variable name
        var k = -var; //declare a variable of type int and assign -var to it
        System.out.println("Value of k is: " + k);
    }
}
