/*
 Using local variable type inference in a for loop
 1) local variable type inference can be used in a for loop when declaring and initializing the loop control variable inside a traditional for loop
 2) or when specifying the iteration variable in a for-each for

 The following program will use the type inference in both cases
 */

public class VarDemo3 {
    public static void main(String[] args) {
        //use type inference with the loop control variable
        System.out.print("Value of x: ");
        for(var x = 2.5; x<100.0; x = x*2)
            System.out.print(x+" ");
        
        System.out.println();

        //use type inference with the iteration variable
        int[] nums = {1, 2, 3, 4, 5, 6};
        System.out.print("Values in nums array: ");
        for(var n: nums)     //var n is the iteration variable and is inferred to be of type int
            System.out.print(n+" ");    
        
        System.out.println();
    }
}
