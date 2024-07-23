/*
 The following program will demonstrate the while loop

 Use a for loop when performing a known number of iterations based on the value of a loop control variable. 
 Use the do-while loop when you want to perform at least one iteration
 use a while loop when the loop has to repeat until some condition becomes false.
 */



 // This program will print alphabet from a to z and compute integer powers of 2
 public class WhileLoop {
     public static void main(String[] args) {
         // Print alphabet from a to z
         char ch = 'a';
         while (ch <= 'z') {
             System.out.print(ch + " ");
             ch++;
         }
         System.out.println();
 
         // Compute integer powers of 2 using while loop
         int e;
         int result;
         for (int i = 0; i < 10; i++) {
             result = 1;
             e = i;
             while (e > 0) {
                 result *= 2;
                 e--;
             }
             System.out.println("2 to the " + i + " power is " + result);
         }
 
         // A better alternative using Math.pow
         for (int m = 0; m < 10; m++) {
             result = (int) Math.pow(2, m);
             System.out.println("2 to the " + m + " power is " + result);
         }
     }
 }
 