/*
4. Change the sort in Try This 5-1 so that it sorts an array of strings. Demonstrate that it
works.
 */



class StringSort {
    public static void main(String[] args) {
        String[] arr = {"Zebra", "Apple", "Banana", "Mango", "Orange"};
        System.out.println("original array: ");

        for(String s: arr) {
            System.out.print(s + " ");
        }

        bubbleSort(arr);

        System.out.println();
        System.out.println("Sorted array: ");
        for(String s: arr) {
            System.out.print(s + " ");
        }
    }

    public static void bubbleSort(String[] arr) {
        int n = arr.length;
        boolean swapped = true;
    
        for(int i=0; i< n-1; i++) {
            for(int j=0; j<n-1-i; j++) {
                if(arr[j].compareTo(arr[j+1]) >0) {
                    String temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    swapped = true;
                }
            }
            if(!swapped) {
                break;
            }
        }
    }
}