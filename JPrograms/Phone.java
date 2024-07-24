/*
To know the way command-line arguments 
The next program takes one command-line argument that specifies a person's name.
it then searches through a two-dimensional array of strings for that name
if it finds a match, it displays that person's telephone number

The program shows a simple automated telephone directory

step1: natigate to the directory where the file is saved
cd C:\Users\Acer\Documents\NetBeansProjects\JPrograms
step2: compile the program
javac Phone.java
step2: run the program with command-line arguments
java Phone Tom
 */

public class Phone {
    public static void main(String[] args) {
        String[][] numbers = {
            {"Tom", "555-3322"},
            {"Mary", "555-8976"},
            {"Jon", "555-1037"},
            {"rachel", "555-1400"}
        };

        int i;

        if(args.length != 1)    // to use the program, one command-line argument must be present
            System.out.println("usage: java Phone <name>");
        else {
            for(i=0; i<numbers.length; i++) {
                if(numbers[i][0].equals(args[0])) {
                    System.out.println(numbers[i][0] + ": " + numbers[i][1]);
                    break;
                }
            }
            if(i == numbers.length)
                System.out.println("Name not found.");
        }
    }
}
