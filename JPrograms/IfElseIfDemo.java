/*
    * This program demonstrates the use of if-else-if statement.
 */

 package JPrograms;

 public class IfElseIfDemo {
     public static void main(String[] args) 
         throws java.io.IOException {
         int number;
         StringBuilder input = new StringBuilder();  //collect characters until a newline'\n' is encountered
         char ch;
         
         System.out.println("Enter a number between 0 and 24: ");
 
         // Read characters until a newline is encountered
         while ((ch = (char) System.in.read()) != '\n') {
             input.append(ch);
         }
 
         // Convert the collected characters to an integer, trimming any whitespace
         number = Integer.parseInt(input.toString().trim()); //used to remove any leading or trailing whitespace (including the newline character) from the input string before parsing it to an integer.
 
         if(number >= 13 && number <= 24) {
             System.out.println("The time slot is available.");
         } else if(number > 24) {
             System.out.println("The time is too late, but arguable.");
         } else {
             System.out.println("The time slot is too early and not available.");
         }
     }
 }
 