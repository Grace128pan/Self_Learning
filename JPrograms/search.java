/*
1. the following program uses a for loop to search an unsorted array for a value. It stops if the value is found.
 */

public class search {
    public static void main(String[] args) {
        int[] nums = { 6, 8, 3, 7, 5, 6, 1, 4 };
        int value = 5;
        boolean found = false;

        //use for-each loop style to search nums for val
        for(int x: nums) {
            if(x==value) {
                found = true;
                break;
            }
        }
        if(found) {
            System.out.println("Value has been found! Congraduations!");
        }
    }
}
