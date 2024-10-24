/*
a nested class: this is a class that is declared within another class
a nested class does not exist independently of the enclosing class. the scope of a nested class is bounded by its outer class
a nested class that is declared directly within its enclosing class scope is a member of its enclosing class
it is also possible to declare a nested class that is local to a block

2 types of nested classes:
1. static nested class
2. inner class(non-static nested class)
inner class has access to all of the variables and methods of its outer class and may refer to them directly in the same way that other non-static members of the outer class do
 */

//use an inner class
class Outer {
    int[] nums;

    Outer(int[] n) {
        nums = n;
    }

    void analyze() {
        Inner inOb = new Inner();

        System.out.println("Minimum: " + inOb.min());
        System.out.println("Maximum: " + inOb.max());
        System.out.println("Average: " + inOb.avg());
    }

    //This is an inner class
    class Inner {
        int min() {
            int m = nums[0];

            for(int i=1; i<nums.length; i++) {
                if(nums[i] <m) m = nums[i];
            }
            return m;
        }

        int max() {
            int m = nums[0];
            for(int i=1; i<nums.length; i++) {
                if(nums[i] > m) m = nums[i];
            }
            return m;
        }

        int avg() {
            int a = 0;
            for(int i=0; i<nums.length; i++) {
                a += nums[i];
            }
            return a/nums.length;
        }
    }
}
public class NestedClassDemo {
    public static void main(String[] args) {
        int[] x = {3, 2, 1, 5, 6, 9, 7, 8};
        Outer outOb = new Outer(x);

        outOb.analyze();
    }
}
