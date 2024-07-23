/*
1. This program demonstrate the usage of if-else-if statement.
2. We should consider whether to add curly braces in order to avoid confusion.
 */



public class IfElse2 {
    public static void main(String[] args) {
        int x = 5;
        int y = 101;
        int z = 50;
        boolean done = false;

        if(x < 10) {
            if(y > 100) {
                if(!done) x = z;
                else y = z;
    
            } else System.out.println("error");
            
        }

        System.out.println("x: " + x);
        System.out.println("y: " + y);
    }
}
