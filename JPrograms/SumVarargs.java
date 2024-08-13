/*
This program will demonstrate the use of a varargs method to sum int values
 */

public class SumVarargs {
    //varargs method that sums the int values passed to it
    public static int sum(int... numbers) {
        int total = 0;
        for(int num: numbers) {
            total += num;
        }
        return total;
    }

    public static void main(String[] args) {
        //demonstrating the use of the sum method with different numbers of arguments
        int result1= sum(1, 2, 3, 4);
        System.out.println("Sum of 1, 2, 3 = " + result1);

        int result2= sum(10, 20, 30, 40);
        System.out.println("Sum of 10, 20, 30, 40 = " + result2);

        int result3= sum(5);
        System.out.println("sum of 5= " + result3);

        int result4= sum();
        System.out.println("Sum of no numbers = " + result4);
    }
}

