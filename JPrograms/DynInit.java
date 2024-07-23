/*
1. a variable declared within a block is called a local variable. Objects declared within th inner scope will not be visible outside it
 */


public class DynInit {
    public static void main(String[] args) {
        double radius = 4, height = 5;

        double volume = 3.1416 *radius *radius *height;
        System.out.println("Volume is " + volume);

        int x = 10;
        if(x==10) {
            int y = 20;
            System.out.println("x and y: " + x + " " + y);
            x = y*2;
        }
        x = 100;
        System.out.println("x is " + x);
    }
}