/*
 *This is a program to convert meters to inches. one meter is equal to 39.37 inches. There will be a blank line every 12 inches
 */

package JPrograms;

public class MeterToInches {
    public static void main(String[] args) {
        double meters, inches;
        int counter = 0;

        for(meters = 1; meters <=100; meters++) {
            inches = meters * 39.37;
            System.out.println("Meters: " + meters + " is equal to " + inches + " inches.");

            counter ++;
            if(counter == 12) {
                System.out.println();
                counter = 0;
            }
        }
    }
}