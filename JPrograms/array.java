/*
1. the following program finds the minimum and maximum values stored in the nums array by cycling through the array using a for loop
2. one-dimensional array can be easily initialized as:
type[] array-name = {va1, val2, val3,...., valN};
3. actually there is no need to explicitly use the new operator to create an array object
*/

 

 class array {
    public static void main(String[] args) {
        int[] nums = new int[10];
        int min, max;

        nums[0] = 99;
        nums[1] = -10;
        nums[2] = 100123;
        nums[3] = 18;
        nums[4] = -978;
        nums[5] = 5623;
        nums[6] = 463;
        nums[7] = -9;
        nums[8] = 287;
        nums[9] = 49;

        min = max = nums[0];
        for(int i=1; i<10; i++) {
            if(nums[i] <min) min = nums[i];
            if(nums[i] >max) max = nums[i];
        }
        System.out.println("The min and max are: " + min + " " + max);
    }
 }