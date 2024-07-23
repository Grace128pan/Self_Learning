/*
 chapter3
 program control statements
 1.input characters from the keyboard
 2.know the complete form of the if statement
 3.use the switch statement
 4.know the complete form of the while statement
 5. use the while loop 
 6. use the do-while loop
 7. use break to exit a loop 
 8. use break as a form of goto
 9. apply continue
 10. nested loops

 3 types of control statements
 1.selection statements(if and switch)
 2.iteration statements(while, do-while, for)
 3.jump statements(break, continue, return)

 System.in.read() method is used to read a character from the keyboard; The character is returned as an integer, but it must be cast
 into a char to assign it to a char variable

 if-else statement:
 if(condition) statement;
 else statement;


 */


public class Chapter3 {
    public static void main(String[] args) 
        throws java.io.IOException {
            char ch;
            System.out.println("Press a key followed by ENTER: ");

            ch = (char) System.in.read(); // get a char from the keyboard
            System.out.println("You key is: " + ch);

            
        }
    
}
