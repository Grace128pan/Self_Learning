/*
1. the condition controlling the loop can be any valid boolean expression. It does not need to involve the loop control variable.
2. This program will continue to execute until the user types the letter S at the keyboard.
 */



 public class ForTest {
        public static void main(String[] args) 
            throws java.io.IOException {
                System.out.println("Press S to stop.");

                for (int i=0; (char)System.in.read()!= 'S'; i++) {
                    System.out.println("Pass #" + i);
                }
            }
 }