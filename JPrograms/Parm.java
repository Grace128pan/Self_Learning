/*
1. A method can have multiple parameters. 
The following program shows the parameters of the isFactor() method.
2. when using multiple parameters, the parameters are separated by commas and they can be of different types.
int myMeth(int a, int b, double c, double d) {
    return a * b + (int) (c * d);
 */



 class Factor {
    boolean isFactor(int a, int b) {
        if(b % a == 0) return true;
        else return false;
    }
 }

 class Parm {
    public static void main(String[] args) {
        Factor x = new Factor();

        if(x.isFactor(2, 20)) System.out.println("2 is a factor.");
        if(x.isFactor(3, 20)) System.out.println("This won't be displayed.");
    }
 }