/*
1. Java allows more than 2 dimensions
type[][]..[] = new type[size1][size2][size3]...[sizeN];
int [][][] multidim = new int[4][10][3];

the general form of array initialization for a two-dimensional array is shown:
type-specifier[][] array_name = {
{val, val, val...val},
{val, val, val...val},
.
.
.
{val, val, val...val}
};

alternative array declaration syntax
int counter[] = new int[3];
int[] counter[] = new int[3]; //common in C and C++

char table[][] = new char[3][4];
char [][] table = new char[3][4];
 */



 class Squares {
    public static void main(String[] arg) {
        int [][] sqrs = {
            {1, 1},
            {2, 4},
            {3, 9},
            {4, 16},
            {5, 25},
            {6, 36},
            {7, 49},
            {8, 64},
            {9, 81},
            {10, 100}
        };

        int i, j;

        for(i=0; i<10; i++) {
            for(j=0; j<2; j++)
                System.out.print(sqrs[i][j] + " ");
            System.out.println();
        }
    }
 }