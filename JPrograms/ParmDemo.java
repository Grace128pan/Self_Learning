/*
    * This program demonstrates the use of parameters in a method.
 */

package JPrograms;

class ChkNum {
    boolean isEven(int x) {      //x is an integer parameter of isEven method
        if (x%2== 0) return true;
        else return false;
    }
}

class ParmDemo {
    public static void main(String[] args) {
        ChkNum e = new ChkNum();

        if(e.isEven(10)) System.out.println("10 is even."); //10 is an argument
        if(e.isEven(9)) System.out.println("9 is even.");
        if(e.isEven(8)) System.out.println("8 is even.");
    }
}