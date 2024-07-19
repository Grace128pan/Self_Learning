/*
1. Write a program that shows the use of break statement in a loop.
 */

 package JPrograms;

 public class BreakTest {
     public static void main(String[] args) {
         // Example 1: break in a while loop inside a for loop
         boolean running = true;
         int x = 5;
         int y = 10;
 
         for (int i = 0; i < 10; i++) {
             while (running) {
                 if (x < y) {
                     System.out.println("Breaking out of while loop when x < y");
                     break;
                 }
                 // Simulating a condition to eventually break the while loop
                 x++; // This will never happen in this setup but demonstrates logic
             }
             System.out.println("After while loop, iteration " + i);
         }
         System.out.println("After for loop");
 
         // Example 2: break in a switch statement
         int day = 3;
         switch (day) {
             case 1:
                 System.out.println("Monday");
                 break;
             case 2:
                 System.out.println("Tuesday");
                 break;
             case 3:
                 System.out.println("Wednesday");
                 break;
             case 4:
                 System.out.println("Thursday");
                 break;
             case 5:
                 System.out.println("Friday");
                 break;
             default:
                 System.out.println("Weekend");
                 break;
         }
 
         // Example 3: break in a nested loop
         for (int i = 0; i < 5; i++) {
             for (int j = 0; j < 5; j++) {
                 if (j == 3) {
                     System.out.println("Breaking out of inner loop when j == 3, iteration " + i);
                     break;
                 }
                 System.out.println("Inner loop, i: " + i + ", j: " + j);
             }
             System.out.println("After inner loop, iteration " + i);
         }
         System.out.println("After nested loops");
     }
 }
 