/*
1. this program will give a more efficent way of finding factors using square root way
 */



 public class NestedLoop2 {
    public static void main(String[] args) {
        for(int i=2; i<=100; i++) {
            System.out.print("Factors of " + i + " : ");
            for(int j=2; j<=Math.sqrt(i); j++) {
                if(i%j == 0) {
                    System.out.print(j + " ");
                    if ( j != i/j) {
                        System.out.print((i/j) + " "); // to avoid printing same factor twice
                    }
                }
            }
            System.out.println();
        }
        
    }
 }