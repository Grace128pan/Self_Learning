/*
1. There are different sorting algorithms available in Java such as quick sort, shaker sort, shell sort.
2. Bubble sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.

The following program illustrates bubble sort(which is not so efficient, next step should be the learning fo quicksort)
*/



class BubbleSort {
    public static void main(String[] args) {
        int[] arr = { 99, -10, 100145, 18, -988, 5623, 464, -10, 289, 46};
        int a, b, t;
        int size = 10;
        
        //display original array
        System.out.print("original array is: ");
        for(int i=0; i<size; i++) System.out.print(" " + arr[i]);
        System.out.println();

        //This is the bubble sort
        for(a=1; a<size; a++)
             for(b=size-1; b>= a; b--) {
                if(arr[b-1] > arr[b]) {
                    //exchange elements
                    t = arr[b-1];
                    arr[b-1] = arr[b];
                    arr[b] = t;
                }
             }
        //display sorted array
        System.out.print("Sorted array is: ");
        for (int i=0; i<size; i++) System.out.print(" " + arr[i]);
        System.out.println();
    }
}