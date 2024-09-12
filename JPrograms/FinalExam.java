/*
page 294
 In java it is easy to prevent a method to be overridden or a class to be inherited by using the final keyword
 example:
 class A {
    final void meth() {
    System.out.println("This is a final method.");
    }
}
class B extends A {
    void meth() {  //Error! can't override.
    System.out.println("This method cannot be overridden.");
    }
 
final class A {
    //...}
class B extends A { //Error! Can't subclass A.
    //...}
 */

class ErrorMsg {
    //error codes
    final int OUTERR = 0;
    final int INERR = 1;
    final int DISKERR = 2;
    final int INDEXERR = 3;   //declare final constants

    String [] msgs = {
        "Output Error",
        "Input Error",
        "Disk Full",
        "Index Out-Of-Bounds"
    };

    //Return the error message
    String getErrorMsg(int i) {
        if (i>=0 && i<msgs.length)
            return msgs[i];
        else
            return "Invalid Error Code";
    }
}
public class FinalExam {
    public static void main(String[] args) {
   ErrorMsg err = new ErrorMsg();

   System.out.println(err.getErrorMsg(err.OUTERR));
   System.out.println(err.getErrorMsg(err.DISKERR));
}
}