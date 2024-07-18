/*
1. we can use break to exit a loop
2. the break statement can be used with any of Java's loops, including intentionally infinite loops.
 */
package JPrograms;

public class BreakDemo {
    public static void main(String[] args) {
        int num = 100;
        //loop while i-squared is less than num
        for(int i=0; i<num; i++) {
            if(i*i >= num) break; //terminate loop if i*i >= 100
            System.out.print(i + " ");
        }
        System.out.println("Loop complete.");
    }
    
}
