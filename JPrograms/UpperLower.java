/*
This program should convert lowercase letters to uppercase and uppercase letters to lowercase.
The ASCII lowercaseletters are in the range 97 to 122, and the ASCII uppercase letters are in the range 65 to 90.
So, to convert a lowercase letter to uppercase, you subtract 32 from its ASCII value.
1. Use the logic to convert lowercase to uppcase or uppercase to lowercase, making no changes to any other character
2. Have the program stop when a period is entered
3. At the end the program will display the number case changes that have taken place
4. The program should read characters from the keyboard
 */

 package JPrograms;

 public class UpperLower {
     public static void main(String[] args)
         throws java.io.IOException {
             char ch;
             int count = 0;
 
             System.out.println("Enter characters. Enter a period '.' to stop.");
 
             do {
                 ch = (char) System.in.read();
 
                 if(ch >= 'a' && ch <= 'z') {
                     ch = (char) (ch - 32);
                     count++;
                 } else if(ch >= 'A' && ch <= 'Z') {
                     ch = (char) (ch + 32);
                     count++;
                 }
 
                 // Skip newline and carriage return characters and the period
                 if(ch != '\n' && ch != '\r' && ch != '.') {
                     System.out.print(ch);
                 }
 
             } while(ch != '.');
 
             System.out.println("\nNumber of case changes: " + count);
         }
 }
 
