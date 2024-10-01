class ErrorMsg7 {
    static final int OUTER = 1;
    static final int DISKERR = 2;      //define final constants
//static means these variables belong to the class itself, not to individual objects. This allows them to be accessed without needing to create an object of the class
//final means these variables are set, their values can never change. They are constants
    String getErrorMsg7(int i) {   //this method takes an integer i as input and returns a specific error message based on that value
        switch(i) {
            case OUTER:
                return "Outer Error";
            case DISKERR:
                return "Disk Error";
            default:
                return "Unknown Error";

        }
    }
}
public class FinalStatic {
    public static void main(String[] args) {
        ErrorMsg7 err = new ErrorMsg7();   //create an object of the ErrorMsg class
        //in Java, we create objects from classes using the new keyword so that we can use the methods and variables defined in the class
        System.out.println(err.getErrorMsg7(ErrorMsg7.OUTER));
        System.out.println(err.getErrorMsg7(ErrorMsg7.DISKERR));
    }
}

