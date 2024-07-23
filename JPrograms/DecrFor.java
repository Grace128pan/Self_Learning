/*
 For loop can work in a positive or negative fashion
 */

public class DecrFor {
    public static void main(String[] args) {
        for(int i=100; i> -100; i-= 5) {
            System.out.println(i);
        }

        for(int m=0, n=10; m < n; m++, n--) {
            System.out.println("m and n: " +m + " " + n);
        }
    }
}
