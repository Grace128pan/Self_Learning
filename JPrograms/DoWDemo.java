/*
1.do-while loop checks its condition at the bottom of the loop. This means the loop will always run at least once.
do {
    statements;
} while (condition);

 */

package JPrograms;

public class DoWDemo {
    public static void main(String[] args) 
        throws java.io.IOException {
            char ch;
            do {
                System.out.println("press a key followed by ENTER:");
                ch = (char) System.in.read(); // get a char

                while (System.in.read() != '\n'); // discard the rest of the line
            } while(ch!='q');
        }
}
