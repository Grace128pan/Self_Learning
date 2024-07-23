/*
 1. break can help us to break one or more blocks of code.
 2. we can use labeled break to break a specific block of code.
 */


 public class BreakWithlabel {
    public static void main(String[] args) {
        outer: //define a label
        for(int i=0; i<5; i++) {
            for(int j=0; j<5; j++) {
                System.out.println("i: " + i + " j: " + j);
                if(j == 2) break outer;
            }
        }
        System.out.println("Loop complete.");
    }
 }