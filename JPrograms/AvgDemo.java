/*
 Write a program that uses an array to find the average of 10 double values. Use any 10 values
you like.
 */

public class AvgDemo {
    public static void main(String[] args) {
    double []numbers = new double[10];
    double sum = 0.0;
    double avg = 0.0;
    

    for(int i=0; i< numbers.length; i++) {
        numbers[i] = i*5;
        System.out.print(numbers[i] + " ");
        sum += numbers[i];
        System.out.println("The sum is: " + sum);
        avg = sum/numbers.length;
    }
    System.out.println();
    System.out.println("The average of the 10 numbers is: " + avg);
}
}