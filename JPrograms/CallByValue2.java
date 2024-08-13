/*
 an int argument is passed to a method by using call by value.
*/

public class CallByValue2 {

    //method that attempts to modify the int value
    public static void modifyValue(int num) {
        num = num + 10;
        System.out.println("Inside modifyValue method: num= " + num);
    }
    public static void main(String[] args) {
        int OriginalValue = 15;
        System.out.println("Before calling modifyValue method: OriginalValue= " + OriginalValue);

        //calling the method with originalValue as the argument
        modifyValue(OriginalValue);
        System.out.println("After calling modifyValue method: OriginalValue=" +OriginalValue);
    }
}

//this demonstrates that in Java, 'int' values are passed by value, not by reference.