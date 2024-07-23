/*
 The program will demonstrate for-each stype for on a two-dimensional array
 */

public class ForEach2 {
    public static void main(String[] args) {
        int sum = 0;
        int[][] nums = new int[3][5]; 

        //give nums some values
        for(int i=0; i<3; i++)
            for(int j=0;j<5; j++)
                nums[i][j] = (i+1)*(j+1);

        //use for-each for loop to display and sum the values
        for(int[]x: nums) {   // nums is a two-dimensional array(an array of arrays)
            for(int y: x) {   // x is an array of integers(one dimensional array), for each one-dimensional array in nums, x will take the values of nums[i]
                System.out.println("Value is: " + y);  //y represent each elment wihtin the one-dimensional array x, for each elelment in x, y takes the value of x[i]
                sum += y;
            }
        }
        System.out.println("Summation is: " + sum);
    }
}
