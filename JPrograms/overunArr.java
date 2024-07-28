/*
It is an error to overrun the end of an array to index an array with a negative value in Java.
These actions result in an ArrayIndexOutOfBoundsException.
1)when we try to access an index that is greater than the length of the array
2)when we try to access an array with a negative index
 */

public class overunArr {
    public static void main(String[] args) {
        int [] array = {1,2,3,4,5};
        //Trying to access an element beyond the length of the array
        try {
            System.out.println("Accessing element at index 5: " + array[5]);
        } catch(ArrayIndexOutOfBoundsException e) {
            System.out.println("Error: " + e.getMessage());
        }

        //trying to access an element with a negative index
        try {
            System.out.println("Accessing element at index -1: " + array[-1]);
        } catch(ArrayIndexOutOfBoundsException e) {
            System.out.println("Error: " +e.getMessage());
        }

        //correctly accessing elements within the array bounds
        try {
            System.out.println("Accessing element at index 2: " + array[2]);
        } catch(ArrayIndexOutOfBoundsException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
