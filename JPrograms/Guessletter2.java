/*
 1. This is the third version of guess-letter program using nested if-else
 2. we can also use if-else if-else if- else statement ladder; the final else is the default case
 */


 public class Guessletter2 {
    public static void main(String[] args) 
    throws java.io.IOException {
        char ch, answer = 'K';

        System.out.println("I'm thinking of a letter between A and Z.");
        System.out.print("Can you guess it: ");

        ch = (char) System.in.read(); // get a char

        if(ch == answer) System.out.println("** Right **");
        else {
            System.out.print("...Sorry, you're ");
            if(ch < answer) System.out.println("two low.");
            else System.out.println("too high.");
        }
        
    }  
 }
