/*
1. for-each loop is used to iterate over elements of an array or a collection from start to finish.
for(type itr-var: collection) statement-or-block

int[] nums = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
int sum = 0;
for(int i=0; i< 10; i++) sum += nums[i];

for-each loop
int[] nums = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
int sum = 0;

for(int x: nums) sum += x;

One of the most important uses of the for-each style for is to cycle through the contents of a collection defined by the
collections Framework. 
The collection framework is a set of classes that implement various data structures, such as lists, vectors, sets and maps

Java: The complete Reference, 13th edition can be found by Herbert Schildt

for-each loop:
its iteration variable is "read-only". An assignment to the iteration variable has no effect on the underlying array
 */


public class ForEachDemo {
    public static void main(String[] args) {
        int[] myNums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int sum = 0;

        //use for-each style for to display and sum the values
        for(int x: myNums) {
            System.out.println("Value is: " + x);
            sum += x;
        }
        System.out.println("Summation is: " + sum);

        System.out.println();

        //it is possible to terminate the loop earlier by using break statement
        for(int x: myNums) {
            System.out.println("The new value is: " + x);
            sum += x;
            if(x==5) break; //stop the loop when 5 is obtained
        }
        System.out.println("New Summation is: " + sum); // the new sum is 70(added from the previous sum)
    }
}
