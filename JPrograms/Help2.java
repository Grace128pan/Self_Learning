/*
 1. Improve the java help system
 */



 //import necessary classes for reading input 
 import java.io.BufferedReader;   //for efficient reading of characters, arrays, and lines
 import java.io.IOException;      // for handing input/output exceptions
 import java.io.InputStreamReader; //reading bites and decode them into characters 
 
 public class Help2 {
     public static void main(String[] args) throws IOException {
         char choice = '0'; // Initialize choice with a default value
         BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
         do {
             System.out.println("Help on: ");
             System.out.println("  1. if");
             System.out.println("  2. switch");
             System.out.println("  3. for");
             System.out.println("  4. while");
             System.out.println("  5. do-while\n");
 
             System.out.print("Choose one: ");
             String input = reader.readLine(); // Read the entire line
 
             if (input.length() != 1 || input.charAt(0) < '1' || input.charAt(0) > '5') {
                 System.out.println("Invalid choice, please select a number between 1 and 5.");
                 continue; // Go back to the beginning of the loop
             }
 
             choice = input.charAt(0); // Get the first character
 
         } while (choice < '1' || choice > '5'); // Loop until a valid choice is made
 
         switch (choice) {
             case '1':
                 System.out.println("The if:\n");
                 System.out.println("if(condition) statement;");
                 System.out.println("else statement;");
                 break;
             case '2':
                 System.out.println("The switch:\n");
                 System.out.println("switch(expression) {");
                 System.out.println("  case constant:");
                 System.out.println("    statement sequence");
                 System.out.println("    break;");
                 System.out.println("  // ...");
                 System.out.println("}");
                 break;
             case '3':
                 System.out.println("The for:\n");
                 System.out.println("for(init; condition; iteration)");
                 System.out.println("  statement;");
                 break;
             case '4':
                 System.out.println("The while:\n");
                 System.out.println("while(condition) statement;");
                 break;
             case '5':
                 System.out.println("The do-while:\n");
                 System.out.println("do {");
                 System.out.println("  statement;");
                 System.out.println("} while(condition);");
                 break;
         }
     }
 }
 