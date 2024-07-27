/*
 The following program will demonstrate two ways to declare a one-dimensional array of 12 doubles
 */

 class DoubleArrDemo {
    public static void main(String[] args) {
        double[] arr1 = new double[12];// using array initialization syntax

        for(int i=0; i<arr1.length; i++) {
            arr1[i] = i *1.1;
        }

        System.out.println("Array 1 with initialization is: ");
        for(double val: arr1) {
            System.out.print(val + " ");
        }

        System.out.println();
        
        //there is an alternative way to declare an array of doubles
        double[] arr2 = {0.0, 1.2, 3.4, 5.6, 7.8, 9.10, 11.12, 13.14, 15.16, 17.18, 19.20, 21.22}; //use bracket initialization syntax

        System.out.println("\nArray2 with initialization is: ");
        for(double v: arr2) {
            System.out.print(v + " ");
        }

    }
 }