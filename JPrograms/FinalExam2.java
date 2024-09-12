/*
page 296
 we can make member variables both static and final
 this means they will be constants and can be accessed through the class name without needing an instance of the class
 */
class ErrorMsg1 {
    //static final variables(constants)
    static final int OUTERR = 0;
    static final int INERR = 1;
    static final int DISKERR = 2;
    static final int INDEXERR = 3;

    static final String[] msgs = {
        "Output Error",
        "Input Error",
        "Disk Full",
        "Index Out-Of-Bounds"
    };

    //return the error message
    String getErrorMsg1(int i) {
        if(i >=0 && i<msgs.length)
            return msgs[i];
        else
            return "Invalid Error Code";
    }
}

public class FinalExam2 {
    public static void main(String[] args) {
        ErrorMsg1 err = new ErrorMsg1();

        System.out.println(err.getErrorMsg1(ErrorMsg1.OUTERR));
        System.out.println(err.getErrorMsg1(ErrorMsg1.DISKERR));
    }
}
