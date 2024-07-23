/*
 1. when the iteration condition in for loop is missing, the loop can still run with fixes inside the loop
 2. This program will demonstate part of the for loop is missing
 */


 public class MissingIter {
    public static void main(String[] args) {
        for (int i=0; i<10;) {
            System.out.println("Pass #" + i);
            i++; //increment loop control over var
        }

        //loops with no body
        int sum = 0;
        for (int m=0; m<=5; sum+=m++);
        System.out.println("Sum is: " + sum);

        //when the variable is declared inside the for statement, it can not be used outside the loop
        int summation = 0;
        int fact = 1;
        for(int j = 1; j<=5; j++) {
            summation += j;
            fact *= j;
        }
        System.out.println("Summation is: " + summation);
        System.out.println("Factorial is: " + fact);
    }
 }