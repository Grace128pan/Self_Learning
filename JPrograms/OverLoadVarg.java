/*
a varargs method can be overloaded in Java
we can define multiple methods with the same name but different parameter types or different numbers of parameters. 
when overloading a varargs method, the compiler determines which method to call based on the method signature that best matches the arguments provided
 */

public class OverLoadVarg {
    //varargs method to sum int values
    public static int sum(int ... numbers) {
        int total = 0;
        for(int num: numbers) {
            total += num;
        }
        return total;
    }

    //overloaded varargs method to concatenate strings
    public static String sum(String ... strings) {
        StringBuilder result = new StringBuilder();
        for(String str: strings) {
            result.append(str);
        }
        return result.toString();
    }

    //overloaded method with a different parameter type
    public static double sum(double ... numbers) {
        double total = 0;
        for(double num: numbers) {
            total += num;
        }
        return total;
    }

    public static void main(String[] args) {
        //calling the int varargs method
        int intSum = sum(1, 2, 3, 4, 5);
        System.out.println("Sum of integers: " + intSum);

        //calling the string varargs method
        String stringSum = sum("hello", ",", "You can do it and you can be successful", "!");
        System.out.println("Concatenated string: " + stringSum);

        //calling the double varargs method
        double doubleSum = sum(1.5, 2.5, 3.5);
        System.out.println("Sum of doubles: " + doubleSum);
    }
}
