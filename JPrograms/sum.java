/*
1.write a program to find the sum of the first n natural numbers.
 */



public class sum {
    public static void main(String[] args) {
        int sum = 0;
        for(int i=0; i<=20; i++) {
            sum += i;
        }
        System.out.println("Sum of the first 20 natural numbers is: " + sum);
    }
}
