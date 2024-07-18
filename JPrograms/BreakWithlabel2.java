/*
    * This program demonstrates the use of break statement with label.
 */

 package JPrograms;

 public class BreakWithlabel2 {
    public static void main(String[] args) {
        for(int i=1; i<4; i++) {
            one:
            {
                two:
                {
                    three:
                    {
                        System.out.println("\ni is " + i);
                        if(i ==1) break one;
                        if(i ==2) break two;
                        if(i ==3) break three;

                        //this is never reached
                        System.out.println("This won't print");
                    }
                    System.out.println("After block three.");
                }
                System.out.println("After block two.");
            }
            System.out.println("After block one.");
        }
        System.out.println("After for loop.");
    }
 }