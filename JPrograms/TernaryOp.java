/*
 ? operator can replace if-else statement
 if(condition) myVar = expression1;
 else myVar = expression2;
    can be written as
    myVar = (condition) ? expression1 : expression2;

absval = val <0 ? -val:val;  //get absolute value of val
can be written as
if(val < 0)
    absval = -val;
else
    absval = val;

The following program prevent a division by zero using ?.
 */

 class TernaryOp {
    public static void main(String[] args) {
        int result;

        for(int i = -5; i<6; i++) {
            result = i!=0 ? 100/i: 0;
            if(i!=0)
                System.out.println("100/ " + i + " is " + result);
        }

        System.out.println();
        //There is a simpler version of the above program
        for(int i= -8; i<6; i++) {
            if(i!=0 ?true :false)
                System.out.println("100/ " + i + " is " + 100/i);
        }
    }
 }
