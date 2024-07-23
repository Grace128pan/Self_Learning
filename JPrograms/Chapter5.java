/*
 chapter 5
 more data types and operators
 key skills & concepts
 1. understand and create arrays
 2. create multidimensional arrays
 3. create irregular arrays
 4. know the alternative array declaration syntax
 5. assign array reference
 6. use the length array member
 7. use the for-each style for loop
 8. work with strings
 9. apply command-line arguments
 10. use type inference with local variables
 11. use the bitwise operators
 12. apply the ? operator

 array
 array in Java has one special attribute: they are implemented as objects

 one-dimensional array
 we can use one-dimensional array to store the account numbers of the active users on a network
 type[] array-name = new type[size];

 arrays in Java are dynamically allocated using the new operator
 int[] sample = new int[10];
 it is similarly as:
 int[] sample;
 sample = new int[10];
 the first element is sample[0], the last element is sample[9]

 an individual element within an array is accessed by the use of an index
 an index describes the position of an element within an array

 The following demonstrate a one-dimensional array
 */

 

 class Chapter5 {
    public static void main(String[] args) {
        int[] sample = new int[10];
        
        for (int i=0; i<10; i++) {
            sample[i] = i;
            System.out.println("This is sample[" + i + "]: " + sample[i]);
        }
    }
 }