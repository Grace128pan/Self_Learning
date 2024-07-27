/*
 The following program will demonstrate how to initialize a one-dimensional array of integers to the values 1 through 5
 */

public class IntegerInit {
    public static void main(String[] args) {
        int[] arr3 = new int[5];

        for(int i=0;i<arr3.length; i++) {
            arr3[i] = i+1;
        }

        System.out.println("Array initialized with values 1 through 5: ");
        for(int value: arr3) {
            System.out.print(value + " ");
        }
    }
}
