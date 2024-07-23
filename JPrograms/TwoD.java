/*
1. to declare a two dimensional array, we can write in this form:
int[] [] table = new int[10][20];

The following program demonstrate a two dimensional array
 */



 class TwoD {
    public static void main(String[] args) {
        int [][] table = new int [3] [4];

        for(int t=0; t<3; t++) {
            for(int i=0; i<4; i++) {
                table[t][i] = (t*4) + i + 1;  
                System.out.print(table[t][i] + " ");
            }
            System.out.println();
        }
    }
 }