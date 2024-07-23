

public class Guessletter3 {
    public static void main(String[] args)
        throws java.io.IOException {
            char ch, answer = 'K';

            do {
                System.out.println("I'm thinking of a letter between A and Z.");
                System.out.print("You can guess it: ");

                ch = (char) System.in.read(); 
                
                while (System.in.read()!= '\n'); // discard any other characters in the input buffer

                if(ch == answer) System.out.println("**Right**");
                else {
                    if(ch < answer) System.out.println("...Sorry, you're too low.");
                    else System.out.println("...Sorry, you're too high.");
                    System.out.println("Try again!\n");
                }
            } while (answer != ch);
        }
}
