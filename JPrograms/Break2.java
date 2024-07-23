/*
 1. This program will read input until the user types the letter q.
 */


 public class Break2 {
    public static void main(String[] args) 
        throws java.io.IOException {
        char ch;

        for(;;) {
            ch =(char) System.in.read();
            if(ch == 'q') break;    //the infinite loop will break when the user types q
        }
        System.out.println("You pressed q!");    
    }
 }