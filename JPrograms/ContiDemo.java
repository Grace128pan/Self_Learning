/*
 1. this program will demonstrate how continue is used in loops
 */


 public class ContiDemo {
    public static void main(String[] args) {
        for(int i=0; i<=100; i++) {
            if(i%2 != 0) continue;
            System.out.println(i);
        }
        System.out.println("=====================================");
        for(int m=0; m<=100; m++) {
            if(m%2 ==0) System.out.println(m);
        }
    }
 }
