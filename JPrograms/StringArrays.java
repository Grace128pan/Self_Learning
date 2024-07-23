/*
 Array of strings:
 strings can be assembled into arrays

 The following program will demonstrate String arrays
 */

public class StringArrays {
    public static void main(String[] args) {
        String[] strs = {"This", "is", "a", "string", "test"};

        System.out.println("original array: ");
        for(String s: strs)
            System.out.print(s+" ");
        System.out.println("\n");

        //change a string
        strs[1] = "was";
        strs[3] = "test, too!";

        System.out.println("Modified array: ");
        for(String s: strs)
            System.out.print(s+" ");
    }
}
