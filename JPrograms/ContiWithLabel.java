/*
1. this program will demonstrate how to use continue with a label
 */

 package JPrograms;

 public class ContiWithLabel {
    public static void main(String[] args) {
        outerloop:
        for(int i=1; i<10; i++) {
            System.out.print("\nOuter loop pass " + i + ", Inner Loop: ");
            for(int j=1; j<10; j++) {
                if(j==5) continue outerloop; // continue outer loop
                System.out.print(j);
            }
        }
    }
 }