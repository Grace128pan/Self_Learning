/*
1.quicksort is based on the idea of partitions. The general procedure is to select a value, called the comparand, and then to partition
the array into two sections
all the elments greater than or equal to the partition value are put on one side, and those less than it are put on the other side
Initial: 70  80  30  90  40  50  60  20  10  100
partition value is 40
After first pass: 30  20  10  40  50  60  90  80  70  100
After second pass: 10  20  30  40  50  60  90  80  70  100
After third pass: 10  20  30  40  50  60  70  80  90  100
2.the process is recursive, so the partitioning process is applied to each of the two sections
3.the process continues until the array is completely sorted
 */
//this is a simple version of the quicksort algorithm
class Quicksort {
    //set up a call to the actual quicksort method
    static void qsort(char[] items) {
        qs(items, 0, items.length-1);
    }

    //a recursive version of quicksort for characters
    private static void qs(char[] items, int left, int right) {
        int i, j;
        char x, y;

        i=left; j=right;
        x = items[(left+right)/2];

        do {
            while((items[i] <x) &&(i<right)) i++;
            while((x<items[j])&&(j>left)) j--;

            if(i<=j) {
                y = items[i];
                items[i] = items[j];
                items[j] = y;
                i++; j--;          //keep the middle element in the middle and swap the left and right elements
            }
        } while(i<=j);
        if(left < j) qs(items, left, j);
        if(i<right) qs(items, i, right);
    }
}
public class QSDemo {
    public static void main(String[] args) {
        char[] a = {'d', 'x', 'a', 'r', 'p', 'j', 'i'};
        int i;

        System.out.print("Original array: ");
        for(i=0; i<a.length; i++)
            System.out.print(a[i]);
        System.out.println();

        //now, sort the array
        Quicksort.qsort(a);

        System.out.print("Sorted array: ");
        for(i=0; i<a.length; i++)
            System.out.print(a[i]);
        System.out.println();
    }
}
