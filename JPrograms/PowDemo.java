/*
 Write a program to demonstrate the progression 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024 using a for loop.
 */


 public class PowDemo {
    public static void main(String[] args) {
        for (int i=0; i<11; i++) {
            System.out.println((int)Math.pow(2, i) + " ");
        }
    }
 }