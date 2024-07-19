/*
 1.Write a program that reads characters from the keyboard until a period is received. have the program
 count the number of spaces. Report the total at the end of the program.
 */

 package JPrograms;

 public class SpaceCount {
        public static void main(String[] args)
           throws java.io.IOException {
            char ch;
            int count = 0;

            System.out.println("Enter characters. To stop, please enter a period('.').");

            do {
                ch = (char) System.in.read();
                if (ch == ' ')
                    count ++;
            } while(ch != '.');

            System.out.println("Total number of spaces: " + count);
           }
 }