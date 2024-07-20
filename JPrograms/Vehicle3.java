/*
 1. the following version of Vehicle contains a method called range() that displays the range of the vehicle
 2. pay attention to classname and filename
 3. There are two types of return: one for us in void methods(those that do not return a value) and one for use in methods that do return a value
 */

 package JPrograms;

 class Vehicle4 {
     int passengers;
     int fuelcap;
     int mpg;
 
     // Display the range
     void range() {
         System.out.println("Range is " + fuelcap * mpg + " miles.");
     }
 }
 
 public class Vehicle3 {
     public static void main(String[] args) {
         Vehicle4 minivan = new Vehicle4();
         Vehicle4 sportscar = new Vehicle4();
 
         // Initialize minivan properties
         minivan.passengers = 7;
         minivan.fuelcap = 16;
         minivan.mpg = 21;
 
         // Initialize sportscar properties
         sportscar.passengers = 2;
         sportscar.fuelcap = 14;
         sportscar.mpg = 12;
 
         // Display information about the minivan
         System.out.print("Minivan can carry " + minivan.passengers + " passengers. ");
         minivan.range();
 
         // Display information about the sportscar
         System.out.print("Sportscar can carry " + sportscar.passengers + " passengers. ");
         sportscar.range();
     }
 }
 
