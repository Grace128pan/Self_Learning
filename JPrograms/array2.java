/*
 1. The program shows array initializer
 */



 class array2 {
    public static void main(String[] args) {
        int[] numbers = {99, -100, 100123, -10, 5623, 474, -12, 287, 49, 0};  //ARRAY INITIALIZER

        int min, max;
        min = max = numbers[0]; 
        for(int i=1; i<10; i++) {
            if(numbers[i] <min) min = numbers[i];
            if(numbers[i] >max) max = numbers[i];
        }
        System.out.println("min and max: " + min + " " + max);
    }
 }