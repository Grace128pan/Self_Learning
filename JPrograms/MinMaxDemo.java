/*
 The program will help us to find the minimum and maximum values in an array of integers.
 */
public class MinMaxDemo {
    public static void main(String[] args) {
        int[] numbers = { 99, -10, 100123, 18, -978, 5623, 463, -9, 287, 49 };

        int min = numbers[0];
        int max = numbers[0];

        for(int i=1; i<numbers.length; i++) {
            if(numbers[i] < min) min = numbers[i];
            if(numbers[i] > max) max = numbers[i];
        }
        System.out.println("Min value is: " + min);
        System.out.println("Max value is: " + max);

        //we can also use for-each loop to find min and max values
        int[] nums = { 123, 37, 68, 1023, -19, -347, 987, 21, 0, 37 };
        int minVal = nums[0];
        int maxVal = nums[0];

        for(int num: nums) {
            if(num <minVal) minVal = num;
            if(num>maxVal) maxVal = num;
        }
        System.out.println("The min value will be: " + minVal);
        System.out.println("The max value will be: " + maxVal);
    }
}
