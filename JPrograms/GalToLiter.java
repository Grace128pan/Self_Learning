/*
1. This program displays a conversion table of gallons to liters.
2. We will have the conversion from 1 to 100 gallons. After every 10 gallons, a blank line will be output. 
3. The conversion factor is 3.7854.
 */



public class GalToLiter {
    public static void main(String[] args) {
        double gallons, liters;
        int counter;

        counter = 0;
        for (gallons = 1; gallons <= 100; gallons ++) {
            liters = gallons * 3.7854;
            System.out.println(gallons + " gallons is " + liters + " liters.");

            counter ++;
            if(counter == 10) {
                System.out.println();
                counter = 0;
            }
        }
    }

}