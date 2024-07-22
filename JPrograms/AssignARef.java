/*
 1. when you assign an array reference variable to another, you are simply changing what object that variable refers to
 you are not copying the array to be made, nor are you causing the contents of one array to be copied to the other
 */

 package JPrograms;

 class AssignARef {
    public static void main(String[] args) {
        int i;

        int[] nums1 = new int[10];
        int[]nums2 = new int[10];

        for(i=0; i<10; i++) 
            nums1[i] = i;

        for(i=0; i<10; i++)
            nums2[i] = -i;

        System.out.print("Here is nums1: ");
        for(i=0; i<10; i++)
            System.out.print(nums1[i] + " ");
        System.out.println();

        System.out.print("Here is nums2: ");
        for(i=0; i<10; i++)
            System.out.print(nums2[i] + " ");
        System.out.println();

        nums2 = nums1; //now nums2 refers to nums1 (assign an array reference.)

        System.out.print("Here is nums2 after assignment: ");
        for(i=0; i<10; i++)
            System.out.print(nums2[i] + " ");
        System.out.println();

        //now operate on nums1 arrary through nums2
        nums2[3] = 99;

        System.out.print("Here is nums1 after change through nums2: ");
        for(i=0; i<10; i++)
            System.out.print(nums1[i] + " ");
        System.out.println();
    }
 }
 //as the output shows, after the assignment of nums1 to nums2, both array reference variables refer to the same object