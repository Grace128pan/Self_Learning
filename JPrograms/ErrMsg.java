/*
 a method can return any kind of data, including class types
 the follow example shows how to return a string object
 */

class ErrorMsg {
    String[] msgs = {
        "Output Error",
        "Input Error",
        "Disk Full",
        "Index out of bounds"
    };

    //return error message
    String getErrorMsg(int i) {   //retujrn an object of type String
        if(i>=0 & i< msgs.length)
        return msgs[i];
        else
        return "Invalid Error Code";
    }
}
public class ErrMsg {
    public static void main(String[] args) {
        ErrorMsg err = new ErrorMsg();

        System.out.println(err.getErrorMsg(2));
        System.out.println(err.getErrorMsg(19));
    }
}
