/*
In bubble sort, we need to access and compare elements based on their indices to swap them if necessary.
For each loops in Java are designed to iterate over collections or arrays in a more readable and simpler way, but
they do not provide a way to access or manipulate the elements based on their indices directly
Bubble sort requires index-based operations for swapping elements. Therefore, traditional for loops are more suitable for
implementing such algorithms
 */

public class BubbleSort2 {
    public static void main(String[] args) {
        int[] nums = {99, 127, 34, -10000234, 235, 17, -12, 29, 120, 349};

        System.out.println("The original array is: ");
        for(int num: nums) {
            System.out.print(num + " ");
        }
        System.out.println();

        //Bubble sort using traditional for loops
        int n = nums.length;
        for(int i=0; i< n-1; i++) {
            for(int j=0; j<n-1-i; j++) {
                if(nums[j] > nums[j+1]) {
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }
        System.out.println("The sorted array is: ");
        for(int num: nums) {
            System.out.print(num + " ");
        }
        System.out.println();
    }
}
