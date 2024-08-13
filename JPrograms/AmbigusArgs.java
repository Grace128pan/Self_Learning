/*
 overloaded methods can sometimes lead to ambiguity if the method signatures are too similar. 
 In such case, the Java compiler will not be able to determine which method to call, leading to a compilation error.
 */

public class AmbigusArgs {
    //overloaded varargs method 1
    public static void printValues(int ...numbers) {
        System.out.println("called printValues(int...numbers)");
        for(int num: numbers) {
            System.out.print(num + " ");
        }
        System.out.println();
    }

    //overloaded varargs method 2
    public static void printValues(String ...strings) {
        System.out.println("Called printValues(String ...strings)");
        for(String str: strings) {
            System.out.print(str+" ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        //printValue(); //Error: reference to printValue is ambiguous

        //calling with an int value
        printValues(1, 2, 3); //prints 1 2 3, this is not ambiguous

        //calling with a string value
        printValues("Hi", "There"); //prints Hi There, this is not ambiguous

    }
}
