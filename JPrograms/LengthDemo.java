/*
 1. length contains the size of the array
 */



 class LengthDemo {
    public static void main(String[] args) {
        int[] list = new int[10];
        int [] Num = { 1, 2, 3};
        int [] [] table = {
            {1, 2, 3},
            {4, 5},
            {6, 7, 8, 9}
        };

        System.out.println("Length of list is " + list.length);
        System.out.println("Length of Num is " + Num.length);
        System.out.println("Length of table is " + table.length);
        System.out.println("Length of table[0] is " + table[0].length);
        System.out.println("Length of table[1] is " + table[1].length);
        System.out.println("Length of table[2] is " + table[2].length);
        System.out.println();

        //use length to initialize list
        for(int i=0; i<list.length; i++)
            list[i] = i*i;
        
        System.out.println("Here is list: ");
        //now use the length to display list
        for(int i=0; i<list.length; i++)
            System.out.print(list[i] + " ");
        System.out.println();
    }
 }