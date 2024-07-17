/*
 This program can compute the square roots of numbers from 1 to 100, and it will also compute the rounding error.
 */
package JPrograms;

public class RoundingError {
    public static void main(String[] args) {
        double num, sroot, rerr;

        for(num =1.0; num < 100.0; num++) {
            sroot = Math.sqrt(num);
            System.out.println("Square root of " + num + " is " + sroot);

            //compute rounding error
            rerr = num - (sroot * sroot);
            System.out.println("Rounding error is " + rerr);
            System.out.println();
        }
    }
}
