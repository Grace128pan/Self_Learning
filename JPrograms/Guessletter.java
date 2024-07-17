/*
1. the program will be a guess-letter game
2.nested if statement

 */
package JPrograms;

public class Guessletter {
    public static void main(String[] args) 
        throws java.io.IOException {
        char ch1, answer = 'K';

        System.out.println("I'm thinking of a letter between A and Z.");
        System.out.println("Can you guess it: ");

        ch1 = (char) System.in.read(); // get a char from the keyboard
        if (ch1 == answer) System.out.println("** Right **");
        else System.out.println("--Sorry, you're wrong--");
}
}
