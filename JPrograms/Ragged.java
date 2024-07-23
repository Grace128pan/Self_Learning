/*
 We could manually allocate different size second dimensions
 */



 class Ragged {
    public static void main(String[] args) {
        int[][] riders = new int[7] [];

        //the second dimensions are 10 elements long, but there last two are two dimensions long
        riders[0] = new int[10];
        riders[1] = new int[10];
        riders[2] = new int[10];
        riders[3] = new int[10];
        riders[4] = new int[10];
        riders[5] = new int[2];
        riders[6] = new int[2];

        //fabricate some fake data
        for(int i=0; i<5; i++)
            for(int j=0;j<10; j++) 
                riders[i][j] = i+j+10;
        for(int i=5; i<7; i++)
            for(int j=0;j<2;j++) 
                riders[i][j] = i+j+10;
        
        System.out.println("Riders per trip during the week:");

        for(int i=0;i<5;i++) {
            for(int j=0;j<10;j++) 
                System.out.print(riders[i][j] + " ");
            System.out.println();
        }
        System.out.println();

        System.out.println("Riders per trip on the weekend: ");
        for(int i=5;i<7; i++) {
            for(int j=0; j<2; j++) 
                System.out.print(riders[i][j] + " ");
            System.out.println();
        }
 }
}